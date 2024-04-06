#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>
// #include <google/protobuf/util/json_util.h>

#include "../proto_src/intellireader/commands2.pb.h"
#include "../proto_src/intellireader/misc/leds.pb.h"
#include "../proto_src/intellireader/misc/reboot.pb.h"
#include "../proto_src/intellireader/misc/device.pb.h"
#include "../proto_src/intellireader/misc/buzzer.pb.h"
#include "../proto_src/intellireader/misc/echo.pb.h"
#include "../proto_src/intellireader/misc/stats.pb.h"
#include "../proto_src/intellireader/misc/lan_settings.pb.h"
#include "../proto_src/intellireader/misc/baudrate.pb.h"

#include "nlohmann/json.hpp"

#include "payload.h"
#include "msg.h"
#include "checksum.h"
#include "base64.h"
#include "myExceptions.h"

#define IR "IR"

using json = nlohmann::json;

class MessageCreator
{
private:
    std::string inputFilePath;
    int messageIndex;
    uint8_t moduleID;
    uint8_t messageType;
    uint8_t messageID;
    google::protobuf::Message *msg; // pointer to protobuf message

    std::string messageTypeStr;
    std::vector<json> jsonMessages;

    google::protobuf::Message *find_protobuf_module(uint8_t moduleID);
    const Msg &compose_message(Payload &generatedPayload, bool isChecksumValid);

    Payload &generate_set_leds_state(json data);
    Payload &generate_reboot_device(json data);
    Payload &generate_read_device_info(json data);
    Payload &generate_make_sound(json data);
    Payload &generate_get_echo(json data);
    Payload &generate_get_device_status(json data);
    Payload &generate_get_device_statistic(json data);
    Payload &generate_change_lan_settings(json data);
    Payload &generate_change_baudrate(json data);

public:
    MessageCreator(std::string inputJsonPath);
    ~MessageCreator();
    void generate_messages(const std::string inputFilePath, const std::string outputFilePath);
};
