// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mifare/classic/sector/write_sector.proto

#include "mifare/classic/sector/write_sector.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_mifare_2fclassic_2fsector_2fsector_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Sector_mifare_2fclassic_2fsector_2fsector_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_mifare_2fclassic_2fwrite_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_WriteBlocks_mifare_2fclassic_2fwrite_2eproto;
namespace mifare {
namespace classic {
namespace sector {
namespace write {
class WriteSectorsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<WriteSectors> _instance;
} _WriteSectors_default_instance_;
class WriteSectorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<WriteSector> _instance;
} _WriteSector_default_instance_;
}  // namespace write
}  // namespace sector
}  // namespace classic
}  // namespace mifare
static void InitDefaultsscc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mifare::classic::sector::write::_WriteSector_default_instance_;
    new (ptr) ::mifare::classic::sector::write::WriteSector();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mifare::classic::sector::write::WriteSector::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto}, {
      &scc_info_Sector_mifare_2fclassic_2fsector_2fsector_2eproto.base,
      &scc_info_WriteBlocks_mifare_2fclassic_2fwrite_2eproto.base,}};

static void InitDefaultsscc_info_WriteSectors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mifare::classic::sector::write::_WriteSectors_default_instance_;
    new (ptr) ::mifare::classic::sector::write::WriteSectors();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mifare::classic::sector::write::WriteSectors::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_WriteSectors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_WriteSectors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto}, {
      &scc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mifare::classic::sector::write::WriteSectors, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mifare::classic::sector::write::WriteSectors, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mifare::classic::sector::write::WriteSectors, sectors_),
  ~0u,
  PROTOBUF_FIELD_OFFSET(::mifare::classic::sector::write::WriteSector, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mifare::classic::sector::write::WriteSector, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mifare::classic::sector::write::WriteSector, sector_),
  PROTOBUF_FIELD_OFFSET(::mifare::classic::sector::write::WriteSector, blocks_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::mifare::classic::sector::write::WriteSectors)},
  { 7, 14, sizeof(::mifare::classic::sector::write::WriteSector)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mifare::classic::sector::write::_WriteSectors_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mifare::classic::sector::write::_WriteSector_default_instance_),
};

const char descriptor_table_protodef_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(mifare/classic/sector/write_sector.pro"
  "to\022\033mifare.classic.sector.write\032\"mifare/"
  "classic/sector/sector.proto\032\032mifare/clas"
  "sic/write.proto\"I\n\014WriteSectors\0229\n\007secto"
  "rs\030\001 \003(\0132(.mifare.classic.sector.write.W"
  "riteSector\"v\n\013WriteSector\0224\n\006sector\030\001 \002("
  "\0132$.mifare.classic.sector.sector.Sector\022"
  "1\n\006blocks\030\002 \002(\0132!.mifare.classic.write.W"
  "riteBlocks"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_deps[2] = {
  &::descriptor_table_mifare_2fclassic_2fsector_2fsector_2eproto,
  &::descriptor_table_mifare_2fclassic_2fwrite_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_sccs[2] = {
  &scc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto.base,
  &scc_info_WriteSectors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_once;
static bool descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto = {
  &descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_initialized, descriptor_table_protodef_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto, "mifare/classic/sector/write_sector.proto", 330,
  &descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_once, descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_sccs, descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto::offsets,
  file_level_metadata_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto, 2, file_level_enum_descriptors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto, file_level_service_descriptors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto), true);
namespace mifare {
namespace classic {
namespace sector {
namespace write {

// ===================================================================

void WriteSectors::InitAsDefaultInstance() {
}
class WriteSectors::_Internal {
 public:
  using HasBits = decltype(std::declval<WriteSectors>()._has_bits_);
};

WriteSectors::WriteSectors()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mifare.classic.sector.write.WriteSectors)
}
WriteSectors::WriteSectors(const WriteSectors& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      sectors_(from.sectors_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mifare.classic.sector.write.WriteSectors)
}

void WriteSectors::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_WriteSectors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto.base);
}

WriteSectors::~WriteSectors() {
  // @@protoc_insertion_point(destructor:mifare.classic.sector.write.WriteSectors)
  SharedDtor();
}

void WriteSectors::SharedDtor() {
}

void WriteSectors::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const WriteSectors& WriteSectors::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_WriteSectors_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto.base);
  return *internal_default_instance();
}


