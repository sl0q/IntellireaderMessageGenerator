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
        this->messageTypeStr = "ContactLevel1";
        return new ContactLevel1();
        //     return new ContactLevel1();

    case 3:
        this->messageTypeStr = "ContactlessLevel1";
        return new ContactlessLevel1();

    case 4:
        this->messageTypeStr = "ContactlessLevel2";
        return new ContactlessLevel2();

        // case 5:
        //     return new Mifare();

        // case 6:
        //     return new PinPad();

    case 7:
        return new Service();

        // case 8:
        //     return new StmCard();

        // case 9:
        //     return new NtagCard();

    case 0x0a:
        return new Gui();

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

        Payload *payload = nullptr;

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
        case 4:
        {
            if ("perform_transaction")
                payload = &generate_perform_transaction(data);
            break;
        }
        case 7:
        {
            if ("prepare_update" == command)
                payload = &generate_prepare_update(data);
            else if ("update_block" == command)
                payload = &generate_update_block(data);
            else if ("apply_update" == command)
                payload = &generate_apply_update(data);
            else if ("rollback_update" == command)
                payload = &generate_rollback_update(data);
            else if ("get_diagnostic" == command)
                payload = &generate_get_diagnostic(data);
            else if ("prepare_for_config" == command)
                payload = &generate_prepare_for_config(data);
            else if ("upload_block_of_config" == command)
                payload = &generate_upload_block_of_config(data);
            else if ("check_configuration" == command)
                payload = &generate_check_configuration(data);
            break;
        }
        case 10:
        {
            if ("show_screen" == command)
                payload = &generate_show_screen(data);
            else if ("input_dialog" == command)
                payload = &generate_input_dialog(data);
            else if ("menu_dialog" == command)
                payload = &generate_menu_dialog(data);
            else if ("draw_bitmap" == command)
                payload = &generate_draw_bitmap(data);
            else if ("slideshow" == command)
                payload = &generate_slideshow(data);
            break;
        }
        default:
            break;
        }

        if (payload)
        {
            auto m = compose_message(*payload, isChecksumValid);
            file << m.getDataAsString() << "\n"
                 << bs64::base64_encode(m.getData()) << "\n"
                 << m.getDebugString() << "\n\n";

            delete payload;
            file << "###################################################################\n\n\n";
        }

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

Payload &MessageCreator::generate_set_leds_state(json &data)
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

Payload &MessageCreator::generate_reboot_device(json &data)
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

Payload &MessageCreator::generate_read_device_info(json &data)
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

Payload &MessageCreator::generate_make_sound(json &data)
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

Payload &MessageCreator::generate_get_echo(json &data)
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

Payload &MessageCreator::generate_get_device_status(json &data)
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

Payload &MessageCreator::generate_get_device_statistic(json &data)
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

Payload &MessageCreator::generate_change_lan_settings(json &data)
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

Payload &MessageCreator::generate_change_baudrate(json &data)
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

Payload &MessageCreator::generate_power_on(json &data)
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

Payload &MessageCreator::generate_power_off(json &data)
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

Payload &MessageCreator::generate_transmit_apdu(json &data)
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

Payload &MessageCreator::generate_poll_for_token(json &data)
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

Payload &MessageCreator::generate_emv_removal(json &data)
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

Payload &MessageCreator::generate_tsv_bit_array(json &data)
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

Payload &MessageCreator::generate_iso14443_4_command(json &data)
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

Payload &MessageCreator::generate_power_off_field(json &data)
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

Payload &MessageCreator::generate_request_for_ats(json &data)
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

