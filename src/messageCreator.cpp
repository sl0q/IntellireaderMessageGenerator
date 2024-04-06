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

        // case 2:
        //     return new ContactLevel1();

        // case 3:
        //     return new ContactLevel2();

        // case 3:
        //     return new ContactlessLeve1();

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

        this->msg = find_protobuf_module(moduleID);

        if (moduleID == 1) // Miscelaneous
        {
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

            auto m = compose_message(*payload, isChecksumValid);
            file << m.getDataAsString() << "\n"
                 << bs64::base64_encode(m.getData()) << "\n"
                 << m.getDebugString() << "\n\n";

            delete payload;
            file << "###################################################################\n\n\n";

            file.close();

            ++this->messageIndex;
        }
        else
        {
        }
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