void WriteSectors::Clear() {
// @@protoc_insertion_point(message_clear_start:mifare.classic.sector.write.WriteSectors)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sectors_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* WriteSectors::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .mifare.classic.sector.write.WriteSector sectors = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sectors(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* WriteSectors::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mifare.classic.sector.write.WriteSectors)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mifare.classic.sector.write.WriteSector sectors = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_sectors_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_sectors(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mifare.classic.sector.write.WriteSectors)
  return target;
}

size_t WriteSectors::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mifare.classic.sector.write.WriteSectors)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .mifare.classic.sector.write.WriteSector sectors = 1;
  total_size += 1UL * this->_internal_sectors_size();
  for (const auto& msg : this->sectors_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WriteSectors::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mifare.classic.sector.write.WriteSectors)
  GOOGLE_DCHECK_NE(&from, this);
  const WriteSectors* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<WriteSectors>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mifare.classic.sector.write.WriteSectors)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mifare.classic.sector.write.WriteSectors)
    MergeFrom(*source);
  }
}

void WriteSectors::MergeFrom(const WriteSectors& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mifare.classic.sector.write.WriteSectors)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  sectors_.MergeFrom(from.sectors_);
}

void WriteSectors::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mifare.classic.sector.write.WriteSectors)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WriteSectors::CopyFrom(const WriteSectors& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mifare.classic.sector.write.WriteSectors)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WriteSectors::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(sectors_)) return false;
  return true;
}

void WriteSectors::InternalSwap(WriteSectors* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  sectors_.InternalSwap(&other->sectors_);
}

::PROTOBUF_NAMESPACE_ID::Metadata WriteSectors::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void WriteSector::InitAsDefaultInstance() {
  ::mifare::classic::sector::write::_WriteSector_default_instance_._instance.get_mutable()->sector_ = const_cast< ::mifare::classic::sector::sector::Sector*>(
      ::mifare::classic::sector::sector::Sector::internal_default_instance());
  ::mifare::classic::sector::write::_WriteSector_default_instance_._instance.get_mutable()->blocks_ = const_cast< ::mifare::classic::write::WriteBlocks*>(
      ::mifare::classic::write::WriteBlocks::internal_default_instance());
}
class WriteSector::_Internal {
 public:
  using HasBits = decltype(std::declval<WriteSector>()._has_bits_);
  static const ::mifare::classic::sector::sector::Sector& sector(const WriteSector* msg);
  static void set_has_sector(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::mifare::classic::write::WriteBlocks& blocks(const WriteSector* msg);
  static void set_has_blocks(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::mifare::classic::sector::sector::Sector&
WriteSector::_Internal::sector(const WriteSector* msg) {
  return *msg->sector_;
}
const ::mifare::classic::write::WriteBlocks&
WriteSector::_Internal::blocks(const WriteSector* msg) {
  return *msg->blocks_;
}
void WriteSector::clear_sector() {
  if (sector_ != nullptr) sector_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void WriteSector::clear_blocks() {
  if (blocks_ != nullptr) blocks_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
WriteSector::WriteSector()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mifare.classic.sector.write.WriteSector)
}
WriteSector::WriteSector(const WriteSector& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_sector()) {
    sector_ = new ::mifare::classic::sector::sector::Sector(*from.sector_);
  } else {
    sector_ = nullptr;
  }
  if (from._internal_has_blocks()) {
    blocks_ = new ::mifare::classic::write::WriteBlocks(*from.blocks_);
  } else {
    blocks_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:mifare.classic.sector.write.WriteSector)
}

void WriteSector::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto.base);
  ::memset(&sector_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&blocks_) -
      reinterpret_cast<char*>(&sector_)) + sizeof(blocks_));
}

