// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: qrcode/qrcode_event.proto

#include "qrcode/qrcode_event.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_qrcode_2fcode_5fraw_5fdata_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RawData_qrcode_2fcode_5fraw_5fdata_2eproto;
namespace qrcode {
namespace event {
class QrCodeEventDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<QrCodeEvent> _instance;
  const ::qrcode::code_raw_data::RawData* raw_data_;
} _QrCodeEvent_default_instance_;
}  // namespace event
}  // namespace qrcode
static void InitDefaultsscc_info_QrCodeEvent_qrcode_2fqrcode_5fevent_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::qrcode::event::_QrCodeEvent_default_instance_;
    new (ptr) ::qrcode::event::QrCodeEvent();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::qrcode::event::QrCodeEvent::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_QrCodeEvent_qrcode_2fqrcode_5fevent_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_QrCodeEvent_qrcode_2fqrcode_5fevent_2eproto}, {
      &scc_info_RawData_qrcode_2fcode_5fraw_5fdata_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_qrcode_2fqrcode_5fevent_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_qrcode_2fqrcode_5fevent_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_qrcode_2fqrcode_5fevent_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_qrcode_2fqrcode_5fevent_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::qrcode::event::QrCodeEvent, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::qrcode::event::QrCodeEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::qrcode::event::QrCodeEvent, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::qrcode::event::QrCodeEventDefaultTypeInternal, raw_data_),
  PROTOBUF_FIELD_OFFSET(::qrcode::event::QrCodeEvent, event_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::qrcode::event::QrCodeEvent)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::qrcode::event::_QrCodeEvent_default_instance_),
};

const char descriptor_table_protodef_qrcode_2fqrcode_5fevent_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031qrcode/qrcode_event.proto\022\014qrcode.even"
  "t\032\032qrcode/code_raw_data.proto\"I\n\013QrCodeE"
  "vent\0221\n\010raw_data\030\001 \001(\0132\035.qrcode.code_raw"
  "_data.RawDataH\000B\007\n\005event"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_qrcode_2fqrcode_5fevent_2eproto_deps[1] = {
  &::descriptor_table_qrcode_2fcode_5fraw_5fdata_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_qrcode_2fqrcode_5fevent_2eproto_sccs[1] = {
  &scc_info_QrCodeEvent_qrcode_2fqrcode_5fevent_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_qrcode_2fqrcode_5fevent_2eproto_once;
static bool descriptor_table_qrcode_2fqrcode_5fevent_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_qrcode_2fqrcode_5fevent_2eproto = {
  &descriptor_table_qrcode_2fqrcode_5fevent_2eproto_initialized, descriptor_table_protodef_qrcode_2fqrcode_5fevent_2eproto, "qrcode/qrcode_event.proto", 144,
  &descriptor_table_qrcode_2fqrcode_5fevent_2eproto_once, descriptor_table_qrcode_2fqrcode_5fevent_2eproto_sccs, descriptor_table_qrcode_2fqrcode_5fevent_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_qrcode_2fqrcode_5fevent_2eproto::offsets,
  file_level_metadata_qrcode_2fqrcode_5fevent_2eproto, 1, file_level_enum_descriptors_qrcode_2fqrcode_5fevent_2eproto, file_level_service_descriptors_qrcode_2fqrcode_5fevent_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_qrcode_2fqrcode_5fevent_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_qrcode_2fqrcode_5fevent_2eproto), true);
namespace qrcode {
namespace event {

// ===================================================================

void QrCodeEvent::InitAsDefaultInstance() {
  ::qrcode::event::_QrCodeEvent_default_instance_.raw_data_ = const_cast< ::qrcode::code_raw_data::RawData*>(
      ::qrcode::code_raw_data::RawData::internal_default_instance());
}
class QrCodeEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<QrCodeEvent>()._has_bits_);
  static const ::qrcode::code_raw_data::RawData& raw_data(const QrCodeEvent* msg);
};

const ::qrcode::code_raw_data::RawData&
QrCodeEvent::_Internal::raw_data(const QrCodeEvent* msg) {
  return *msg->event_.raw_data_;
}
void QrCodeEvent::set_allocated_raw_data(::qrcode::code_raw_data::RawData* raw_data) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_event();
  if (raw_data) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      raw_data = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, raw_data, submessage_arena);
    }
    set_has_raw_data();
    event_.raw_data_ = raw_data;
  }
  // @@protoc_insertion_point(field_set_allocated:qrcode.event.QrCodeEvent.raw_data)
}
void QrCodeEvent::clear_raw_data() {
  if (_internal_has_raw_data()) {
    delete event_.raw_data_;
    clear_has_event();
  }
}
QrCodeEvent::QrCodeEvent()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:qrcode.event.QrCodeEvent)
}
QrCodeEvent::QrCodeEvent(const QrCodeEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_event();
  switch (from.event_case()) {
    case kRawData: {
      _internal_mutable_raw_data()->::qrcode::code_raw_data::RawData::MergeFrom(from._internal_raw_data());
      break;
    }
    case EVENT_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:qrcode.event.QrCodeEvent)
}

