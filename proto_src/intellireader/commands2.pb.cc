// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: commands2.proto

#include "commands2.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_misc_2fbaudrate_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ChangeBaudrate_misc_2fbaudrate_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2fbuzzer_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MakeSound_misc_2fbuzzer_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2fdevice_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetDeviceStatus_misc_2fdevice_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2fdevice_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ReadDeviceInfo_misc_2fdevice_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2fecho_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetEcho_misc_2fecho_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2flan_5fsettings_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ChangeLanSettings_misc_2flan_5fsettings_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2fleds_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Leds_misc_2fleds_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2freboot_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Reboot_misc_2freboot_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_misc_2fstats_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetDeviceStatistic_misc_2fstats_2eproto;
class MiscellaneousDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Miscellaneous> _instance;
  const ::misc::leds::Leds* set_leds_state_;
  const ::misc::device::ReadDeviceInfo* read_device_info_;
  const ::misc::reboot::Reboot* reboot_device_;
  const ::misc::device::GetDeviceStatus* get_device_status_;
  const ::misc::buzzer::MakeSound* make_sound_;
  const ::misc::stats::GetDeviceStatistic* get_device_statistic_;
  const ::misc::echo::GetEcho* get_echo_;
  const ::misc::baudrate::ChangeBaudrate* change_baudrate_;
  const ::misc::lan_settings::ChangeLanSettings* change_lan_settings_;
} _Miscellaneous_default_instance_;
static void InitDefaultsscc_info_Miscellaneous_commands2_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Miscellaneous_default_instance_;
    new (ptr) ::Miscellaneous();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Miscellaneous::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<9> scc_info_Miscellaneous_commands2_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 9, 0, InitDefaultsscc_info_Miscellaneous_commands2_2eproto}, {
      &scc_info_Leds_misc_2fleds_2eproto.base,
      &scc_info_ReadDeviceInfo_misc_2fdevice_2eproto.base,
      &scc_info_Reboot_misc_2freboot_2eproto.base,
      &scc_info_GetDeviceStatus_misc_2fdevice_2eproto.base,
      &scc_info_MakeSound_misc_2fbuzzer_2eproto.base,
      &scc_info_GetDeviceStatistic_misc_2fstats_2eproto.base,
      &scc_info_GetEcho_misc_2fecho_2eproto.base,
      &scc_info_ChangeBaudrate_misc_2fbaudrate_2eproto.base,
      &scc_info_ChangeLanSettings_misc_2flan_5fsettings_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_commands2_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_commands2_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_commands2_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_commands2_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Miscellaneous, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Miscellaneous, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::Miscellaneous, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::MiscellaneousDefaultTypeInternal, set_leds_state_),
  offsetof(::MiscellaneousDefaultTypeInternal, read_device_info_),
  offsetof(::MiscellaneousDefaultTypeInternal, reboot_device_),
  offsetof(::MiscellaneousDefaultTypeInternal, get_device_status_),
  offsetof(::MiscellaneousDefaultTypeInternal, make_sound_),
  offsetof(::MiscellaneousDefaultTypeInternal, get_device_statistic_),
  offsetof(::MiscellaneousDefaultTypeInternal, get_echo_),
  offsetof(::MiscellaneousDefaultTypeInternal, change_baudrate_),
  offsetof(::MiscellaneousDefaultTypeInternal, change_lan_settings_),
  PROTOBUF_FIELD_OFFSET(::Miscellaneous, misc_cmd_),
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, sizeof(::Miscellaneous)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Miscellaneous_default_instance_),
};

