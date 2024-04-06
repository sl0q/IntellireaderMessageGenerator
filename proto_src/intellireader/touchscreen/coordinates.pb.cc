// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: touchscreen/coordinates.proto

#include "touchscreen/coordinates.pb.h"

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
namespace touchscreen {
namespace coordinates {
class CoordinatesDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Coordinates> _instance;
} _Coordinates_default_instance_;
}  // namespace coordinates
}  // namespace touchscreen
static void InitDefaultsscc_info_Coordinates_touchscreen_2fcoordinates_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::touchscreen::coordinates::_Coordinates_default_instance_;
    new (ptr) ::touchscreen::coordinates::Coordinates();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::touchscreen::coordinates::Coordinates::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Coordinates_touchscreen_2fcoordinates_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Coordinates_touchscreen_2fcoordinates_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_touchscreen_2fcoordinates_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_touchscreen_2fcoordinates_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_touchscreen_2fcoordinates_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_touchscreen_2fcoordinates_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::touchscreen::coordinates::Coordinates, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::touchscreen::coordinates::Coordinates, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::touchscreen::coordinates::Coordinates, x_),
  PROTOBUF_FIELD_OFFSET(::touchscreen::coordinates::Coordinates, y_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::touchscreen::coordinates::Coordinates)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::touchscreen::coordinates::_Coordinates_default_instance_),
};

const char descriptor_table_protodef_touchscreen_2fcoordinates_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035touchscreen/coordinates.proto\022\027touchsc"
  "reen.coordinates\"#\n\013Coordinates\022\t\n\001x\030\001 \002"
  "(\r\022\t\n\001y\030\002 \002(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_touchscreen_2fcoordinates_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_touchscreen_2fcoordinates_2eproto_sccs[1] = {
  &scc_info_Coordinates_touchscreen_2fcoordinates_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_touchscreen_2fcoordinates_2eproto_once;
static bool descriptor_table_touchscreen_2fcoordinates_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_touchscreen_2fcoordinates_2eproto = {
  &descriptor_table_touchscreen_2fcoordinates_2eproto_initialized, descriptor_table_protodef_touchscreen_2fcoordinates_2eproto, "touchscreen/coordinates.proto", 93,
  &descriptor_table_touchscreen_2fcoordinates_2eproto_once, descriptor_table_touchscreen_2fcoordinates_2eproto_sccs, descriptor_table_touchscreen_2fcoordinates_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_touchscreen_2fcoordinates_2eproto::offsets,
  file_level_metadata_touchscreen_2fcoordinates_2eproto, 1, file_level_enum_descriptors_touchscreen_2fcoordinates_2eproto, file_level_service_descriptors_touchscreen_2fcoordinates_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_touchscreen_2fcoordinates_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_touchscreen_2fcoordinates_2eproto), true);
namespace touchscreen {
namespace coordinates {

// ===================================================================

void Coordinates::InitAsDefaultInstance() {
}
class Coordinates::_Internal {
 public:
  using HasBits = decltype(std::declval<Coordinates>()._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Coordinates::Coordinates()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:touchscreen.coordinates.Coordinates)
}
Coordinates::Coordinates(const Coordinates& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:touchscreen.coordinates.Coordinates)
}

void Coordinates::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
}

Coordinates::~Coordinates() {
  // @@protoc_insertion_point(destructor:touchscreen.coordinates.Coordinates)
  SharedDtor();
}

void Coordinates::SharedDtor() {
}

void Coordinates::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Coordinates& Coordinates::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Coordinates_touchscreen_2fcoordinates_2eproto.base);
  return *internal_default_instance();
}


void Coordinates::Clear() {
// @@protoc_insertion_point(message_clear_start:touchscreen.coordinates.Coordinates)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&y_) -
        reinterpret_cast<char*>(&x_)) + sizeof(y_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Coordinates::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_x(&has_bits);
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_y(&has_bits);
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Coordinates::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:touchscreen.coordinates.Coordinates)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_x(), target);
  }

  // required uint32 y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:touchscreen.coordinates.Coordinates)
  return target;
}

size_t Coordinates::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:touchscreen.coordinates.Coordinates)
  size_t total_size = 0;

  if (_internal_has_x()) {
    // required uint32 x = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_x());
  }

  if (_internal_has_y()) {
    // required uint32 y = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_y());
  }

  return total_size;
}
size_t Coordinates::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:touchscreen.coordinates.Coordinates)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 x = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_x());

    // required uint32 y = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_y());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
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

void Coordinates::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:touchscreen.coordinates.Coordinates)
  GOOGLE_DCHECK_NE(&from, this);
  const Coordinates* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Coordinates>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:touchscreen.coordinates.Coordinates)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:touchscreen.coordinates.Coordinates)
    MergeFrom(*source);
  }
}

void Coordinates::MergeFrom(const Coordinates& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:touchscreen.coordinates.Coordinates)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_ = from.y_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Coordinates::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:touchscreen.coordinates.Coordinates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Coordinates::CopyFrom(const Coordinates& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:touchscreen.coordinates.Coordinates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Coordinates::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void Coordinates::InternalSwap(Coordinates* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(x_, other->x_);
  swap(y_, other->y_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Coordinates::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace coordinates
}  // namespace touchscreen
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::touchscreen::coordinates::Coordinates* Arena::CreateMaybeMessage< ::touchscreen::coordinates::Coordinates >(Arena* arena) {
  return Arena::CreateInternal< ::touchscreen::coordinates::Coordinates >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>