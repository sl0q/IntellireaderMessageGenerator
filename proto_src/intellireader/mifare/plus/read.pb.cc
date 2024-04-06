// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mifare/plus/read.proto

#include "mifare/plus/read.pb.h"

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
namespace plus {
namespace read {
class ReadBlocksDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ReadBlocks> _instance;
} _ReadBlocks_default_instance_;
class BlocksDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Blocks> _instance;
} _Blocks_default_instance_;
}  // namespace read
}  // namespace plus
}  // namespace mifare
static void InitDefaultsscc_info_Blocks_mifare_2fplus_2fread_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mifare::plus::read::_Blocks_default_instance_;
    new (ptr) ::mifare::plus::read::Blocks();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mifare::plus::read::Blocks::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Blocks_mifare_2fplus_2fread_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Blocks_mifare_2fplus_2fread_2eproto}, {}};

static void InitDefaultsscc_info_ReadBlocks_mifare_2fplus_2fread_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mifare::plus::read::_ReadBlocks_default_instance_;
    new (ptr) ::mifare::plus::read::ReadBlocks();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mifare::plus::read::ReadBlocks::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ReadBlocks_mifare_2fplus_2fread_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ReadBlocks_mifare_2fplus_2fread_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mifare_2fplus_2fread_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mifare_2fplus_2fread_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mifare_2fplus_2fread_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mifare_2fplus_2fread_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mifare::plus::read::ReadBlocks, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mifare::plus::read::ReadBlocks, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mifare::plus::read::ReadBlocks, start_block_),
  PROTOBUF_FIELD_OFFSET(::mifare::plus::read::ReadBlocks, block_count_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::mifare::plus::read::Blocks, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mifare::plus::read::Blocks, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mifare::plus::read::Blocks, data_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::mifare::plus::read::ReadBlocks)},
  { 9, 15, sizeof(::mifare::plus::read::Blocks)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mifare::plus::read::_ReadBlocks_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mifare::plus::read::_Blocks_default_instance_),
};

const char descriptor_table_protodef_mifare_2fplus_2fread_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026mifare/plus/read.proto\022\020mifare.plus.re"
  "ad\"9\n\nReadBlocks\022\023\n\013start_block\030\001 \002(\r\022\026\n"
  "\013block_count\030\002 \001(\r:\0011\"\026\n\006Blocks\022\014\n\004data\030"
  "\001 \002(\014"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mifare_2fplus_2fread_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mifare_2fplus_2fread_2eproto_sccs[2] = {
  &scc_info_Blocks_mifare_2fplus_2fread_2eproto.base,
  &scc_info_ReadBlocks_mifare_2fplus_2fread_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mifare_2fplus_2fread_2eproto_once;
static bool descriptor_table_mifare_2fplus_2fread_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mifare_2fplus_2fread_2eproto = {
  &descriptor_table_mifare_2fplus_2fread_2eproto_initialized, descriptor_table_protodef_mifare_2fplus_2fread_2eproto, "mifare/plus/read.proto", 125,
  &descriptor_table_mifare_2fplus_2fread_2eproto_once, descriptor_table_mifare_2fplus_2fread_2eproto_sccs, descriptor_table_mifare_2fplus_2fread_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_mifare_2fplus_2fread_2eproto::offsets,
  file_level_metadata_mifare_2fplus_2fread_2eproto, 2, file_level_enum_descriptors_mifare_2fplus_2fread_2eproto, file_level_service_descriptors_mifare_2fplus_2fread_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mifare_2fplus_2fread_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mifare_2fplus_2fread_2eproto), true);
namespace mifare {
namespace plus {
namespace read {

// ===================================================================

void ReadBlocks::InitAsDefaultInstance() {
}
class ReadBlocks::_Internal {
 public:
  using HasBits = decltype(std::declval<ReadBlocks>()._has_bits_);
  static void set_has_start_block(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_block_count(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ReadBlocks::ReadBlocks()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mifare.plus.read.ReadBlocks)
}
ReadBlocks::ReadBlocks(const ReadBlocks& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&start_block_, &from.start_block_,
    static_cast<size_t>(reinterpret_cast<char*>(&block_count_) -
    reinterpret_cast<char*>(&start_block_)) + sizeof(block_count_));
  // @@protoc_insertion_point(copy_constructor:mifare.plus.read.ReadBlocks)
}

void ReadBlocks::SharedCtor() {
  start_block_ = 0u;
  block_count_ = 1u;
}

ReadBlocks::~ReadBlocks() {
  // @@protoc_insertion_point(destructor:mifare.plus.read.ReadBlocks)
  SharedDtor();
}

void ReadBlocks::SharedDtor() {
}

void ReadBlocks::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ReadBlocks& ReadBlocks::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ReadBlocks_mifare_2fplus_2fread_2eproto.base);
  return *internal_default_instance();
}


void ReadBlocks::Clear() {
// @@protoc_insertion_point(message_clear_start:mifare.plus.read.ReadBlocks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    start_block_ = 0u;
    block_count_ = 1u;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ReadBlocks::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 start_block = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_start_block(&has_bits);
          start_block_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 block_count = 2 [default = 1];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_block_count(&has_bits);
          block_count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ReadBlocks::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mifare.plus.read.ReadBlocks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 start_block = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_start_block(), target);
  }

  // optional uint32 block_count = 2 [default = 1];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_block_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mifare.plus.read.ReadBlocks)
  return target;
}

