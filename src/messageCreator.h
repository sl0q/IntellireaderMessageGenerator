#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>

// #include "../proto_src/intellireader/commands2.pb.h"
// #include "../proto_src/intellireader/commands3.pb.h"
// #include "../proto_src/intellireader/commands4.pb.h"
// #include "../proto_src/intellireader/commands5.pb.h"
// #include "../proto_src/intellireader/commands6.pb.h"
#include "../proto_src/intellireader/commands7.pb.h"

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

    // Mifare
    void parse_key_type(json &keyTypeJson, mifare::plus::key_type::KeyType &keyType);
    void parse_av_args(json &av2ArgsJson, mifare::av2::args::AuthenticationArguments &av2Args);

    // Mifare classic
    Payload &generate_mfr_classic_auth_on_clear_key(json &data);
    Payload &generate_mfr_classic_auth_on_sam_key(json &data);
    Payload &generate_mfr_classic_read_blocks(json &data);
    Payload &generate_mfr_classic_write_blocks(json &data);
    Payload &generate_mfr_classic_get_counter(json &data);
    Payload &generate_mfr_classic_set_counter(json &data);
    Payload &generate_mfr_classic_modify_counter(json &data);
    Payload &generate_mfr_classic_copy_counter(json &data);
    Payload &generate_mfr_classic_commit_counter(json &data);
    Payload &generate_mfr_classic_bulk_operation(json &data);

    // Mifare plus
    Payload &generate_mfr_plus_auth_on_clear_key(json &data);
    Payload &generate_mfr_plus_auth_on_sam_key(json &data);
    Payload &generate_mfr_plus_read_blocks(json &data);
    Payload &generate_mfr_plus_write_blocks(json &data);
    Payload &generate_mfr_plus_get_counter(json &data);
    Payload &generate_mfr_plus_set_counter(json &data);
    Payload &generate_mfr_plus_modify_counter(json &data);
    Payload &generate_mfr_plus_copy_counter(json &data);
    Payload &generate_mfr_plus_commit_counter(json &data);
    Payload &generate_mfr_plus_bulk_operation(json &data);

    // Mifare SAM_AV2
    Payload &generate_av2_authenticate_host(json &data);
    Payload &generate_av2_unlock(json &data);
    Payload &generate_av2_change_keyentry(json &data);

    // Mifare ultralight
    Payload &generate_mfr_ul_read_pages(json &data);
    Payload &generate_mfr_ul_write_pages(json &data);
    Payload &generate_mfr_ul_get_counter(json &data);
    Payload &generate_mfr_ul_increment_counter(json &data);
    Payload &generate_mfr_ul_get_version(json &data);
    Payload &generate_mfr_ul_bulk_operation(json &data);
    Payload &generate_mfr_ul_auth_on_clear_key(json &data);
    Payload &generate_mfr_ul_auth_on_sam_key(json &data);
    Payload &generate_mfr_ul_auth_clear_password(json &data);
    Payload &generate_mfr_ul_auth_sam_password(json &data);

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

    void parse_item_list(json &itemListJson, gui::menu_dialog::ItemList &itemList);

    Payload &generate_show_screen(json &data);
    Payload &generate_input_dialog(json &data);
    Payload &generate_menu_dialog(json &data);
    Payload &generate_draw_bitmap(json &data);
    Payload &generate_slideshow(json &data);

public:
    MessageCreator(std::string inputJsonPath);
    ~MessageCreator();
    void generate_messages(const std::string inputFilePath, const std::string outputFilePath);
};
