#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>
// #include <google/protobuf/util/json_util.h>

// #include "../proto_src/intellireader/commands2.pb.h"
// #include "../proto_src/intellireader/commands3.pb.h"
// #include "../proto_src/intellireader/commands4.pb.h"
// #include "../proto_src/intellireader/commands5.pb.h"
#include "../proto_src/intellireader/commands6.pb.h"

#include "../proto_src/intellireader/misc/leds.pb.h"
#include "../proto_src/intellireader/misc/reboot.pb.h"
#include "../proto_src/intellireader/misc/device.pb.h"
#include "../proto_src/intellireader/misc/buzzer.pb.h"
#include "../proto_src/intellireader/misc/echo.pb.h"
#include "../proto_src/intellireader/misc/stats.pb.h"
#include "../proto_src/intellireader/misc/lan_settings.pb.h"
#include "../proto_src/intellireader/misc/baudrate.pb.h"

#include "../proto_src/intellireader/contact/power_on.pb.h"
#include "../proto_src/intellireader/contact/power_off.pb.h"
#include "../proto_src/intellireader/contact/card_slot.pb.h"
#include "../proto_src/intellireader/contact/iso7816_4.pb.h"

#include "../proto_src/intellireader/contactless/poll_for_token.pb.h"
#include "../proto_src/intellireader/contactless/emv_removal.pb.h"
#include "../proto_src/intellireader/contactless/transceive.pb.h"
#include "../proto_src/intellireader/contactless/iso14443_4.pb.h"
#include "../proto_src/intellireader/contactless/rf_field.pb.h"
#include "../proto_src/intellireader/contactless/iso14443_4a.pb.h"

#include "../proto_src/intellireader/contactless/transaction.pb.h"

#include "../proto_src/intellireader/srv/firmware_update.pb.h"
#include "../proto_src/intellireader/srv/diagnostic.pb.h"
#include "../proto_src/intellireader/srv/upload_config.pb.h"

#include "../proto_src/intellireader/gui/screen.pb.h"
#include "../proto_src/intellireader/gui/input_dialog.pb.h"
#include "../proto_src/intellireader/gui/menu_dialog.pb.h"
#include "../proto_src/intellireader/gui/draw_bitmap.pb.h"
#include "../proto_src/intellireader/gui/slideshow.pb.h"

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

    // Miscellaneous
    Payload &generate_set_leds_state(json &data);
    Payload &generate_reboot_device(json &data);
    Payload &generate_read_device_info(json &data);
    Payload &generate_make_sound(json &data);
    Payload &generate_get_echo(json &data);
    Payload &generate_get_device_status(json &data);
    Payload &generate_get_device_statistic(json &data);
    Payload &generate_change_lan_settings(json &data);
    Payload &generate_change_baudrate(json &data);

    // ContactLevel1
    Payload &generate_power_on(json &data);
    Payload &generate_power_off(json &data);
    Payload &generate_transmit_apdu(json &data);

    // ContactlessLevel1
    Payload &generate_poll_for_token(json &data);
    Payload &generate_emv_removal(json &data);
    Payload &generate_tsv_bit_array(json &data);
    Payload &generate_iso14443_4_command(json &data);
    Payload &generate_power_off_field(json &data);
    Payload &generate_request_for_ats(json &data);

    // ContactlessLevel2
    Payload &generate_perform_transaction(json &data);

    // Service
    Payload &generate_prepare_update(json &data);
    Payload &generate_update_block(json &data);
    Payload &generate_apply_update(json &data);
    Payload &generate_rollback_update(json &data);
    Payload &generate_get_diagnostic(json &data);
    Payload &generate_prepare_for_config(json &data);
    Payload &generate_upload_block_of_config(json &data);
    Payload &generate_check_configuration(json &data);

    // GUI
    void parse_widget(json &widgetJson, gui::widget::Widget &widget);
    void parse_background(json &backgroundJson, gui::background::Background &background);
    void parse_foreground(json &foregroundJson, gui::foreground::Foreground &foreground);
    void parse_border(json &borderJson, gui::border::Border &border);

    Payload &generate_show_screen(json &data);
    Payload &generate_input_dialog(json &data);
    // Payload &generate_menu_dialog(json &data);
    // Payload &generate_draw_bitmap(json &data);
    // Payload &generate_slideshow(json &data);

public:
    MessageCreator(std::string inputJsonPath);
    ~MessageCreator();
    void generate_messages(const std::string inputFilePath, const std::string outputFilePath);
};
