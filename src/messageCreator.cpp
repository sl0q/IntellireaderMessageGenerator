#include "messageCreator.h"

void append_big_endian(std::vector<uint8_t> &buf, uint16_t n)
{
    buf.push_back((n & 0xFF00) >> 8); // добавили старший разряд
    buf.push_back(n & 0xFF);          // добавили младший разряд
}

MessageCreator::MessageCreator(std::string inputJsonPath)
{
    this->inputFilePath = inputJsonPath;
    // открыть JSON
    std::ifstream file(inputJsonPath);
    if (!file.is_open())
        throw ex::CantOpenFile("Failed to open file " + inputJsonPath);

    // записать данные в переменную
    json jsonContent;
    file >> jsonContent;

    file.close();

    // парсинг
    for (auto &message : jsonContent["messages"])
    {
        this->jsonMessages.push_back(message);
    }
}

MessageCreator::~MessageCreator()
{
    if (this->msg)
        delete this->msg; // что если NULL?
}

google::protobuf::Message *MessageCreator::find_protobuf_module(uint8_t moduleID)
{
    switch (moduleID)
    {
    case 1: // Miscellaneous
        this->messageTypeStr = "Miscellaneous";
        return new Miscellaneous();

    case 2:
        // ContactLevel2 не описан в документации
        return new ContactLevel1();
        //     return new ContactLevel1();

    case 3:
        return new ContactlessLevel1();

        // case 4:
        //     return new ContactlessLeve2();

        // case 5:
        //     return new Mifare();

        // case 6:
        //     return new PinPad();

        // case 7:
        //     return new Service();

        // case 8:
        //     return new StmCard();

        // case 9:
        //     return new NtagCard();

        // case 0x0a:
        //     return new Gui();

        // case 0x0b:
        //     return new Touchscreen();

        // case 0x0c:
        //     return new Complex();

        // case 0x0d:
        //     return new QrCode();

        // case 0x0e:
        //     return new Cipurse();

        // case 0x10:
        //     return new Turnstile();

        // case 0x11:
        //     return new MifareExtended();

        // case 0x12:
        //     return new Troika();

    default:
        printf("Module %01x not found\n", this->moduleID);
        return NULL;
    }
}