void QrCodeEvent::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_QrCodeEvent_qrcode_2fqrcode_5fevent_2eproto.base);
  clear_has_event();
}

QrCodeEvent::~QrCodeEvent() {
  // @@protoc_insertion_point(destructor:qrcode.event.QrCodeEvent)
  SharedDtor();
}

void QrCodeEvent::SharedDtor() {
  if (has_event()) {
    clear_event();
  }
}

void QrCodeEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const QrCodeEvent& QrCodeEvent::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_QrCodeEvent_qrcode_2fqrcode_5fevent_2eproto.base);
  return *internal_default_instance();
}


void QrCodeEvent::clear_event() {
// @@protoc_insertion_point(one_of_clear_start:qrcode.event.QrCodeEvent)
  switch (event_case()) {
    case kRawData: {
      delete event_.raw_data_;
      break;
    }
    case EVENT_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = EVENT_NOT_SET;
}


void QrCodeEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:qrcode.event.QrCodeEvent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_event();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* QrCodeEvent::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .qrcode.code_raw_data.RawData raw_data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_raw_data(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* QrCodeEvent::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:qrcode.event.QrCodeEvent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // optional .qrcode.code_raw_data.RawData raw_data = 1;
  if (_internal_has_raw_data()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::raw_data(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:qrcode.event.QrCodeEvent)
  return target;
}

size_t QrCodeEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:qrcode.event.QrCodeEvent)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (event_case()) {
    // optional .qrcode.code_raw_data.RawData raw_data = 1;
    case kRawData: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *event_.raw_data_);
      break;
    }
    case EVENT_NOT_SET: {
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

void QrCodeEvent::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:qrcode.event.QrCodeEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const QrCodeEvent* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<QrCodeEvent>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:qrcode.event.QrCodeEvent)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:qrcode.event.QrCodeEvent)
    MergeFrom(*source);
  }
}

void QrCodeEvent::MergeFrom(const QrCodeEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:qrcode.event.QrCodeEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.event_case()) {
    case kRawData: {
      _internal_mutable_raw_data()->::qrcode::code_raw_data::RawData::MergeFrom(from._internal_raw_data());
      break;
    }
    case EVENT_NOT_SET: {
      break;
    }
  }
}

void QrCodeEvent::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:qrcode.event.QrCodeEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QrCodeEvent::CopyFrom(const QrCodeEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:qrcode.event.QrCodeEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QrCodeEvent::IsInitialized() const {
  switch (event_case()) {
    case kRawData: {
      if (has_raw_data()) {
        if (!this->raw_data().IsInitialized()) return false;
      }
      break;
    }
    case EVENT_NOT_SET: {
      break;
    }
  }
  return true;
}

void QrCodeEvent::InternalSwap(QrCodeEvent* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(event_, other->event_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata QrCodeEvent::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace event
}  // namespace qrcode
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::qrcode::event::QrCodeEvent* Arena::CreateMaybeMessage< ::qrcode::event::QrCodeEvent >(Arena* arena) {
  return Arena::CreateInternal< ::qrcode::event::QrCodeEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>