size_t ReadBlocks::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mifare.plus.read.ReadBlocks)
  size_t total_size = 0;

  // required uint32 start_block = 1;
  if (_internal_has_start_block()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_start_block());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional uint32 block_count = 2 [default = 1];
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000002u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_block_count());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReadBlocks::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mifare.plus.read.ReadBlocks)
  GOOGLE_DCHECK_NE(&from, this);
  const ReadBlocks* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ReadBlocks>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mifare.plus.read.ReadBlocks)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mifare.plus.read.ReadBlocks)
    MergeFrom(*source);
  }
}

void ReadBlocks::MergeFrom(const ReadBlocks& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mifare.plus.read.ReadBlocks)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      start_block_ = from.start_block_;
    }
    if (cached_has_bits & 0x00000002u) {
      block_count_ = from.block_count_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ReadBlocks::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mifare.plus.read.ReadBlocks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReadBlocks::CopyFrom(const ReadBlocks& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mifare.plus.read.ReadBlocks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReadBlocks::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void ReadBlocks::InternalSwap(ReadBlocks* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(start_block_, other->start_block_);
  swap(block_count_, other->block_count_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ReadBlocks::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Blocks::InitAsDefaultInstance() {
}
class Blocks::_Internal {
 public:
  using HasBits = decltype(std::declval<Blocks>()._has_bits_);
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Blocks::Blocks()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mifare.plus.read.Blocks)
}
Blocks::Blocks(const Blocks& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_data()) {
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  // @@protoc_insertion_point(copy_constructor:mifare.plus.read.Blocks)
}

void Blocks::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Blocks_mifare_2fplus_2fread_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Blocks::~Blocks() {
  // @@protoc_insertion_point(destructor:mifare.plus.read.Blocks)
  SharedDtor();
}

void Blocks::SharedDtor() {
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Blocks::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Blocks& Blocks::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Blocks_mifare_2fplus_2fread_2eproto.base);
  return *internal_default_instance();
}


void Blocks::Clear() {
// @@protoc_insertion_point(message_clear_start:mifare.plus.read.Blocks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    data_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Blocks::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required bytes data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* Blocks::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mifare.plus.read.Blocks)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bytes data = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mifare.plus.read.Blocks)
  return target;
}

size_t Blocks::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mifare.plus.read.Blocks)
  size_t total_size = 0;

  // required bytes data = 1;
  if (_internal_has_data()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Blocks::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mifare.plus.read.Blocks)
  GOOGLE_DCHECK_NE(&from, this);
  const Blocks* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Blocks>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mifare.plus.read.Blocks)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mifare.plus.read.Blocks)
    MergeFrom(*source);
  }
}

void Blocks::MergeFrom(const Blocks& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mifare.plus.read.Blocks)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_data()) {
    _has_bits_[0] |= 0x00000001u;
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
}

void Blocks::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mifare.plus.read.Blocks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Blocks::CopyFrom(const Blocks& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mifare.plus.read.Blocks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Blocks::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void Blocks::InternalSwap(Blocks* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata Blocks::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace read
}  // namespace plus
}  // namespace mifare
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mifare::plus::read::ReadBlocks* Arena::CreateMaybeMessage< ::mifare::plus::read::ReadBlocks >(Arena* arena) {
  return Arena::CreateInternal< ::mifare::plus::read::ReadBlocks >(arena);
}
template<> PROTOBUF_NOINLINE ::mifare::plus::read::Blocks* Arena::CreateMaybeMessage< ::mifare::plus::read::Blocks >(Arena* arena) {
  return Arena::CreateInternal< ::mifare::plus::read::Blocks >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