const char descriptor_table_protodef_commands2_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017commands2.proto\032\017misc/leds.proto\032\021misc"
  "/device.proto\032\021misc/reboot.proto\032\021misc/b"
  "uzzer.proto\032\020misc/stats.proto\032\017misc/echo"
  ".proto\032\023misc/baudrate.proto\032\027misc/lan_se"
  "ttings.proto\"\375\003\n\rMiscellaneous\022)\n\016set_le"
  "ds_state\030\001 \001(\0132\017.misc.leds.LedsH\000\0227\n\020rea"
  "d_device_info\030\002 \001(\0132\033.misc.device.ReadDe"
  "viceInfoH\000\022,\n\rreboot_device\030\003 \001(\0132\023.misc"
  ".reboot.RebootH\000\0229\n\021get_device_status\030\004 "
  "\001(\0132\034.misc.device.GetDeviceStatusH\000\022,\n\nm"
  "ake_sound\030\006 \001(\0132\026.misc.buzzer.MakeSoundH"
  "\000\022>\n\024get_device_statistic\030\007 \001(\0132\036.misc.s"
  "tats.GetDeviceStatisticH\000\022&\n\010get_echo\030\010 "
  "\001(\0132\022.misc.echo.GetEchoH\000\0228\n\017change_baud"
  "rate\030\t \001(\0132\035.misc.baudrate.ChangeBaudrat"
  "eH\000\022C\n\023change_lan_settings\030\n \001(\0132$.misc."
  "lan_settings.ChangeLanSettingsH\000B\n\n\010misc"
  "_cmd"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_commands2_2eproto_deps[8] = {
  &::descriptor_table_misc_2fbaudrate_2eproto,
  &::descriptor_table_misc_2fbuzzer_2eproto,
  &::descriptor_table_misc_2fdevice_2eproto,
  &::descriptor_table_misc_2fecho_2eproto,
  &::descriptor_table_misc_2flan_5fsettings_2eproto,
  &::descriptor_table_misc_2fleds_2eproto,
  &::descriptor_table_misc_2freboot_2eproto,
  &::descriptor_table_misc_2fstats_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_commands2_2eproto_sccs[1] = {
  &scc_info_Miscellaneous_commands2_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_commands2_2eproto_once;
static bool descriptor_table_commands2_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_commands2_2eproto = {
  &descriptor_table_commands2_2eproto_initialized, descriptor_table_protodef_commands2_2eproto, "commands2.proto", 684,
  &descriptor_table_commands2_2eproto_once, descriptor_table_commands2_2eproto_sccs, descriptor_table_commands2_2eproto_deps, 1, 8,
  schemas, file_default_instances, TableStruct_commands2_2eproto::offsets,
  file_level_metadata_commands2_2eproto, 1, file_level_enum_descriptors_commands2_2eproto, file_level_service_descriptors_commands2_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_commands2_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_commands2_2eproto), true);

// ===================================================================

void Miscellaneous::InitAsDefaultInstance() {
  ::_Miscellaneous_default_instance_.set_leds_state_ = const_cast< ::misc::leds::Leds*>(
      ::misc::leds::Leds::internal_default_instance());
  ::_Miscellaneous_default_instance_.read_device_info_ = const_cast< ::misc::device::ReadDeviceInfo*>(
      ::misc::device::ReadDeviceInfo::internal_default_instance());
  ::_Miscellaneous_default_instance_.reboot_device_ = const_cast< ::misc::reboot::Reboot*>(
      ::misc::reboot::Reboot::internal_default_instance());
  ::_Miscellaneous_default_instance_.get_device_status_ = const_cast< ::misc::device::GetDeviceStatus*>(
      ::misc::device::GetDeviceStatus::internal_default_instance());
  ::_Miscellaneous_default_instance_.make_sound_ = const_cast< ::misc::buzzer::MakeSound*>(
      ::misc::buzzer::MakeSound::internal_default_instance());
  ::_Miscellaneous_default_instance_.get_device_statistic_ = const_cast< ::misc::stats::GetDeviceStatistic*>(
      ::misc::stats::GetDeviceStatistic::internal_default_instance());
  ::_Miscellaneous_default_instance_.get_echo_ = const_cast< ::misc::echo::GetEcho*>(
      ::misc::echo::GetEcho::internal_default_instance());
  ::_Miscellaneous_default_instance_.change_baudrate_ = const_cast< ::misc::baudrate::ChangeBaudrate*>(
      ::misc::baudrate::ChangeBaudrate::internal_default_instance());
  ::_Miscellaneous_default_instance_.change_lan_settings_ = const_cast< ::misc::lan_settings::ChangeLanSettings*>(
      ::misc::lan_settings::ChangeLanSettings::internal_default_instance());
}
class Miscellaneous::_Internal {
 public:
  using HasBits = decltype(std::declval<Miscellaneous>()._has_bits_);
  static const ::misc::leds::Leds& set_leds_state(const Miscellaneous* msg);
  static const ::misc::device::ReadDeviceInfo& read_device_info(const Miscellaneous* msg);
  static const ::misc::reboot::Reboot& reboot_device(const Miscellaneous* msg);
  static const ::misc::device::GetDeviceStatus& get_device_status(const Miscellaneous* msg);
  static const ::misc::buzzer::MakeSound& make_sound(const Miscellaneous* msg);
  static const ::misc::stats::GetDeviceStatistic& get_device_statistic(const Miscellaneous* msg);
  static const ::misc::echo::GetEcho& get_echo(const Miscellaneous* msg);
  static const ::misc::baudrate::ChangeBaudrate& change_baudrate(const Miscellaneous* msg);
  static const ::misc::lan_settings::ChangeLanSettings& change_lan_settings(const Miscellaneous* msg);
};

const ::misc::leds::Leds&
Miscellaneous::_Internal::set_leds_state(const Miscellaneous* msg) {
  return *msg->misc_cmd_.set_leds_state_;
}
const ::misc::device::ReadDeviceInfo&
Miscellaneous::_Internal::read_device_info(const Miscellaneous* msg) {
  return *msg->misc_cmd_.read_device_info_;
}
const ::misc::reboot::Reboot&
Miscellaneous::_Internal::reboot_device(const Miscellaneous* msg) {
  return *msg->misc_cmd_.reboot_device_;
}
const ::misc::device::GetDeviceStatus&
Miscellaneous::_Internal::get_device_status(const Miscellaneous* msg) {
  return *msg->misc_cmd_.get_device_status_;
}
const ::misc::buzzer::MakeSound&
Miscellaneous::_Internal::make_sound(const Miscellaneous* msg) {
  return *msg->misc_cmd_.make_sound_;
}
const ::misc::stats::GetDeviceStatistic&
Miscellaneous::_Internal::get_device_statistic(const Miscellaneous* msg) {
  return *msg->misc_cmd_.get_device_statistic_;
}
const ::misc::echo::GetEcho&
Miscellaneous::_Internal::get_echo(const Miscellaneous* msg) {
  return *msg->misc_cmd_.get_echo_;
}
const ::misc::baudrate::ChangeBaudrate&
Miscellaneous::_Internal::change_baudrate(const Miscellaneous* msg) {
  return *msg->misc_cmd_.change_baudrate_;
}
const ::misc::lan_settings::ChangeLanSettings&
Miscellaneous::_Internal::change_lan_settings(const Miscellaneous* msg) {
  return *msg->misc_cmd_.change_lan_settings_;
}
void Miscellaneous::set_allocated_set_leds_state(::misc::leds::Leds* set_leds_state) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (set_leds_state) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      set_leds_state = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, set_leds_state, submessage_arena);
    }
    set_has_set_leds_state();
    misc_cmd_.set_leds_state_ = set_leds_state;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.set_leds_state)
}
void Miscellaneous::clear_set_leds_state() {
  if (_internal_has_set_leds_state()) {
    delete misc_cmd_.set_leds_state_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_read_device_info(::misc::device::ReadDeviceInfo* read_device_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (read_device_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      read_device_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, read_device_info, submessage_arena);
    }
    set_has_read_device_info();
    misc_cmd_.read_device_info_ = read_device_info;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.read_device_info)
}
void Miscellaneous::clear_read_device_info() {
  if (_internal_has_read_device_info()) {
    delete misc_cmd_.read_device_info_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_reboot_device(::misc::reboot::Reboot* reboot_device) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (reboot_device) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      reboot_device = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, reboot_device, submessage_arena);
    }
    set_has_reboot_device();
    misc_cmd_.reboot_device_ = reboot_device;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.reboot_device)
}
void Miscellaneous::clear_reboot_device() {
  if (_internal_has_reboot_device()) {
    delete misc_cmd_.reboot_device_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_get_device_status(::misc::device::GetDeviceStatus* get_device_status) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (get_device_status) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      get_device_status = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, get_device_status, submessage_arena);
    }
    set_has_get_device_status();
    misc_cmd_.get_device_status_ = get_device_status;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.get_device_status)
}
void Miscellaneous::clear_get_device_status() {
  if (_internal_has_get_device_status()) {
    delete misc_cmd_.get_device_status_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_make_sound(::misc::buzzer::MakeSound* make_sound) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (make_sound) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      make_sound = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, make_sound, submessage_arena);
    }
    set_has_make_sound();
    misc_cmd_.make_sound_ = make_sound;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.make_sound)
}
void Miscellaneous::clear_make_sound() {
  if (_internal_has_make_sound()) {
    delete misc_cmd_.make_sound_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_get_device_statistic(::misc::stats::GetDeviceStatistic* get_device_statistic) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (get_device_statistic) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      get_device_statistic = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, get_device_statistic, submessage_arena);
    }
    set_has_get_device_statistic();
    misc_cmd_.get_device_statistic_ = get_device_statistic;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.get_device_statistic)
}
void Miscellaneous::clear_get_device_statistic() {
  if (_internal_has_get_device_statistic()) {
    delete misc_cmd_.get_device_statistic_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_get_echo(::misc::echo::GetEcho* get_echo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (get_echo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      get_echo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, get_echo, submessage_arena);
    }
    set_has_get_echo();
    misc_cmd_.get_echo_ = get_echo;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.get_echo)
}
void Miscellaneous::clear_get_echo() {
  if (_internal_has_get_echo()) {
    delete misc_cmd_.get_echo_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_change_baudrate(::misc::baudrate::ChangeBaudrate* change_baudrate) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (change_baudrate) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      change_baudrate = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, change_baudrate, submessage_arena);
    }
    set_has_change_baudrate();
    misc_cmd_.change_baudrate_ = change_baudrate;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.change_baudrate)
}
void Miscellaneous::clear_change_baudrate() {
  if (_internal_has_change_baudrate()) {
    delete misc_cmd_.change_baudrate_;
    clear_has_misc_cmd();
  }
}
void Miscellaneous::set_allocated_change_lan_settings(::misc::lan_settings::ChangeLanSettings* change_lan_settings) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_misc_cmd();
  if (change_lan_settings) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      change_lan_settings = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, change_lan_settings, submessage_arena);
    }
    set_has_change_lan_settings();
    misc_cmd_.change_lan_settings_ = change_lan_settings;
  }
  // @@protoc_insertion_point(field_set_allocated:Miscellaneous.change_lan_settings)
}
void Miscellaneous::clear_change_lan_settings() {
  if (_internal_has_change_lan_settings()) {
    delete misc_cmd_.change_lan_settings_;
    clear_has_misc_cmd();
  }
}
Miscellaneous::Miscellaneous()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Miscellaneous)
}
Miscellaneous::Miscellaneous(const Miscellaneous& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_misc_cmd();
  switch (from.misc_cmd_case()) {
    case kSetLedsState: {
      _internal_mutable_set_leds_state()->::misc::leds::Leds::MergeFrom(from._internal_set_leds_state());
      break;
    }
    case kReadDeviceInfo: {
      _internal_mutable_read_device_info()->::misc::device::ReadDeviceInfo::MergeFrom(from._internal_read_device_info());
      break;
    }
    case kRebootDevice: {
      _internal_mutable_reboot_device()->::misc::reboot::Reboot::MergeFrom(from._internal_reboot_device());
      break;
    }
    case kGetDeviceStatus: {
      _internal_mutable_get_device_status()->::misc::device::GetDeviceStatus::MergeFrom(from._internal_get_device_status());
      break;
    }
    case kMakeSound: {
      _internal_mutable_make_sound()->::misc::buzzer::MakeSound::MergeFrom(from._internal_make_sound());
      break;
    }
    case kGetDeviceStatistic: {
      _internal_mutable_get_device_statistic()->::misc::stats::GetDeviceStatistic::MergeFrom(from._internal_get_device_statistic());
      break;
    }
    case kGetEcho: {
      _internal_mutable_get_echo()->::misc::echo::GetEcho::MergeFrom(from._internal_get_echo());
      break;
    }
    case kChangeBaudrate: {
      _internal_mutable_change_baudrate()->::misc::baudrate::ChangeBaudrate::MergeFrom(from._internal_change_baudrate());
      break;
    }
    case kChangeLanSettings: {
      _internal_mutable_change_lan_settings()->::misc::lan_settings::ChangeLanSettings::MergeFrom(from._internal_change_lan_settings());
      break;
    }
    case MISC_CMD_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:Miscellaneous)
}

