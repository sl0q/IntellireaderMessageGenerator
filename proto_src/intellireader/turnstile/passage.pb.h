// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: turnstile/passage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_turnstile_2fpassage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_turnstile_2fpassage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_turnstile_2fpassage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_turnstile_2fpassage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_turnstile_2fpassage_2eproto;
namespace turnstile {
namespace passage {
class AllowOnePass;
class AllowOnePassDefaultTypeInternal;
extern AllowOnePassDefaultTypeInternal _AllowOnePass_default_instance_;
class HoldLevel;
class HoldLevelDefaultTypeInternal;
extern HoldLevelDefaultTypeInternal _HoldLevel_default_instance_;
class OneImpulse;
class OneImpulseDefaultTypeInternal;
extern OneImpulseDefaultTypeInternal _OneImpulse_default_instance_;
}  // namespace passage
}  // namespace turnstile
PROTOBUF_NAMESPACE_OPEN
template<> ::turnstile::passage::AllowOnePass* Arena::CreateMaybeMessage<::turnstile::passage::AllowOnePass>(Arena*);
template<> ::turnstile::passage::HoldLevel* Arena::CreateMaybeMessage<::turnstile::passage::HoldLevel>(Arena*);
template<> ::turnstile::passage::OneImpulse* Arena::CreateMaybeMessage<::turnstile::passage::OneImpulse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace turnstile {
namespace passage {

// ===================================================================

class AllowOnePass :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:turnstile.passage.AllowOnePass) */ {
 public:
  AllowOnePass();
  virtual ~AllowOnePass();

  AllowOnePass(const AllowOnePass& from);
  AllowOnePass(AllowOnePass&& from) noexcept
    : AllowOnePass() {
    *this = ::std::move(from);
  }

  inline AllowOnePass& operator=(const AllowOnePass& from) {
    CopyFrom(from);
    return *this;
  }
  inline AllowOnePass& operator=(AllowOnePass&& from) noexcept {
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
  static const AllowOnePass& default_instance();

  enum OpenSignalCase {
    kHoldLevel = 2,
    kOneImpulse = 3,
    OPEN_SIGNAL_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AllowOnePass* internal_default_instance() {
    return reinterpret_cast<const AllowOnePass*>(
               &_AllowOnePass_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AllowOnePass& a, AllowOnePass& b) {
    a.Swap(&b);
  }
  inline void Swap(AllowOnePass* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AllowOnePass* New() const final {
    return CreateMaybeMessage<AllowOnePass>(nullptr);
  }

  AllowOnePass* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AllowOnePass>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AllowOnePass& from);
  void MergeFrom(const AllowOnePass& from);
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
  void InternalSwap(AllowOnePass* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "turnstile.passage.AllowOnePass";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_turnstile_2fpassage_2eproto);
    return ::descriptor_table_turnstile_2fpassage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeoutMsFieldNumber = 1,
    kHoldLevelFieldNumber = 2,
    kOneImpulseFieldNumber = 3,
  };
  // required uint32 timeout_ms = 1;
  bool has_timeout_ms() const;
  private:
  bool _internal_has_timeout_ms() const;
  public:
  void clear_timeout_ms();
  ::PROTOBUF_NAMESPACE_ID::uint32 timeout_ms() const;
  void set_timeout_ms(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_timeout_ms() const;
  void _internal_set_timeout_ms(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional .turnstile.passage.HoldLevel hold_level = 2;
  bool has_hold_level() const;
  private:
  bool _internal_has_hold_level() const;
  public:
  void clear_hold_level();
  const ::turnstile::passage::HoldLevel& hold_level() const;
  ::turnstile::passage::HoldLevel* release_hold_level();
  ::turnstile::passage::HoldLevel* mutable_hold_level();
  void set_allocated_hold_level(::turnstile::passage::HoldLevel* hold_level);
  private:
  const ::turnstile::passage::HoldLevel& _internal_hold_level() const;
  ::turnstile::passage::HoldLevel* _internal_mutable_hold_level();
  public:

  // optional .turnstile.passage.OneImpulse one_impulse = 3;
  bool has_one_impulse() const;
  private:
  bool _internal_has_one_impulse() const;
  public:
  void clear_one_impulse();
  const ::turnstile::passage::OneImpulse& one_impulse() const;
  ::turnstile::passage::OneImpulse* release_one_impulse();
  ::turnstile::passage::OneImpulse* mutable_one_impulse();
  void set_allocated_one_impulse(::turnstile::passage::OneImpulse* one_impulse);
  private:
  const ::turnstile::passage::OneImpulse& _internal_one_impulse() const;
  ::turnstile::passage::OneImpulse* _internal_mutable_one_impulse();
  public:

  void clear_open_signal();
  OpenSignalCase open_signal_case() const;
  // @@protoc_insertion_point(class_scope:turnstile.passage.AllowOnePass)
 private:
  class _Internal;
  void set_has_hold_level();
  void set_has_one_impulse();

  inline bool has_open_signal() const;
  inline void clear_has_open_signal();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 timeout_ms_;
  union OpenSignalUnion {
    OpenSignalUnion() {}
    ::turnstile::passage::HoldLevel* hold_level_;
    ::turnstile::passage::OneImpulse* one_impulse_;
  } open_signal_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_turnstile_2fpassage_2eproto;
};
// -------------------------------------------------------------------

class HoldLevel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:turnstile.passage.HoldLevel) */ {
 public:
  HoldLevel();
  virtual ~HoldLevel();

  HoldLevel(const HoldLevel& from);
  HoldLevel(HoldLevel&& from) noexcept
    : HoldLevel() {
    *this = ::std::move(from);
  }

  inline HoldLevel& operator=(const HoldLevel& from) {
    CopyFrom(from);
    return *this;
  }
  inline HoldLevel& operator=(HoldLevel&& from) noexcept {
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
  static const HoldLevel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HoldLevel* internal_default_instance() {
    return reinterpret_cast<const HoldLevel*>(
               &_HoldLevel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HoldLevel& a, HoldLevel& b) {
    a.Swap(&b);
  }
  inline void Swap(HoldLevel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HoldLevel* New() const final {
    return CreateMaybeMessage<HoldLevel>(nullptr);
  }

  HoldLevel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HoldLevel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HoldLevel& from);
  void MergeFrom(const HoldLevel& from);
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
  void InternalSwap(HoldLevel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "turnstile.passage.HoldLevel";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_turnstile_2fpassage_2eproto);
    return ::descriptor_table_turnstile_2fpassage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:turnstile.passage.HoldLevel)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_turnstile_2fpassage_2eproto;
};
// -------------------------------------------------------------------

class OneImpulse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:turnstile.passage.OneImpulse) */ {
 public:
  OneImpulse();
  virtual ~OneImpulse();

  OneImpulse(const OneImpulse& from);
  OneImpulse(OneImpulse&& from) noexcept
    : OneImpulse() {
    *this = ::std::move(from);
  }

  inline OneImpulse& operator=(const OneImpulse& from) {
    CopyFrom(from);
    return *this;
  }
  inline OneImpulse& operator=(OneImpulse&& from) noexcept {
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
  static const OneImpulse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OneImpulse* internal_default_instance() {
    return reinterpret_cast<const OneImpulse*>(
               &_OneImpulse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(OneImpulse& a, OneImpulse& b) {
    a.Swap(&b);
  }
  inline void Swap(OneImpulse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OneImpulse* New() const final {
    return CreateMaybeMessage<OneImpulse>(nullptr);
  }

  OneImpulse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OneImpulse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OneImpulse& from);
  void MergeFrom(const OneImpulse& from);
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
  void InternalSwap(OneImpulse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "turnstile.passage.OneImpulse";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_turnstile_2fpassage_2eproto);
    return ::descriptor_table_turnstile_2fpassage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDurationMsFieldNumber = 1,
  };
  // required uint32 duration_ms = 1;
  bool has_duration_ms() const;
  private:
  bool _internal_has_duration_ms() const;
  public:
  void clear_duration_ms();
  ::PROTOBUF_NAMESPACE_ID::uint32 duration_ms() const;
  void set_duration_ms(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_duration_ms() const;
  void _internal_set_duration_ms(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:turnstile.passage.OneImpulse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 duration_ms_;
  friend struct ::TableStruct_turnstile_2fpassage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AllowOnePass

// required uint32 timeout_ms = 1;
inline bool AllowOnePass::_internal_has_timeout_ms() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AllowOnePass::has_timeout_ms() const {
  return _internal_has_timeout_ms();
}
inline void AllowOnePass::clear_timeout_ms() {
  timeout_ms_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AllowOnePass::_internal_timeout_ms() const {
  return timeout_ms_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AllowOnePass::timeout_ms() const {
  // @@protoc_insertion_point(field_get:turnstile.passage.AllowOnePass.timeout_ms)
  return _internal_timeout_ms();
}
inline void AllowOnePass::_internal_set_timeout_ms(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  timeout_ms_ = value;
}
inline void AllowOnePass::set_timeout_ms(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_timeout_ms(value);
  // @@protoc_insertion_point(field_set:turnstile.passage.AllowOnePass.timeout_ms)
}

// optional .turnstile.passage.HoldLevel hold_level = 2;
inline bool AllowOnePass::_internal_has_hold_level() const {
  return open_signal_case() == kHoldLevel;
}
inline bool AllowOnePass::has_hold_level() const {
  return _internal_has_hold_level();
}
inline void AllowOnePass::set_has_hold_level() {
  _oneof_case_[0] = kHoldLevel;
}
inline void AllowOnePass::clear_hold_level() {
  if (_internal_has_hold_level()) {
    delete open_signal_.hold_level_;
    clear_has_open_signal();
  }
}
inline ::turnstile::passage::HoldLevel* AllowOnePass::release_hold_level() {
  // @@protoc_insertion_point(field_release:turnstile.passage.AllowOnePass.hold_level)
  if (_internal_has_hold_level()) {
    clear_has_open_signal();
      ::turnstile::passage::HoldLevel* temp = open_signal_.hold_level_;
    open_signal_.hold_level_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::turnstile::passage::HoldLevel& AllowOnePass::_internal_hold_level() const {
  return _internal_has_hold_level()
      ? *open_signal_.hold_level_
      : *reinterpret_cast< ::turnstile::passage::HoldLevel*>(&::turnstile::passage::_HoldLevel_default_instance_);
}
inline const ::turnstile::passage::HoldLevel& AllowOnePass::hold_level() const {
  // @@protoc_insertion_point(field_get:turnstile.passage.AllowOnePass.hold_level)
  return _internal_hold_level();
}
inline ::turnstile::passage::HoldLevel* AllowOnePass::_internal_mutable_hold_level() {
  if (!_internal_has_hold_level()) {
    clear_open_signal();
    set_has_hold_level();
    open_signal_.hold_level_ = CreateMaybeMessage< ::turnstile::passage::HoldLevel >(
        GetArenaNoVirtual());
  }
  return open_signal_.hold_level_;
}
inline ::turnstile::passage::HoldLevel* AllowOnePass::mutable_hold_level() {
  // @@protoc_insertion_point(field_mutable:turnstile.passage.AllowOnePass.hold_level)
  return _internal_mutable_hold_level();
}

// optional .turnstile.passage.OneImpulse one_impulse = 3;
inline bool AllowOnePass::_internal_has_one_impulse() const {
  return open_signal_case() == kOneImpulse;
}
inline bool AllowOnePass::has_one_impulse() const {
  return _internal_has_one_impulse();
}
inline void AllowOnePass::set_has_one_impulse() {
  _oneof_case_[0] = kOneImpulse;
}
inline void AllowOnePass::clear_one_impulse() {
  if (_internal_has_one_impulse()) {
    delete open_signal_.one_impulse_;
    clear_has_open_signal();
  }
}
inline ::turnstile::passage::OneImpulse* AllowOnePass::release_one_impulse() {
  // @@protoc_insertion_point(field_release:turnstile.passage.AllowOnePass.one_impulse)
  if (_internal_has_one_impulse()) {
    clear_has_open_signal();
      ::turnstile::passage::OneImpulse* temp = open_signal_.one_impulse_;
    open_signal_.one_impulse_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::turnstile::passage::OneImpulse& AllowOnePass::_internal_one_impulse() const {
  return _internal_has_one_impulse()
      ? *open_signal_.one_impulse_
      : *reinterpret_cast< ::turnstile::passage::OneImpulse*>(&::turnstile::passage::_OneImpulse_default_instance_);
}
inline const ::turnstile::passage::OneImpulse& AllowOnePass::one_impulse() const {
  // @@protoc_insertion_point(field_get:turnstile.passage.AllowOnePass.one_impulse)
  return _internal_one_impulse();
}
inline ::turnstile::passage::OneImpulse* AllowOnePass::_internal_mutable_one_impulse() {
  if (!_internal_has_one_impulse()) {
    clear_open_signal();
    set_has_one_impulse();
    open_signal_.one_impulse_ = CreateMaybeMessage< ::turnstile::passage::OneImpulse >(
        GetArenaNoVirtual());
  }
  return open_signal_.one_impulse_;
}
inline ::turnstile::passage::OneImpulse* AllowOnePass::mutable_one_impulse() {
  // @@protoc_insertion_point(field_mutable:turnstile.passage.AllowOnePass.one_impulse)
  return _internal_mutable_one_impulse();
}

inline bool AllowOnePass::has_open_signal() const {
  return open_signal_case() != OPEN_SIGNAL_NOT_SET;
}
inline void AllowOnePass::clear_has_open_signal() {
  _oneof_case_[0] = OPEN_SIGNAL_NOT_SET;
}
inline AllowOnePass::OpenSignalCase AllowOnePass::open_signal_case() const {
  return AllowOnePass::OpenSignalCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// HoldLevel

// -------------------------------------------------------------------

// OneImpulse

// required uint32 duration_ms = 1;
inline bool OneImpulse::_internal_has_duration_ms() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool OneImpulse::has_duration_ms() const {
  return _internal_has_duration_ms();
}
inline void OneImpulse::clear_duration_ms() {
  duration_ms_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 OneImpulse::_internal_duration_ms() const {
  return duration_ms_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 OneImpulse::duration_ms() const {
  // @@protoc_insertion_point(field_get:turnstile.passage.OneImpulse.duration_ms)
  return _internal_duration_ms();
}
inline void OneImpulse::_internal_set_duration_ms(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  duration_ms_ = value;
}
inline void OneImpulse::set_duration_ms(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_duration_ms(value);
  // @@protoc_insertion_point(field_set:turnstile.passage.OneImpulse.duration_ms)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace passage
}  // namespace turnstile

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_turnstile_2fpassage_2eproto
