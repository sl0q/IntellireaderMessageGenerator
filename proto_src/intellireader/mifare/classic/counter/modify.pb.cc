// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mifare/classic/counter/modify.proto

#include "mifare/classic/counter/modify.pb.h"

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
namespace mifare {
namespace classic {
namespace counter {
namespace modify {
class ModifyCounterDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ModifyCounter> _instance;
} _ModifyCounter_default_instance_;
}  // namespace modify
}  // namespace counter
}  // namespace classic
}  // namespace mifare
static void InitDefaultsscc_info_ModifyCounter_mifare_2fclassic_2fcounter_2fmodify_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mifare::classic::counter::modify::_ModifyCounter_default_instance_;
    new (ptr) ::mifare::classic::counter::modify::ModifyCounter();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mifare::classic::counter::modify::ModifyCounter::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ModifyCounter_mifare_2fclassic_2fcounter_2fmodify_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ModifyCounter_mifare_2fclassic_2fcounter_2fmodify_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mifare_2fclassic_2fcounter_2fmodify_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mifare_2fclassic_2fcounter_2fmodify_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mifare_2fclassic_2fcounter_2fmodify_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mifare_2fclassic_2fcounter_2fmodify_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mifare::classic::counter::modify::ModifyCounter, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mifare::classic::counter::modify::ModifyCounter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mifare::classic::counter::modify::ModifyCounter, src_block_),
  PROTOBUF_FIELD_OFFSET(::mifare::classic::counter::modify::ModifyCounter, operand_),
  PROTOBUF_FIELD_OFFSET(::mifare::classic::counter::modify::ModifyCounter, dst_block_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::mifare::classic::counter::modify::ModifyCounter)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mifare::classic::counter::modify::_ModifyCounter_default_instance_),
};

const char descriptor_table_protodef_mifare_2fclassic_2fcounter_2fmodify_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#mifare/classic/counter/modify.proto\022\035m"
  "ifare.classic.counter.modify\"F\n\rModifyCo"
  "unter\022\021\n\tsrc_block\030\001 \002(\r\022\017\n\007operand\030\002 \002("
  "\005\022\021\n\tdst_block\030\003 \001(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_sccs[1] = {
  &scc_info_ModifyCounter_mifare_2fclassic_2fcounter_2fmodify_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_once;
static bool descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto = {
  &descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_initialized, descriptor_table_protodef_mifare_2fclassic_2fcounter_2fmodify_2eproto, "mifare/classic/counter/modify.proto", 140,
  &descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_once, descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_sccs, descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_mifare_2fclassic_2fcounter_2fmodify_2eproto::offsets,
  file_level_metadata_mifare_2fclassic_2fcounter_2fmodify_2eproto, 1, file_level_enum_descriptors_mifare_2fclassic_2fcounter_2fmodify_2eproto, file_level_service_descriptors_mifare_2fclassic_2fcounter_2fmodify_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mifare_2fclassic_2fcounter_2fmodify_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mifare_2fclassic_2fcounter_2fmodify_2eproto), true);
namespace mifare {
namespace classic {
namespace counter {
namespace modify {

// ===================================================================

void ModifyCounter::InitAsDefaultInstance() {
}
class ModifyCounter::_Internal {
 public:
  using HasBits = decltype(std::declval<ModifyCounter>()._has_bits_);
  static void set_has_src_block(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_operand(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_dst_block(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

ModifyCounter::ModifyCounter()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mifare.classic.counter.modify.ModifyCounter)
}
ModifyCounter::ModifyCounter(const ModifyCounter& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&src_block_, &from.src_block_,
    static_cast<size_t>(reinterpret_cast<char*>(&dst_block_) -
    reinterpret_cast<char*>(&src_block_)) + sizeof(dst_block_));
  // @@protoc_insertion_point(copy_constructor:mifare.classic.counter.modify.ModifyCounter)
}

void ModifyCounter::SharedCtor() {
  ::memset(&src_block_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dst_block_) -
      reinterpret_cast<char*>(&src_block_)) + sizeof(dst_block_));
}

ModifyCounter::~ModifyCounter() {
  // @@protoc_insertion_point(destructor:mifare.classic.counter.modify.ModifyCounter)
  SharedDtor();
}

void ModifyCounter::SharedDtor() {
}

void ModifyCounter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ModifyCounter& ModifyCounter::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ModifyCounter_mifare_2fclassic_2fcounter_2fmodify_2eproto.base);
  return *internal_default_instance();
}


void ModifyCounter::Clear() {
// @@protoc_insertion_point(message_clear_start:mifare.classic.counter.modify.ModifyCounter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&src_block_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&dst_block_) -
        reinterpret_cast<char*>(&src_block_)) + sizeof(dst_block_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ModifyCounter::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 src_block = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_src_block(&has_bits);
          src_block_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 operand = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_operand(&has_bits);
          operand_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 dst_block = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_dst_block(&has_bits);
          dst_block_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ModifyCounter::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mifare.classic.counter.modify.ModifyCounter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 src_block = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_src_block(), target);
  }

  // required int32 operand = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_operand(), target);
  }

  // optional uint32 dst_block = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_dst_block(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mifare.classic.counter.modify.ModifyCounter)
  return target;
}

size_t ModifyCounter::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mifare.classic.counter.modify.ModifyCounter)
  size_t total_size = 0;

  if (_internal_has_src_block()) {
    // required uint32 src_block = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_src_block());
  }

  if (_internal_has_operand()) {
    // required int32 operand = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_operand());
  }

  return total_size;
}
size_t ModifyCounter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mifare.classic.counter.modify.ModifyCounter)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 src_block = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_src_block());

    // required int32 operand = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_operand());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional uint32 dst_block = 3;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000004u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_dst_block());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ModifyCounter::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mifare.classic.counter.modify.ModifyCounter)
  GOOGLE_DCHECK_NE(&from, this);
  const ModifyCounter* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ModifyCounter>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mifare.classic.counter.modify.ModifyCounter)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mifare.classic.counter.modify.ModifyCounter)
    MergeFrom(*source);
  }
}

void ModifyCounter::MergeFrom(const ModifyCounter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mifare.classic.counter.modify.ModifyCounter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      src_block_ = from.src_block_;
    }
    if (cached_has_bits & 0x00000002u) {
      operand_ = from.operand_;
    }
    if (cached_has_bits & 0x00000004u) {
      dst_block_ = from.dst_block_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ModifyCounter::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mifare.classic.counter.modify.ModifyCounter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ModifyCounter::CopyFrom(const ModifyCounter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mifare.classic.counter.modify.ModifyCounter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModifyCounter::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void ModifyCounter::InternalSwap(ModifyCounter* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(src_block_, other->src_block_);
  swap(operand_, other->operand_);
  swap(dst_block_, other->dst_block_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ModifyCounter::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace modify
}  // namespace counter
}  // namespace classic
}  // namespace mifare
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mifare::classic::counter::modify::ModifyCounter* Arena::CreateMaybeMessage< ::mifare::classic::counter::modify::ModifyCounter >(Arena* arena) {
  return Arena::CreateInternal< ::mifare::classic::counter::modify::ModifyCounter >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>