void Miscellaneous::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Miscellaneous_commands2_2eproto.base);
  clear_has_misc_cmd();
}

Miscellaneous::~Miscellaneous() {
  // @@protoc_insertion_point(destructor:Miscellaneous)
  SharedDtor();
}

void Miscellaneous::SharedDtor() {
  if (has_misc_cmd()) {
    clear_misc_cmd();
  }
}

void Miscellaneous::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Miscellaneous& Miscellaneous::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Miscellaneous_commands2_2eproto.base);
  return *internal_default_instance();
}


void Miscellaneous::clear_misc_cmd() {
// @@protoc_insertion_point(one_of_clear_start:Miscellaneous)
  switch (misc_cmd_case()) {
    case kSetLedsState: {
      delete misc_cmd_.set_leds_state_;
      break;
    }
    case kReadDeviceInfo: {
      delete misc_cmd_.read_device_info_;
      break;
    }
    case kRebootDevice: {
      delete misc_cmd_.reboot_device_;
      break;
    }
    case kGetDeviceStatus: {
      delete misc_cmd_.get_device_status_;
      break;
    }
    case kMakeSound: {
      delete misc_cmd_.make_sound_;
      break;
    }
    case kGetDeviceStatistic: {
      delete misc_cmd_.get_device_statistic_;
      break;
    }
    case kGetEcho: {
      delete misc_cmd_.get_echo_;
      break;
    }
    case kChangeBaudrate: {
      delete misc_cmd_.change_baudrate_;
      break;
    }
    case kChangeLanSettings: {
      delete misc_cmd_.change_lan_settings_;
      break;
    }
    case MISC_CMD_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = MISC_CMD_NOT_SET;
}


void Miscellaneous::Clear() {
// @@protoc_insertion_point(message_clear_start:Miscellaneous)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_misc_cmd();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Miscellaneous::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .misc.leds.Leds set_leds_state = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_set_leds_state(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.device.ReadDeviceInfo read_device_info = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_read_device_info(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.reboot.Reboot reboot_device = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_reboot_device(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.device.GetDeviceStatus get_device_status = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_get_device_status(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.buzzer.MakeSound make_sound = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_make_sound(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.stats.GetDeviceStatistic get_device_statistic = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_get_device_statistic(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.echo.GetEcho get_echo = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_get_echo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.baudrate.ChangeBaudrate change_baudrate = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ctx->ParseMessage(_internal_mutable_change_baudrate(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.lan_settings.ChangeLanSettings change_lan_settings = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_change_lan_settings(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Miscellaneous::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Miscellaneous)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (misc_cmd_case()) {
    case kSetLedsState: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          1, _Internal::set_leds_state(this), target, stream);
      break;
    }
    case kReadDeviceInfo: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          2, _Internal::read_device_info(this), target, stream);
      break;
    }
    case kRebootDevice: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          3, _Internal::reboot_device(this), target, stream);
      break;
    }
    case kGetDeviceStatus: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          4, _Internal::get_device_status(this), target, stream);
      break;
    }
    case kMakeSound: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          6, _Internal::make_sound(this), target, stream);
      break;
    }
    case kGetDeviceStatistic: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          7, _Internal::get_device_statistic(this), target, stream);
      break;
    }
    case kGetEcho: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          8, _Internal::get_echo(this), target, stream);
      break;
    }
    case kChangeBaudrate: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          9, _Internal::change_baudrate(this), target, stream);
      break;
    }
    case kChangeLanSettings: {
      target = stream->EnsureSpace(target);
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(
          10, _Internal::change_lan_settings(this), target, stream);
      break;
    }
    default: ;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Miscellaneous)
  return target;
}

