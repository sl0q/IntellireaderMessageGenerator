// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: srv/challenge.proto

#include "srv/challenge.pb.h"

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
namespace srv {
namespace challenge {
class GetChallengeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetChallenge> _instance;
} _GetChallenge_default_instance_;
class ChallengeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Challenge> _instance;
} _Challenge_default_instance_;
}  // namespace challenge
}  // namespace srv
static void InitDefaultsscc_info_Challenge_srv_2fchallenge_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::srv::challenge::_Challenge_default_instance_;
    new (ptr) ::srv::challenge::Challenge();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::srv::challenge::Challenge::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Challenge_srv_2fchallenge_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Challenge_srv_2fchallenge_2eproto}, {}};

static void InitDefaultsscc_info_GetChallenge_srv_2fchallenge_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::srv::challenge::_GetChallenge_default_instance_;
    new (ptr) ::srv::challenge::GetChallenge();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::srv::challenge::GetChallenge::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GetChallenge_srv_2fchallenge_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GetChallenge_srv_2fchallenge_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_srv_2fchallenge_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_srv_2fchallenge_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_srv_2fchallenge_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_srv_2fchallenge_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::srv::challenge::GetChallenge, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::srv::challenge::GetChallenge, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::srv::challenge::GetChallenge, data_),
  0,
  PROTOBUF_FIELD_OFFSET(::srv::challenge::Challenge, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::srv::challenge::Challenge, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::srv::challenge::Challenge, data_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::srv::challenge::GetChallenge)},
  { 7, 13, sizeof(::srv::challenge::Challenge)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::srv::challenge::_GetChallenge_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::srv::challenge::_Challenge_default_instance_),
};

const char descriptor_table_protodef_srv_2fchallenge_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023srv/challenge.proto\022\rsrv.challenge\"\034\n\014"
  "GetChallenge\022\014\n\004data\030\001 \002(\014\"\031\n\tChallenge\022"
  "\014\n\004data\030\001 \002(\014"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_srv_2fchallenge_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_srv_2fchallenge_2eproto_sccs[2] = {
  &scc_info_Challenge_srv_2fchallenge_2eproto.base,
  &scc_info_GetChallenge_srv_2fchallenge_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_srv_2fchallenge_2eproto_once;
static bool descriptor_table_srv_2fchallenge_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_srv_2fchallenge_2eproto = {
  &descriptor_table_srv_2fchallenge_2eproto_initialized, descriptor_table_protodef_srv_2fchallenge_2eproto, "srv/challenge.proto", 93,
  &descriptor_table_srv_2fchallenge_2eproto_once, descriptor_table_srv_2fchallenge_2eproto_sccs, descriptor_table_srv_2fchallenge_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_srv_2fchallenge_2eproto::offsets,
  file_level_metadata_srv_2fchallenge_2eproto, 2, file_level_enum_descriptors_srv_2fchallenge_2eproto, file_level_service_descriptors_srv_2fchallenge_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_srv_2fchallenge_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_srv_2fchallenge_2eproto), true);
namespace srv {
namespace challenge {

// ===================================================================

void GetChallenge::InitAsDefaultInstance() {
}
class GetChallenge::_Internal {
 public:
  using HasBits = decltype(std::declval<GetChallenge>()._has_bits_);
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

GetChallenge::GetChallenge()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:srv.challenge.GetChallenge)
}
GetChallenge::GetChallenge(const GetChallenge& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_data()) {
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  // @@protoc_insertion_point(copy_constructor:srv.challenge.GetChallenge)
}

void GetChallenge::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetChallenge_srv_2fchallenge_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

GetChallenge::~GetChallenge() {
  // @@protoc_insertion_point(destructor:srv.challenge.GetChallenge)
  SharedDtor();
}

void GetChallenge::SharedDtor() {
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetChallenge::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetChallenge& GetChallenge::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetChallenge_srv_2fchallenge_2eproto.base);
  return *internal_default_instance();
}


void GetChallenge::Clear() {
// @@protoc_insertion_point(message_clear_start:srv.challenge.GetChallenge)
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

const char* GetChallenge::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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

::PROTOBUF_NAMESPACE_ID::uint8* GetChallenge::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:srv.challenge.GetChallenge)
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
  // @@protoc_insertion_point(serialize_to_array_end:srv.challenge.GetChallenge)
  return target;
}

size_t GetChallenge::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:srv.challenge.GetChallenge)
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

void GetChallenge::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:srv.challenge.GetChallenge)
  GOOGLE_DCHECK_NE(&from, this);
  const GetChallenge* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetChallenge>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:srv.challenge.GetChallenge)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:srv.challenge.GetChallenge)
    MergeFrom(*source);
  }
}

void GetChallenge::MergeFrom(const GetChallenge& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:srv.challenge.GetChallenge)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_data()) {
    _has_bits_[0] |= 0x00000001u;
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
}

void GetChallenge::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:srv.challenge.GetChallenge)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetChallenge::CopyFrom(const GetChallenge& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:srv.challenge.GetChallenge)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetChallenge::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void GetChallenge::InternalSwap(GetChallenge* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata GetChallenge::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Challenge::InitAsDefaultInstance() {
}
class Challenge::_Internal {
 public:
  using HasBits = decltype(std::declval<Challenge>()._has_bits_);
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Challenge::Challenge()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:srv.challenge.Challenge)
}
Challenge::Challenge(const Challenge& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_data()) {
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  // @@protoc_insertion_point(copy_constructor:srv.challenge.Challenge)
}

void Challenge::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Challenge_srv_2fchallenge_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Challenge::~Challenge() {
  // @@protoc_insertion_point(destructor:srv.challenge.Challenge)
  SharedDtor();
}

void Challenge::SharedDtor() {
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Challenge::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Challenge& Challenge::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Challenge_srv_2fchallenge_2eproto.base);
  return *internal_default_instance();
}


void Challenge::Clear() {
// @@protoc_insertion_point(message_clear_start:srv.challenge.Challenge)
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

const char* Challenge::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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

::PROTOBUF_NAMESPACE_ID::uint8* Challenge::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:srv.challenge.Challenge)
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
  // @@protoc_insertion_point(serialize_to_array_end:srv.challenge.Challenge)
  return target;
}

size_t Challenge::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:srv.challenge.Challenge)
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

void Challenge::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:srv.challenge.Challenge)
  GOOGLE_DCHECK_NE(&from, this);
  const Challenge* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Challenge>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:srv.challenge.Challenge)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:srv.challenge.Challenge)
    MergeFrom(*source);
  }
}

void Challenge::MergeFrom(const Challenge& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:srv.challenge.Challenge)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_data()) {
    _has_bits_[0] |= 0x00000001u;
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
}

void Challenge::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:srv.challenge.Challenge)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Challenge::CopyFrom(const Challenge& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:srv.challenge.Challenge)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Challenge::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void Challenge::InternalSwap(Challenge* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata Challenge::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace challenge
}  // namespace srv
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::srv::challenge::GetChallenge* Arena::CreateMaybeMessage< ::srv::challenge::GetChallenge >(Arena* arena) {
  return Arena::CreateInternal< ::srv::challenge::GetChallenge >(arena);
}
template<> PROTOBUF_NOINLINE ::srv::challenge::Challenge* Arena::CreateMaybeMessage< ::srv::challenge::Challenge >(Arena* arena) {
  return Arena::CreateInternal< ::srv::challenge::Challenge >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>