WriteSector::~WriteSector() {
  // @@protoc_insertion_point(destructor:mifare.classic.sector.write.WriteSector)
  SharedDtor();
}

void WriteSector::SharedDtor() {
  if (this != internal_default_instance()) delete sector_;
  if (this != internal_default_instance()) delete blocks_;
}

void WriteSector::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const WriteSector& WriteSector::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_WriteSector_mifare_2fclassic_2fsector_2fwrite_5fsector_2eproto.base);
  return *internal_default_instance();
}


void WriteSector::Clear() {
// @@protoc_insertion_point(message_clear_start:mifare.classic.sector.write.WriteSector)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(sector_ != nullptr);
      sector_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(blocks_ != nullptr);
      blocks_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* WriteSector::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .mifare.classic.sector.sector.Sector sector = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_sector(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .mifare.classic.write.WriteBlocks blocks = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_blocks(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* WriteSector::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mifare.classic.sector.write.WriteSector)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .mifare.classic.sector.sector.Sector sector = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::sector(this), target, stream);
  }

  // required .mifare.classic.write.WriteBlocks blocks = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::blocks(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mifare.classic.sector.write.WriteSector)
  return target;
}

size_t WriteSector::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mifare.classic.sector.write.WriteSector)
  size_t total_size = 0;

  if (_internal_has_sector()) {
    // required .mifare.classic.sector.sector.Sector sector = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *sector_);
  }

  if (_internal_has_blocks()) {
    // required .mifare.classic.write.WriteBlocks blocks = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *blocks_);
  }

  return total_size;
}
size_t WriteSector::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mifare.classic.sector.write.WriteSector)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .mifare.classic.sector.sector.Sector sector = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *sector_);

    // required .mifare.classic.write.WriteBlocks blocks = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *blocks_);

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

void WriteSector::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mifare.classic.sector.write.WriteSector)
  GOOGLE_DCHECK_NE(&from, this);
  const WriteSector* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<WriteSector>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mifare.classic.sector.write.WriteSector)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mifare.classic.sector.write.WriteSector)
    MergeFrom(*source);
  }
}

void WriteSector::MergeFrom(const WriteSector& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mifare.classic.sector.write.WriteSector)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_sector()->::mifare::classic::sector::sector::Sector::MergeFrom(from._internal_sector());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_blocks()->::mifare::classic::write::WriteBlocks::MergeFrom(from._internal_blocks());
    }
  }
}

void WriteSector::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mifare.classic.sector.write.WriteSector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WriteSector::CopyFrom(const WriteSector& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mifare.classic.sector.write.WriteSector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WriteSector::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (_internal_has_sector()) {
    if (!sector_->IsInitialized()) return false;
  }
  if (_internal_has_blocks()) {
    if (!blocks_->IsInitialized()) return false;
  }
  return true;
}

void WriteSector::InternalSwap(WriteSector* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(sector_, other->sector_);
  swap(blocks_, other->blocks_);
}

::PROTOBUF_NAMESPACE_ID::Metadata WriteSector::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace write
}  // namespace sector
}  // namespace classic
}  // namespace mifare
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mifare::classic::sector::write::WriteSectors* Arena::CreateMaybeMessage< ::mifare::classic::sector::write::WriteSectors >(Arena* arena) {
  return Arena::CreateInternal< ::mifare::classic::sector::write::WriteSectors >(arena);
}
template<> PROTOBUF_NOINLINE ::mifare::classic::sector::write::WriteSector* Arena::CreateMaybeMessage< ::mifare::classic::sector::write::WriteSector >(Arena* arena) {
  return Arena::CreateInternal< ::mifare::classic::sector::write::WriteSector >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