size_t Miscellaneous::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Miscellaneous)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (misc_cmd_case()) {
    // optional .misc.leds.Leds set_leds_state = 1;
    case kSetLedsState: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.set_leds_state_);
      break;
    }
    // optional .misc.device.ReadDeviceInfo read_device_info = 2;
    case kReadDeviceInfo: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.read_device_info_);
      break;
    }
    // optional .misc.reboot.Reboot reboot_device = 3;
    case kRebootDevice: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.reboot_device_);
      break;
    }
    // optional .misc.device.GetDeviceStatus get_device_status = 4;
    case kGetDeviceStatus: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.get_device_status_);
      break;
    }
    // optional .misc.buzzer.MakeSound make_sound = 6;
    case kMakeSound: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.make_sound_);
      break;
    }
    // optional .misc.stats.GetDeviceStatistic get_device_statistic = 7;
    case kGetDeviceStatistic: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.get_device_statistic_);
      break;
    }
    // optional .misc.echo.GetEcho get_echo = 8;
    case kGetEcho: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.get_echo_);
      break;
    }
    // optional .misc.baudrate.ChangeBaudrate change_baudrate = 9;
    case kChangeBaudrate: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.change_baudrate_);
      break;
    }
    // optional .misc.lan_settings.ChangeLanSettings change_lan_settings = 10;
    case kChangeLanSettings: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *misc_cmd_.change_lan_settings_);
      break;
    }
    case MISC_CMD_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Miscellaneous::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Miscellaneous)
  GOOGLE_DCHECK_NE(&from, this);
  const Miscellaneous* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Miscellaneous>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Miscellaneous)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Miscellaneous)
    MergeFrom(*source);
  }
}