void MessageCreator::generate_messages(const std::string inputFilePath, const std::string outputFilePath)
{
    std::ofstream newFile(outputFilePath);
    if (!newFile.is_open())
        throw ex::CantOpenFile("Failed to open file " + outputFilePath);
    newFile.close();

    this->messageIndex = 0;
    for (auto &newJsonMessage : this->jsonMessages)
    {
        std::string messageTitle = "Unnamed message";
        if (newJsonMessage.count("title") != 0)
            messageTitle = newJsonMessage.at("title").get<std::string>();

        if (newJsonMessage.count("moduleID") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":moduleID] field in [" + inputFilePath + "] file.");
        this->moduleID = newJsonMessage.at("moduleID").get<uint8_t>();

        if (newJsonMessage.count("messageType") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":messageType] field in [" + inputFilePath + "] file.");
        this->messageType = newJsonMessage.at("messageType").get<uint8_t>();

        if (newJsonMessage.count("messageID") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":messageID] field in [" + inputFilePath + "] file.");
        this->messageID = newJsonMessage.at("messageID").get<uint8_t>();

        this->msg = find_protobuf_module(this->moduleID);
        if (!this->msg)
        {
            std::cout << "Unrecognised IR module\n"
                      << "MSG_ID: " << this->messageIndex
                      << "Module_ID: " << moduleID;
            continue;
        }

        std::ofstream file(outputFilePath, std::ofstream::app);
        if (!file.is_open())
            throw ex::CantOpenFile("Failed to open file " + outputFilePath);

        file << messageTitle << "\n";
        std::string command;
        json data;
        bool isChecksumValid = true;

        if (newJsonMessage.count("command") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":command] field in [" + inputFilePath + "] file.");
        command = newJsonMessage.at("command").get<std::string>();

        if (newJsonMessage.count("data") != 0)
            data = newJsonMessage["data"];

        if (newJsonMessage.count("checksumValid") != 0)
            isChecksumValid = newJsonMessage.at("checksumValid").get<bool>();

        Payload *payload;

        switch (this->moduleID)
        {
        case 1: // Miscellaneous
        {
            if ("set_leds_state" == command)
                payload = &generate_set_leds_state(data);
            else if ("reboot_device" == command)
                payload = &generate_reboot_device(data);
            else if ("read_device_info" == command)
                payload = &generate_read_device_info(data);
            else if ("make_sound" == command)
                payload = &generate_make_sound(data);
            else if ("get_echo" == command)
                payload = &generate_get_echo(data);
            else if ("get_device_status" == command)
                payload = &generate_get_device_status(data);
            else if ("get_device_statistic" == command)
                payload = &generate_get_device_statistic(data);
            else if ("change_lan_settings" == command)
                payload = &generate_change_lan_settings(data);
            else if ("change_baudrate" == command)
                payload = &generate_change_baudrate(data);

            break;
        }
        case 2: //  ContactLevel1
        {
            if ("power_on_card" == command)
                payload = &generate_power_on(data);
            else if ("power_off_card" == command)
                payload = &generate_power_off(data);
            else if ("transmit_apdu" == command)
                payload = &generate_transmit_apdu(data);
            break;
        }
        case 3: //  ContactlessLevel1
        {
            if ("poll_for_token" == command)
                payload = &generate_poll_for_token(data);
            else if ("emv_removal" == command)
                payload = &generate_emv_removal(data);
            else if ("tsv_bit_array" == command)
                payload = &generate_tsv_bit_array(data);
            else if ("iso14443_4_command" == command)
                payload = &generate_iso14443_4_command(data);
            else if ("power_off_field" == command)
                payload = &generate_power_off_field(data);
            else if ("request_for_ats" == command)
                payload = &generate_request_for_ats(data);
            break;
        }
        default:
            break;
        }

        auto m = compose_message(*payload, isChecksumValid);
        file << m.getDataAsString() << "\n"
             << bs64::base64_encode(m.getData()) << "\n"
             << m.getDebugString() << "\n\n";

        delete payload;
        file << "###################################################################\n\n\n";

        file.close();

        ++this->messageIndex;
    }
}

const Msg &MessageCreator::compose_message(Payload &generatedPayload, bool isChecksumValid)
{
    std::vector<uint8_t> buf;

    buf.push_back(0x49); // add 'I'
    buf.push_back(0x52); // add 'R'

    const uint16_t kHeaderLen = 3; // msg_id (1 byte) + module (1 byte) + type (1 byte)
    uint16_t payload_size = generatedPayload.getData().size();
    uint16_t msg_len = kHeaderLen + payload_size;
    append_big_endian(buf, msg_len);

    buf.push_back(this->messageID);
    buf.push_back(this->moduleID);
    buf.push_back(this->messageType);

    buf.insert(buf.end(), generatedPayload.getData().begin(), generatedPayload.getData().end());

    uint16_t crc = crc::calcCrc16(buf);
    if (!isChecksumValid)
        ++crc;
    append_big_endian(buf, crc);

    return *(new Msg(generatedPayload.getDebugString(), buf));
}

