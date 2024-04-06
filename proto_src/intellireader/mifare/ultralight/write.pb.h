// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mifare/ultralight/write.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mifare_2fultralight_2fwrite_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mifare_2fultralight_2fwrite_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mifare_2fultralight_2fwrite_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mifare_2fultralight_2fwrite_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mifare_2fultralight_2fwrite_2eproto;
namespace mifare {
namespace ultralight {
namespace write {
class WritePages;
class WritePagesDefaultTypeInternal;
extern WritePagesDefaultTypeInternal _WritePages_default_instance_;
}  // namespace write
}  // namespace ultralight
}  // namespace mifare
PROTOBUF_NAMESPACE_OPEN
template<> ::mifare::ultralight::write::WritePages* Arena::CreateMaybeMessage<::mifare::ultralight::write::WritePages>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mifare {
namespace ultralight {
namespace write {

// ===================================================================

class WritePages :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mifare.ultralight.write.WritePages) */ {
 public:
  WritePages();
  virtual ~WritePages();

  WritePages(const WritePages& from);
  WritePages(WritePages&& from) noexcept
    : WritePages() {
    *this = ::std::move(from);
  }

  inline WritePages& operator=(const WritePages& from) {
    CopyFrom(from);
    return *this;
  }
  inline WritePages& operator=(WritePages&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const WritePages& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WritePages* internal_default_instance() {
    return reinterpret_cast<const WritePages*>(
               &_WritePages_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WritePages& a, WritePages& b) {
    a.Swap(&b);
  }
  inline void Swap(WritePages* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WritePages* New() const final {
    return CreateMaybeMessage<WritePages>(nullptr);
  }

  WritePages* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WritePages>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WritePages& from);
  void MergeFrom(const WritePages& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WritePages* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mifare.ultralight.write.WritePages";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mifare_2fultralight_2fwrite_2eproto);
    return ::descriptor_table_mifare_2fultralight_2fwrite_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 2,
    kStartAddressFieldNumber = 1,
  };
  // required bytes data = 2;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // required uint32 start_address = 1;
  bool has_start_address() const;
  private:
  bool _internal_has_start_address() const;
  public:
  void clear_start_address();
  ::PROTOBUF_NAMESPACE_ID::uint32 start_address() const;
  void set_start_address(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_start_address() const;
  void _internal_set_start_address(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:mifare.ultralight.write.WritePages)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::uint32 start_address_;
  friend struct ::TableStruct_mifare_2fultralight_2fwrite_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WritePages

// required uint32 start_address = 1;
inline bool WritePages::_internal_has_start_address() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool WritePages::has_start_address() const {
  return _internal_has_start_address();
}
inline void WritePages::clear_start_address() {
  start_address_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WritePages::_internal_start_address() const {
  return start_address_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WritePages::start_address() const {
  // @@protoc_insertion_point(field_get:mifare.ultralight.write.WritePages.start_address)
  return _internal_start_address();
}
inline void WritePages::_internal_set_start_address(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  start_address_ = value;
}
inline void WritePages::set_start_address(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_start_address(value);
  // @@protoc_insertion_point(field_set:mifare.ultralight.write.WritePages.start_address)
}

// required bytes data = 2;
inline bool WritePages::_internal_has_data() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool WritePages::has_data() const {
  return _internal_has_data();
}
inline void WritePages::clear_data() {
  data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& WritePages::data() const {
  // @@protoc_insertion_point(field_get:mifare.ultralight.write.WritePages.data)
  return _internal_data();
}
inline void WritePages::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:mifare.ultralight.write.WritePages.data)
}
inline std::string* WritePages::mutable_data() {
  // @@protoc_insertion_point(field_mutable:mifare.ultralight.write.WritePages.data)
  return _internal_mutable_data();
}
inline const std::string& WritePages::_internal_data() const {
  return data_.GetNoArena();
}
inline void WritePages::_internal_set_data(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void WritePages::set_data(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mifare.ultralight.write.WritePages.data)
}
inline void WritePages::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mifare.ultralight.write.WritePages.data)
}
inline void WritePages::set_data(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mifare.ultralight.write.WritePages.data)
}
inline std::string* WritePages::_internal_mutable_data() {
  _has_bits_[0] |= 0x00000001u;
  return data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* WritePages::release_data() {
  // @@protoc_insertion_point(field_release:mifare.ultralight.write.WritePages.data)
  if (!_internal_has_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return data_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void WritePages::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:mifare.ultralight.write.WritePages.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace write
}  // namespace ultralight
}  // namespace mifare

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mifare_2fultralight_2fwrite_2eproto