void Miscellaneous::MergeFrom(const Miscellaneous& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Miscellaneous)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.misc_cmd_case()) {
    case kSetLedsState: {
      _internal_mutable_set_leds_state()->::misc::leds::Leds::MergeFrom(from._internal_set_leds_state());
      break;
    }
    case kReadDeviceInfo: {
      _internal_mutable_read_device_info()->::misc::device::ReadDeviceInfo::MergeFrom(from._internal_read_device_info());
      break;
    }
    case kRebootDevice: {
      _internal_mutable_reboot_device()->::misc::reboot::Reboot::MergeFrom(from._internal_reboot_device());
      break;
    }
    case kGetDeviceStatus: {
      _internal_mutable_get_device_status()->::misc::device::GetDeviceStatus::MergeFrom(from._internal_get_device_status());
      break;
    }
    case kMakeSound: {
      _internal_mutable_make_sound()->::misc::buzzer::MakeSound::MergeFrom(from._internal_make_sound());
      break;
    }
    case kGetDeviceStatistic: {
      _internal_mutable_get_device_statistic()->::misc::stats::GetDeviceStatistic::MergeFrom(from._internal_get_device_statistic());
      break;
    }
    case kGetEcho: {
      _internal_mutable_get_echo()->::misc::echo::GetEcho::MergeFrom(from._internal_get_echo());
      break;
    }
    case kChangeBaudrate: {
      _internal_mutable_change_baudrate()->::misc::baudrate::ChangeBaudrate::MergeFrom(from._internal_change_baudrate());
      break;
    }
    case kChangeLanSettings: {
      _internal_mutable_change_lan_settings()->::misc::lan_settings::ChangeLanSettings::MergeFrom(from._internal_change_lan_settings());
      break;
    }
    case MISC_CMD_NOT_SET: {
      break;
    }
  }
}