Payload &MessageCreator::generate_perform_transaction(json &data)
{
    if (data.count("pollForToken") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:pollForToken] field in [" + this->inputFilePath + "] file.");
    if (data.count("amountAuthorized") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:amountAuthorized] field in [" + this->inputFilePath + "] file.");
    if (data.count("transactionDate") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:transactionDate] field in [" + this->inputFilePath + "] file.");
    if (data.count("transactionType") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:transactionType] field in [" + this->inputFilePath + "] file.");
    if (data.count("terminalCountryCode") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:terminalCountryCode] field in [" + this->inputFilePath + "] file.");
    if (data.count("transactionTime") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:transactionTime] field in [" + this->inputFilePath + "] file.");
    if (data.count("transactionCurrencyCode") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:transactionCurrencyCode] field in [" + this->inputFilePath + "] file.");

    auto performTransaction = new contactless::transaction::PerformTransaction();

    dynamic_cast<ContactlessLevel2 *>(this->msg)->set_allocated_perform_transaction(performTransaction);

    auto pollForToken = new contactless::poll::PollForToken();
    auto tempMessagePointer = this->msg;
    this->msg = find_protobuf_module(3);
    auto pollForTokenPayload = generate_poll_for_token(data["pollForToken"]);
    delete this->msg;
    this->msg = tempMessagePointer;
    pollForToken->ParseFromArray(pollForTokenPayload.getData().data(), pollForTokenPayload.getData().size());
    performTransaction->set_allocated_poll_for_token(pollForToken);

    performTransaction->set_amount_authorized(data.at("amountAuthorized").get<uint64_t>());
    performTransaction->set_transaction_date(data.at("transactionDate").get<std::string>());
    performTransaction->set_transaction_time(data.at("transactionType").get<std::string>());
    performTransaction->set_terminal_country_code(data.at("terminalCountryCode").get<std::string>());
    performTransaction->set_transaction_time(data.at("transactionTime").get<std::string>());
    performTransaction->set_transaction_currency_code(data.at("transactionCurrencyCode").get<std::string>());

    if (data.count("mastercardAmount") != 0)
        performTransaction->set_mastercard_amount(data.at("mastercardAmount").get<uint64_t>());
    if (data.count("maestroAmount") != 0)
        performTransaction->set_maestro_amount(data.at("maestroAmount").get<uint64_t>());
    if (data.count("mirAmount") != 0)
        performTransaction->set_mir_amount(data.at("mirAmount").get<uint64_t>());
    if (data.count("troikaAmount") != 0)
        performTransaction->set_troika_amount(data.at("troikaAmount").get<uint64_t>());
    if (data.count("unionpayAmount") != 0)
        performTransaction->set_unionpay_amount(data.at("unionpayAmount").get<uint64_t>());
    if (data.count("merchantNameAndLocation") != 0)
        performTransaction->set_merchant_name_and_location(data.at("merchantNameAndLocation").get<std::string>());
    if (data.count("merchantCategoryCode") != 0)
        performTransaction->set_merchant_category_code(data.at("merchantCategoryCode").get<std::string>());
    if (data.count("terminalIdentification") != 0)
        performTransaction->set_terminal_identification(data.at("terminalIdentification").get<std::string>());
    if (data.count("debug") != 0)
        performTransaction->set_debug(data.at("debug").get<bool>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_prepare_update(json &data)
{
    if (data.count("firmwareImageSize") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:firmwareImageSize] field in [" + this->inputFilePath + "] file.");

    auto prepareUpdate = new srv::firmware_update::Prepare();

    dynamic_cast<Service *>(this->msg)->set_allocated_prepare_update(prepareUpdate);

    prepareUpdate->set_firmware_image_size(data.at("firmwareImageSize").get<uint32_t>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_update_block(json &data)
{
    if (data.count("data") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:data] field in [" + this->inputFilePath + "] file.");

    auto updateBlock = new srv::firmware_update::UpdateBlock();

    dynamic_cast<Service *>(this->msg)->set_allocated_update_block(updateBlock);

    updateBlock->set_data(data.at("data").get<std::string>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_apply_update(json &data)
{
    auto applyUpdate = new srv::firmware_update::Apply();

    dynamic_cast<Service *>(this->msg)->set_allocated_apply_update(applyUpdate);

    if (data.count("restart") != 0)
        applyUpdate->set_restart(data.at("restart").get<bool>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_rollback_update(json &data)
{
    auto rollBack = new srv::firmware_update::Rollback();

    dynamic_cast<Service *>(this->msg)->set_allocated_rollback_update(rollBack);

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_get_diagnostic(json &data)
{
    auto getDiagnostic = new srv::diagnostic::GetDiagnostic();

    dynamic_cast<Service *>(this->msg)->set_allocated_get_diagnostic(getDiagnostic);

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_prepare_for_config(json &data)
{
    if (data.count("configSize") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:configSize] field in [" + this->inputFilePath + "] file.");

    auto prepareConfig = new srv::upload_config::Prepare();

    dynamic_cast<Service *>(this->msg)->set_allocated_prepare_for_config(prepareConfig);

    prepareConfig->set_config_size(data.at("configSize").get<uint32_t>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_upload_block_of_config(json &data)
{
    if (data.count("data") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:data] field in [" + this->inputFilePath + "] file.");

    auto configBlock = new srv::upload_config::UploadBlock();

    dynamic_cast<Service *>(this->msg)->set_allocated_upload_block_of_config(configBlock);

    configBlock->set_data(data.at("data").get<std::string>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_check_configuration(json &data)
{
    auto checkConfig = new srv::upload_config::CheckConfiguration();

    dynamic_cast<Service *>(this->msg)->set_allocated_check_configuration(checkConfig);

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

void MessageCreator::parse_widget(json &widgetJson, gui::widget::Widget &widget)
{
    if (widgetJson.count("verticalLayout") != 0)
    {
        auto widgetType = new gui::widget::VerticalLayout();
        widget.set_allocated_vertical_layout(widgetType);
        for (auto &newWidgetJson : widgetJson["verticalLayout"])
        {
            auto newWidget = widgetType->add_widgets();
            parse_widget(newWidgetJson, *newWidget);
        }
    }
    else if (widgetJson.count("horizontalLayout") != 0)
    {
        auto widgetType = new gui::widget::HorizontalLayout();
        widget.set_allocated_horizontal_layout(widgetType);
        for (auto &newWidgetJson : widgetJson["horizontalLayout"])
        {
            auto newWidget = ((gui::widget::HorizontalLayout *)widgetType)->add_widgets();
            parse_widget(newWidgetJson, *newWidget);
        }
    }
    else if (widgetJson.count("text") != 0)
    {
        auto widgetType = new gui::widget::Text();
        widget.set_allocated_text(widgetType);

        if (widgetJson["text"].count("text") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:root:::text:text] field in [" + this->inputFilePath + "] file.");
        widgetType->set_text(widgetJson["text"].at("text").get<std::string>());

        if (widgetJson["text"].count("verticalAlignment") != 0)
        {
            gui::alignment::VerticalAlignment newVerticalAlignment;
            if (!gui::alignment::VerticalAlignment_Parse(widgetJson["text"].at("verticalAlignment").get<std::string>(), &newVerticalAlignment))
                throw std::invalid_argument("Failed to parse [verticalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::text:verticalAlignment].");
            widgetType->set_vertical_alignment(newVerticalAlignment);
        }

        if (widgetJson["text"].count("horizontalAlignment") != 0)
        {
            gui::alignment::HorizontalAlignment newHorizontalAlignment;
            if (!gui::alignment::HorizontalAlignment_Parse(widgetJson["text"].at("horizontalAlignment").get<std::string>(), &newHorizontalAlignment))
                throw std::invalid_argument("Failed to parse [horizontalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::text:horizontalAlignment].");
            widgetType->set_horizontal_alignment(newHorizontalAlignment);
        }

        if (widgetJson["text"].count("background") != 0)
        {
            auto newBackground = new gui::background::Background();
            parse_background(widgetJson["text"]["background"], *newBackground);
            widgetType->set_allocated_background(newBackground);
        }

        if (widgetJson["text"].count("foreground") != 0)
        {
            auto newForeground = new gui::foreground::Foreground;
            parse_foreground(widgetJson["text"]["foreground"], *newForeground);
            widgetType->set_allocated_foreground(newForeground);
        }

        if (widgetJson["text"].count("font") != 0)
        {
            gui::font::Font newFont;
            if (!gui::font::Font_Parse(widgetJson["text"].at("font").get<std::string>(), &newFont))
                throw std::invalid_argument("Failed to parse [font] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::text:font].");
            widgetType->set_font(newFont);
        }

        if (widgetJson["text"].count("buttonID") != 0)
            widgetType->set_button_id(widgetJson["text"].at("buttonID").get<uint32_t>());

        if (widgetJson["text"].count("border"))
        {
            auto newBorder = new gui::border::Border();
            parse_border(widgetJson["text"]["border"], *newBorder);
            widgetType->set_allocated_border(newBorder);
        }
    }
    else if (widgetJson.count("picture") != 0)
    {
        auto widgetType = new gui::widget::Picture();

        if (widgetJson["picture"].count("pictureID") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:root:::picture:pictureID] field in [" + this->inputFilePath + "] file.");

        gui::picture_id::PictureId newPictureID;
        if (!gui::picture_id::PictureId_Parse(widgetJson["picture"].at("pictureID").get<std::string>(), &newPictureID))
            throw std::invalid_argument("Failed to parse [pictureID] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::picture:pictureID].");
        widgetType->set_picture_id(newPictureID);

        if (widgetJson["picture"].count("verticalAlignment") != 0)
        {
            gui::alignment::VerticalAlignment newVerticalAlignment;
            if (!gui::alignment::VerticalAlignment_Parse(widgetJson["picture"].at("verticalAlignment").get<std::string>(), &newVerticalAlignment))
                throw std::invalid_argument("Failed to parse [verticalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::picture:verticalAlignment].");
            widgetType->set_vertical_alignment(newVerticalAlignment);
        }

        if (widgetJson["picture"].count("horizontalAlignment") != 0)
        {
            gui::alignment::HorizontalAlignment newHorizontalAlignment;
            if (!gui::alignment::HorizontalAlignment_Parse(widgetJson["picture"].at("horizontalAlignment").get<std::string>(), &newHorizontalAlignment))
                throw std::invalid_argument("Failed to parse [horizontalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::picture:horizontalAlignment].");
            widgetType->set_horizontal_alignment(newHorizontalAlignment);
        }

        if (widgetJson["picture"].count("background") != 0)
        {
            auto newBackground = new gui::background::Background();
            parse_background(widgetJson["picture"]["background"], *newBackground);
            widgetType->set_allocated_background(newBackground);
        }

        if (widgetJson["picture"].count("buttonID") != 0)
            widgetType->set_button_id(widgetJson["picture"].at("buttonID").get<uint32_t>());

        widget.set_allocated_picture((gui::widget::Picture *)widgetType);
    }
    else if (widgetJson.count("QrCode") != 0)
    {
        auto widgetType = new gui::widget::QrCode();

        if (widgetJson["QrCode"].count("text") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:root:::QrCode:text] field in [" + this->inputFilePath + "] file.");

        widgetType->set_text(widgetJson["QrCode"].at("text").get<std::string>());

        if (widgetJson["QrCode"].count("moduleDimension") != 0)
            widgetType->set_module_dimension(widgetJson["QrCode"].at("moduleDimension").get<uint32_t>());

        if (widgetJson["QrCode"].count("verticalAlignment") != 0)
        {
            gui::alignment::VerticalAlignment newVerticalAlignment;
            if (!gui::alignment::VerticalAlignment_Parse(widgetJson["QrCode"].at("verticalAlignment").get<std::string>(), &newVerticalAlignment))
                throw std::invalid_argument("Failed to parse [verticalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::QrCode:verticalAlignment].");
            widgetType->set_vertical_alignment(newVerticalAlignment);
        }

        if (widgetJson["QrCode"].count("horizontalAlignment") != 0)
        {
            gui::alignment::HorizontalAlignment newHorizontalAlignment;
            if (!gui::alignment::HorizontalAlignment_Parse(widgetJson["QrCode"].at("horizontalAlignment").get<std::string>(), &newHorizontalAlignment))
                throw std::invalid_argument("Failed to parse [horizontalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::QrCode:horizontalAlignment].");
            widgetType->set_horizontal_alignment(newHorizontalAlignment);
        }

        widget.set_allocated_qr_code((gui::widget::QrCode *)widgetType);
    }
    else if (widgetJson.count("customerPicture") != 0)
    {
        auto widgetType = new gui::widget::CustomerPicture();

        if (widgetJson["customerPicture"].count("name") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:root:::customerPicture:name] field in [" + this->inputFilePath + "] file.");

        // gui::widget::CustomerPicture newCustomerPicture;

        widgetType->set_name(widgetJson["customerPicture"].at("name").get<std::string>());

        if (widgetJson["customerPicture"].count("verticalAlignment") != 0)
        {
            gui::alignment::VerticalAlignment newVerticalAlignment;
            if (!gui::alignment::VerticalAlignment_Parse(widgetJson["customerPicture"].at("verticalAlignment").get<std::string>(), &newVerticalAlignment))
                throw std::invalid_argument("Failed to parse [verticalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::customerPicture:verticalAlignment].");
            widgetType->set_vertical_alignment(newVerticalAlignment);
        }

        if (widgetJson["customerPicture"].count("horizontalAlignment") != 0)
        {
            gui::alignment::HorizontalAlignment newHorizontalAlignment;
            if (!gui::alignment::HorizontalAlignment_Parse(widgetJson["customerPicture"].at("horizontalAlignment").get<std::string>(), &newHorizontalAlignment))
                throw std::invalid_argument("Failed to parse [horizontalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::customerPicture:horizontalAlignment].");
            widgetType->set_horizontal_alignment(newHorizontalAlignment);
        }

        if (widgetJson["customerPicture"].count("background") != 0)
        {
            auto newBackground = new gui::background::Background();
            parse_background(widgetJson["picture"]["background"], *newBackground);
            widgetType->set_allocated_background(newBackground);
        }

        if (widgetJson["customerPicture"].count("buttonID") != 0)
            widgetType->set_button_id(widgetJson["customerPicture"].at("buttonID").get<uint32_t>());

        widget.set_allocated_customer_picture((gui::widget::CustomerPicture *)widgetType);
    }
    else if (widgetJson.count("generateText") != 0)
    {
        auto widgetType = new gui::widget::GeneratedText();

        if (widgetJson["generatedText"].count("textID") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:root:::generatedText:textID] field in [" + this->inputFilePath + "] file.");

        gui::text_id::TextId newTextId;
        if (!gui::text_id::TextId_Parse(widgetJson["generatedText"].at("textID").get<std::string>(), &newTextId))
            throw std::invalid_argument("Failed to parse [textID] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::generatedText:textID].");
        widgetType->set_text_id(newTextId);

        if (widgetJson["generatedText"].count("verticalAlignment") != 0)
        {
            gui::alignment::VerticalAlignment newVerticalAlignment;
            if (!gui::alignment::VerticalAlignment_Parse(widgetJson["generatedText"].at("verticalAlignment").get<std::string>(), &newVerticalAlignment))
                throw std::invalid_argument("Failed to parse [verticalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::generatedText:verticalAlignment].");
            widgetType->set_vertical_alignment(newVerticalAlignment);
        }

        if (widgetJson["generatedText"].count("horizontalAlignment") != 0)
        {
            gui::alignment::HorizontalAlignment newHorizontalAlignment;
            if (!gui::alignment::HorizontalAlignment_Parse(widgetJson["generatedText"].at("horizontalAlignment").get<std::string>(), &newHorizontalAlignment))
                throw std::invalid_argument("Failed to parse [horizontalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::generatedText:horizontalAlignment].");
            widgetType->set_horizontal_alignment(newHorizontalAlignment);
        }

        if (widgetJson["generatedText"].count("background") != 0)
        {
            auto newBackground = new gui::background::Background();
            parse_background(widgetJson["generatedText"]["background"], *newBackground);
            widgetType->set_allocated_background(newBackground);
        }

        if (widgetJson["generatedText"].count("foreground") != 0)
        {
            auto newForeground = new gui::foreground::Foreground();
            parse_foreground(widgetJson["text"]["foreground"], *newForeground);
            widgetType->set_allocated_foreground(newForeground);
        }

        if (widgetJson["generatedText"].count("font") != 0)
        {
            gui::font::Font newFont;
            if (!gui::font::Font_Parse(widgetJson["generatedText"].at("font").get<std::string>(), &newFont))
                throw std::invalid_argument("Failed to parse [font] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:root:::generatedText:font].");
            widgetType->set_font(newFont);
        }

        if (widgetJson["generatedText"].count("buttonID") != 0)
            widgetType->set_button_id(widgetJson["generatedText"].at("buttonID").get<uint32_t>());

        widget.set_allocated_generated_text((gui::widget::GeneratedText *)widgetType);
    }
    else
        throw ex::JsonParsingException("Could not find oneof [messages:" + std::to_string(this->messageIndex) + ":data:root:???] field in [" + this->inputFilePath + "] file.");
}

void MessageCreator::parse_background(json &backgroundJson, gui::background::Background &background)
{
    if (backgroundJson.count("solidFill") != 0)
    {
        gui::solidfill::SolidFill newSolidFill;
        if (!gui::solidfill::SolidFill_Parse(backgroundJson.at("solidFill").get<std::string>(), &newSolidFill))
            throw std::invalid_argument("Failed to parse [solidFill] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:::background:solidFill].");
        background.set_solid_fill(newSolidFill);
    }
    else if (backgroundJson.count("solidFillRGB") != 0)
        background.set_solid_fill_rgb(backgroundJson.at("solidFillRGB").get<uint32_t>());
    else
        throw ex::JsonParsingException("Could not find oneof [messages:" + std::to_string(this->messageIndex) + ":data:::background:???] field in [" + this->inputFilePath + "] file.");
}

void MessageCreator::parse_foreground(json &foregroundJson, gui::foreground::Foreground &foreground)
{
    if (foregroundJson.count("solidFill") != 0)
    {
        gui::solidfill::SolidFill newSolidFill;
        if (!gui::solidfill::SolidFill_Parse(foregroundJson.at("solidFill").get<std::string>(), &newSolidFill))
            throw std::invalid_argument("Failed to parse [solidFill] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:::foreground:solidFill].");
        foreground.set_solid_fill(newSolidFill);
    }
    else if (foregroundJson.count("solidFillRGB") != 0)
        foreground.set_solid_fill_rgb(foregroundJson.at("solidFillRGB").get<uint32_t>());
    else
        throw ex::JsonParsingException("Could not find oneof [messages:" + std::to_string(this->messageIndex) + ":data:::foreground:???] field in [" + this->inputFilePath + "] file.");
}

void MessageCreator::parse_border(json &borderJson, gui::border::Border &border)
{
    if (borderJson.count("style") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:::border:style] field in [" + this->inputFilePath + "] file.");

    gui::border::BorderStyle newBorderStyle;
    if (!gui::border::BorderStyle_Parse(borderJson.at("style").get<std::string>(), &newBorderStyle))
        throw std::invalid_argument("Failed to parse [style] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:::border:style].");
    border.set_style(newBorderStyle);
    if (borderJson.count("color") != 0)
    {
        auto newColor = new gui::background::Background();
        if (borderJson["color"].count("solidFill") != 0)
        {
            gui::solidfill::SolidFill newSolidFill;
            if (!gui::solidfill::SolidFill_Parse(borderJson["color"].at("solidFill").get<std::string>(), &newSolidFill))
                throw std::invalid_argument("Failed to parse [solidFill] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:::border:color:solidFill].");
            newColor->set_solid_fill(newSolidFill);
        }
        else if (borderJson["color"].count("solidFillRGB") != 0)
            newColor->set_solid_fill_rgb(borderJson["color"].at("solidFillRGB").get<uint32_t>());
        else
            throw ex::JsonParsingException("Could not find oneof [messages:" + std::to_string(this->messageIndex) + ":data:::border:color:???] field in [" + this->inputFilePath + "] file.");
        border.set_allocated_color(newColor);
    }
}

void MessageCreator::parse_item_list(json &itemListJson, gui::menu_dialog::ItemList &itemList)
{
    int i = 0;
    for (auto &itemJson : itemListJson)
    {
        auto newItem = itemList.add_items();

        if (itemJson.count("text") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:::itemList:" + std::to_string(i) + ":text] field in [" + this->inputFilePath + "] file.");
        newItem->set_text(itemJson.at("text").get<std::string>());

        if (itemJson.count("leafItem") != 0)
        {
            auto newLeafItem = new gui::menu_dialog::LeafItem();
            if (itemJson["leafItem"].count("id") == 0)
                throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:::itemList:" + std::to_string(i) + ":leafItem:id] field in [" + this->inputFilePath + "] file.");
            newLeafItem->set_id(itemJson["leafItem"].at("id").get<uint32_t>());
            newItem->set_allocated_leaf_item(newLeafItem);
        }
        else if (itemJson.count("submenu") != 0)
        {
            auto newSubmenu = new gui::menu_dialog::ItemList();
            parse_item_list(itemJson["submenu"], *newSubmenu);
            newItem->set_allocated_submenu(newSubmenu);
        }
        else
            throw ex::JsonParsingException("Could not find oneof [messages:" + std::to_string(this->messageIndex) + ":data:::itemList:" + std::to_string(i) + ":item:???] field in [" + this->inputFilePath + "] file.");

        ++i;
    }
}

Payload &MessageCreator::generate_show_screen(json &data)
{
    if (data.count("root") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:root] field in [" + this->inputFilePath + "] file.");

    auto showScreen = new gui::screen::ShowScreen();

    dynamic_cast<Gui *>(this->msg)->set_allocated_show_screen(showScreen);

    auto root = new gui::widget::Widget();
    parse_widget(data["root"], *root);
    showScreen->set_allocated_root(root);

    if (data.count("background") != 0)
    {
        auto newBackground = new gui::background::Background();
        parse_background(data["background"], *newBackground);
        showScreen->set_allocated_background(newBackground);
    }

    if (data.count("foreground") != 0)
    {
        auto newForeground = new gui::foreground::Foreground();
        parse_foreground(data["foreground"], *newForeground);
        showScreen->set_allocated_foreground(newForeground);
    }

    if (data.count("border"))
    {
        auto newBorder = new gui::border::Border();
        parse_border(data["border"], *newBorder);
        showScreen->set_allocated_border(newBorder);
    }

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_input_dialog(json &data)
{
    if (data.count("caption") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:caption] field in [" + this->inputFilePath + "] file.");

    auto inputDialog = new gui::input_dialog::InputDialog();
    dynamic_cast<Gui *>(this->msg)->set_allocated_input_dialog(inputDialog);

    inputDialog->set_caption(data.at("caption").get<std::string>());

    if (data.count("placeholder") != 0)
        inputDialog->set_placeholder(data.at("placeholder").get<std::string>());

    if (data.count("timeout") != 0)
        inputDialog->set_timeout(data.at("timeout").get<uint32_t>());

    if (data.count("minTextLength") != 0)
        inputDialog->set_min_text_length(data.at("minTextLength").get<uint32_t>());

    if (data.count("maxTextLength") != 0)
        inputDialog->set_max_text_length(data.at("maxTextLength").get<uint32_t>());

    if (data.count("layouts") != 0)
    {
        int i = 0;
        for (auto &layoutJson : data["layouts"])
        {
            gui::input_dialog::KeypadLayout newLayout;
            if (!gui::input_dialog::KeypadLayout_Parse(layoutJson.get<std::string>(), &newLayout))
                throw std::invalid_argument("Failed to parse [layouts:" + std::to_string(i) + "] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:layouts:" + std::to_string(i) + "].");
            inputDialog->add_layouts(newLayout);
            ++i;
        }
    }

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_menu_dialog(json &data)
{
    if (data.count("caption") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:caption] field in [" + this->inputFilePath + "] file.");
    if (data.count("itemList") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:itemList] field in [" + this->inputFilePath + "] file.");

    auto menuDialog = new gui::menu_dialog::MenuDialog();
    dynamic_cast<Gui *>(this->msg)->set_allocated_menu_dialog(menuDialog);

    menuDialog->set_caption(data.at("caption").get<std::string>());

    auto newItemList = new gui::menu_dialog::ItemList();
    parse_item_list(data["itemList"], *newItemList);
    menuDialog->set_allocated_item_list(newItemList);

    if (data.count("timeout") != 0)
        menuDialog->set_timeout(data.at("timeout").get<uint32_t>());

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_draw_bitmap(json &data)
{
    if (data.count("data") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:data] field in [" + this->inputFilePath + "] file.");

    auto drawBitmap = new gui::draw_bitmap::DrawBitmap();
    dynamic_cast<Gui *>(this->msg)->set_allocated_draw_bitmap(drawBitmap);

    drawBitmap->set_data(data.at("data").get<std::string>());

    if (data.count("area"))
    {
        if (data["area"].count("x") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:area:x] field in [" + this->inputFilePath + "] file.");
        if (data["area"].count("y") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:area:y] field in [" + this->inputFilePath + "] file.");
        if (data["area"].count("width") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:area:width] field in [" + this->inputFilePath + "] file.");
        if (data["area"].count("height") == 0)
            throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:area:height] field in [" + this->inputFilePath + "] file.");

        auto newArea = new gui::draw_bitmap::Area();

        newArea->set_x(data["area"].at("x").get<uint32_t>());
        newArea->set_y(data["area"].at("y").get<uint32_t>());
        newArea->set_width(data["area"].at("width").get<uint32_t>());
        newArea->set_height(data["area"].at("height").get<uint32_t>());

        drawBitmap->set_allocated_area(newArea);
    }

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}

Payload &MessageCreator::generate_slideshow(json &data)
{
    if (data.count("name") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:name] field in [" + this->inputFilePath + "] file.");
    if (data.count("background") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:background] field in [" + this->inputFilePath + "] file.");
    if (data.count("framesCount") == 0)
        throw ex::JsonParsingException("Could not find required [messages:" + std::to_string(this->messageIndex) + ":data:framesCount] field in [" + this->inputFilePath + "] file.");

    auto slideshow = new gui::slideshow::Slideshow();
    dynamic_cast<Gui *>(this->msg)->set_allocated_slideshow(slideshow);

    slideshow->set_name(data.at("name").get<std::string>());

    auto newBackground = new gui::background::Background();
    parse_background(data["background"], *newBackground);
    slideshow->set_allocated_background(newBackground);

    slideshow->set_frames_count(data.at("framesCount").get<uint32_t>());

    if (data.count("delay_ms"))
        slideshow->set_delay_ms(data.at("delay_ms").get<uint32_t>());
    if (data.count("verticalAlignment"))
    {
        gui::alignment::VerticalAlignment newAlignment;
        if (!gui::alignment::VerticalAlignment_Parse(data.at("verticalAlignment").get<std::string>(), &newAlignment))
            throw std::invalid_argument("Failed to parse [verticalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:verticalAlignment].");
        slideshow->set_vertical_alignment(newAlignment);
    }

    if (data.count("horizontalAlignment"))
    {
        gui::alignment::HorizontalAlignment newAlignment;
        if (!gui::alignment::HorizontalAlignment_Parse(data.at("horizontalAlignment").get<std::string>(), &newAlignment))
            throw std::invalid_argument("Failed to parse [horizontalAlignment] parameter correctly in [messages:" + std::to_string(this->messageIndex) + ":data:horizontalAlignment].");
        slideshow->set_horizontal_alignment(newAlignment);
    }

    std::cout << this->msg->DebugString() << std::endl;

    std::vector<uint8_t> buf;
    buf.resize(this->msg->ByteSizeLong());
    int buf_size = buf.size();
    this->msg->SerializeToArray(buf.data(), buf_size);

    Payload &generatedPayload = *(new Payload(this->msg->DebugString(), buf));
    return generatedPayload;
}