Payload &MessageCreator::generate_set_leds_state(json data)
{
    std::vector<uint8_t> buf;
    misc::leds::Leds *leds = new misc::leds::Leds();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_set_leds_state(leds);

    if (data.count("blue") != 0)
        leds->set_blue(data.at("blue").get<bool>());
    if (data.count("yellow") != 0)
        leds->set_yellow(data.at("yellow").get<bool>());
    if (data.count("green") != 0)
        leds->set_green(data.at("green").get<bool>());
    if (data.count("red") != 0)
        leds->set_red(data.at("red").get<bool>());
    if (data.count("lcd_backlight") != 0)
        leds->set_lcd_backlight(data.at("lcd_backlight").get<bool>());

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_reboot_device(json data)
{
    std::vector<uint8_t> buf;

    misc::reboot::Reboot *reboot = new misc::reboot::Reboot();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_reboot_device(reboot);

    if (data.count("operationMode") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data::operationMode] field in [" + this->inputFilePath + "] file.");

    auto operationMode = new misc::reboot::Reboot_OperationMode();

    if (!misc::reboot::Reboot_OperationMode_Parse(data.at("operationMode").get<std::string>(), operationMode))
        throw std::invalid_argument("Failed to parse [operationMode] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data::operationMode].");

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_read_device_info(json data)
{
    std::vector<uint8_t> buf;

    misc::device::ReadDeviceInfo *readDeviceInfo = new misc::device::ReadDeviceInfo();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_read_device_info(readDeviceInfo);

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_make_sound(json data)
{
    std::vector<uint8_t> buf;

    misc::buzzer::MakeSound *makeSound = new misc::buzzer::MakeSound();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_make_sound(makeSound);

    misc::buzzer::Note *note;

    if (data.count("melody") != 0)
    {
        for (auto &melody : data["melody"])
        {
            note = makeSound->add_melody();
            if (melody.count("durationMs") == 0)
                throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:melody:durationMs] field in [" + this->inputFilePath + "] file.");
            note->set_duration_ms(melody.at("durationMs").get<uint32_t>());

            if (melody.count("frequencyHz") == 0)
                throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:melody:frequencyHz] field in [" + this->inputFilePath + "] file.");
            note->set_frequency_hz(melody.at("frequencyHz").get<uint32_t>());

            if (melody.count("silenceDurationMs") != 0)
                note->set_silence_duration_ms(melody.at("silenceDurationMs").get<uint32_t>());
        }
    }

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_get_echo(json data)
{
    std::vector<uint8_t> buf;

    misc::echo::GetEcho *getEcho = new misc::echo::GetEcho();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_get_echo(getEcho);

    if (data.count("sendPending") != 0)
        getEcho->set_send_pending(data.at("sendPending").get<bool>());
    if (data.count("replySize") != 0)
        getEcho->set_reply_size(data.at("replySize").get<uint32_t>());
    if (data.count("data") != 0)
        getEcho->set_data(data.at("data").get<std::string>());

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_get_device_status(json data)
{
    std::vector<uint8_t> buf;

    misc::device::GetDeviceStatus *getDeviceStatus = new misc::device::GetDeviceStatus();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_get_device_status(getDeviceStatus);

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_get_device_statistic(json data)
{
    std::vector<uint8_t> buf;

    misc::stats::GetDeviceStatistic *getDeviceStatistic = new misc::stats::GetDeviceStatistic();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_get_device_statistic(getDeviceStatistic);

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_change_lan_settings(json data)
{
    std::vector<uint8_t> buf;

    misc::lan_settings::ChangeLanSettings *changeLanSettings = new misc::lan_settings::ChangeLanSettings();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_change_lan_settings(changeLanSettings);

    auto lanSettings = new misc::lan_settings::LanSettings();
    changeLanSettings->set_allocated_lan_settings(lanSettings);

    misc::lan_settings::ManualSettings *manual;
    misc::lan_settings::Dhcp *dhcp;

    if (data.count("lanSettings") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:lanSettings] field in [" + this->inputFilePath + "] file.");

    if (data["lanSettings"].count("manual") != 0)
    {
        manual = new misc::lan_settings::ManualSettings();
        lanSettings->set_allocated_manual(manual);
        json manualJson = data["lanSettings"]["manual"];

        if (manualJson.count("localAddress") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:lanSettings:manual:localAddress] field in [" + this->inputFilePath + "] file.");
        manual->set_local_address(manualJson.at("localAddress").get<std::string>());

        if (manualJson.count("netmask") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:lanSettings:manual:netmask] field in [" + this->inputFilePath + "] file.");
        manual->set_netmask(manualJson.at("netmask").get<std::string>());

        if (manualJson.count("gateway") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:lanSettings:manual:gateway] field in [" + this->inputFilePath + "] file.");
        manual->set_gateway(manualJson.at("gateway").get<std::string>());
    }
    else if (data["lanSettings"].count("dhcp") != 0)
    {
        dhcp = new misc::lan_settings::Dhcp();
        lanSettings->set_allocated_dhcp(dhcp);
    }
    else
        throw ex::JsonParsingException("Could not find oneof [messages:" + std::to_string(this->messageIndex) + ":data:lanSettings:ip4_method] field in [" + this->inputFilePath + "] file.");

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_change_baudrate(json data)
{
    std::vector<uint8_t> buf;

    misc::baudrate::ChangeBaudrate *changeBaudarate = new misc::baudrate::ChangeBaudrate();

    dynamic_cast<Miscellaneous *>(this->msg)->set_allocated_change_baudrate(changeBaudarate);

    if (data.count("baudrate") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:baudrate] field in [" + this->inputFilePath + "] file.");

    auto newBaudrate = new misc::baudrate::Baudrate();
    if (!misc::baudrate::Baudrate_Parse(data.at("baudrate").get<std::string>(), newBaudrate))
        throw std::invalid_argument("Failed to parse [baudrate] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data::baudrate].");
    changeBaudarate->set_baudrate(*newBaudrate);

    std::cout << this->msg->DebugString() << std::endl;

    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_power_on(json data)
{
    auto powerOnCard = new contact::power_on::PowerOnCard();

    dynamic_cast<ContactLevel1 *>(this->msg)->set_allocated_power_on_card(powerOnCard);

    if (data.count("slot") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:slot] field in [" + this->inputFilePath + "] file.");

    auto newSlot = new contact::card_slot::CardSlot();
    if (!contact::card_slot::CardSlot_Parse(data.at("slot").get<std::string>(), newSlot))
        throw std::invalid_argument("Failed to parse [slot] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data::slot].");
    powerOnCard->set_slot(*newSlot);

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_power_off(json data)
{
    auto powerOffCard = new contact::power_off::PowerOffCard();

    dynamic_cast<ContactLevel1 *>(this->msg)->set_allocated_power_off_card(powerOffCard);

    if (data.count("slot") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:slot] field in [" + this->inputFilePath + "] file.");

    auto newSlot = new contact::card_slot::CardSlot();
    if (!contact::card_slot::CardSlot_Parse(data.at("slot").get<std::string>(), newSlot))
        throw std::invalid_argument("Failed to parse [slot] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data::slot].");
    powerOffCard->set_slot(*newSlot);

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_transmit_apdu(json data)
{
    auto transmitApdu = new contact::iso7816_4::TransmitApdu();

    dynamic_cast<ContactLevel1 *>(this->msg)->set_allocated_transmit_apdu(transmitApdu);

    if (data.count("slot") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:slot] field in [" + this->inputFilePath + "] file.");
    auto newSlot = new contact::card_slot::CardSlot();
    if (!contact::card_slot::CardSlot_Parse(data.at("slot").get<std::string>(), newSlot))
        throw std::invalid_argument("Failed to parse [slot] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data::slot].");
    transmitApdu->set_slot(*newSlot);

    if (data.count("commandApdu") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:commandApdu] field in [" + this->inputFilePath + "] file.");
    transmitApdu->set_command_apdu(data.at("commandApdu").get<std::string>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_poll_for_token(json data)
{
    auto pollForToken = new contactless::poll::PollForToken();

    dynamic_cast<ContactlessLevel1 *>(this->msg)->set_allocated_poll_for_token(pollForToken);

    if (data.count("timeout") != 0)
        pollForToken->set_timeout(data.at("timeout").get<uint32_t>());
    if (data.count("preferMifare") != 0)
        pollForToken->set_prefer_mifare(data.at("preferMifare").get<bool>());
    if (data.count("pollStmSri512") != 0)
        pollForToken->set_poll_stm_sri512(data.at("pollStmSri512").get<bool>());
    if (data.count("pollingMode") != 0)
    {
        contactless::poll::PollingMode newPollingMode;
        if (!contactless::poll::PollingMode_Parse(data.at("pollingMode").get<std::string>(), &newPollingMode))
            throw std::invalid_argument("Failed to parse [pollingMode] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data::pollingMode].");
        pollForToken->set_polling_mode(newPollingMode);
    }
    if (data.count("enableEcp") != 0)
    {
        contactless::poll::AppleEcp newAppleEcp;
        if (!contactless::poll::AppleEcp_Parse(data.at("enableEcp").get<std::string>(), &newAppleEcp))
            throw std::invalid_argument("Failed to parse [enableEcp] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data::enableEcp].");
        pollForToken->set_enable_ecp(newAppleEcp);
    }
    if (data.count("lightUpLed") != 0)
        pollForToken->set_light_up_led(data.at("lightUpLed").get<bool>());
    if (data.count("pollIso15693") != 0)
        pollForToken->set_poll_iso15693(data.at("pollIso15693").get<bool>());
    if (data.count("pollAskCts") != 0)
        pollForToken->set_poll_ask_cts(data.at("pollAskCts").get<bool>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_emv_removal(json data)
{
    auto emvRemoval = new contactless::emv_removal::EmvRemoval();

    dynamic_cast<ContactlessLevel1 *>(this->msg)->set_allocated_emv_removal(emvRemoval);
    if (data.count("timeout") != 0)
        emvRemoval->set_timeout(data.at("timeout").get<uint32_t>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_tsv_bit_array(json data)
{
    auto tsvBitArr = new contactless::transceive::TransceiveBitArray();

    dynamic_cast<ContactlessLevel1 *>(this->msg)->set_allocated_tsv_bit_array(tsvBitArr);

    if (data.count("bitArray") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:bitArray] field in [" + this->inputFilePath + "] file.");
    if (data["bitArray"].count("data") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:bitArray:data] field in [" + this->inputFilePath + "] file.");
    if (data["bitArray"].count("count") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:bitArray:count] field in [" + this->inputFilePath + "] file.");
    if (data.count("responseTimeoutUs") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:responseTimeoutUs] field in [" + this->inputFilePath + "] file.");

    auto bitArray = new contactless::transceive::BitArray();
    bitArray->set_data(data["bitArray"].at("data").get<std::string>());
    bitArray->set_count(data["bitArray"].at("count").get<uint32_t>());
    tsvBitArr->set_allocated_bit_array(bitArray);

    tsvBitArr->set_response_timeout_us(data.at("responseTimeoutUs").get<uint32_t>());
    if (data.count("tx_crc") != 0)
        tsvBitArr->set_tx_crc(data.at("tx_crc").get<bool>());
    if (data.count("rx_crc") != 0)
        tsvBitArr->set_rx_crc(data.at("rx_crc").get<bool>());
    if (data.count("parity") != 0)
        tsvBitArr->set_parity(data.at("parity").get<bool>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_iso14443_4_command(json data)
{
    auto isoCommand = new contactless::iso14443_4::Command();

    dynamic_cast<ContactlessLevel1 *>(this->msg)->set_allocated_iso14443_4_command(isoCommand);

    if (data.count("data") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:data] field in [" + this->inputFilePath + "] file.");

    isoCommand->set_data(data.at("data").get<std::string>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_power_off_field(json data)
{
    auto powerOffField = new contactless::rf_field::PowerOffField();

    dynamic_cast<ContactlessLevel1 *>(this->msg)->set_allocated_power_off_field(powerOffField);

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_request_for_ats(json data)
{
    auto rats = new contactless::iso14443_4a::RequestForAnswerToSelect();

    dynamic_cast<ContactlessLevel1 *>(this->msg)->set_allocated_request_for_ats(rats);

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}