void Miscellaneous::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Miscellaneous)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Miscellaneous::CopyFrom(const Miscellaneous& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Miscellaneous)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Miscellaneous::IsInitialized() const {
  switch (misc_cmd_case()) {
    case kSetLedsState: {
      break;
    }
    case kReadDeviceInfo: {
      break;
    }
    case kRebootDevice: {
      break;
    }
    case kGetDeviceStatus: {
      break;
    }
    case kMakeSound: {
      if (has_make_sound()) {
        if (!this->make_sound().IsInitialized()) return false;
      }
      break;
    }
    case kGetDeviceStatistic: {
      break;
    }
    case kGetEcho: {
      break;
    }
    case kChangeBaudrate: {
      if (has_change_baudrate()) {
        if (!this->change_baudrate().IsInitialized()) return false;
      }
      break;
    }
    case kChangeLanSettings: {
      if (has_change_lan_settings()) {
        if (!this->change_lan_settings().IsInitialized()) return false;
      }
      break;
    }
    case MISC_CMD_NOT_SET: {
      break;
    }
  }
  return true;
}

void Miscellaneous::InternalSwap(Miscellaneous* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(misc_cmd_, other->misc_cmd_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata Miscellaneous::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Miscellaneous* Arena::CreateMaybeMessage< ::Miscellaneous >(Arena* arena) {
  return Arena::CreateInternal< ::Miscellaneous >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>