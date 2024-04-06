// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: troika/av3/time.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_troika_2fav3_2ftime_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_troika_2fav3_2ftime_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_troika_2fav3_2ftime_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_troika_2fav3_2ftime_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_troika_2fav3_2ftime_2eproto;
namespace troika {
namespace av3 {
namespace time {
class Time;
class TimeDefaultTypeInternal;
extern TimeDefaultTypeInternal _Time_default_instance_;
}  // namespace time
}  // namespace av3
}  // namespace troika
PROTOBUF_NAMESPACE_OPEN
template<> ::troika::av3::time::Time* Arena::CreateMaybeMessage<::troika::av3::time::Time>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace troika {
namespace av3 {
namespace time {

// ===================================================================

class Time :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:troika.av3.time.Time) */ {
 public:
  Time();
  virtual ~Time();

  Time(const Time& from);
  Time(Time&& from) noexcept
    : Time() {
    *this = ::std::move(from);
  }

  inline Time& operator=(const Time& from) {
    CopyFrom(from);
    return *this;
  }
  inline Time& operator=(Time&& from) noexcept {
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
  static const Time& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Time* internal_default_instance() {
    return reinterpret_cast<const Time*>(
               &_Time_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Time& a, Time& b) {
    a.Swap(&b);
  }
  inline void Swap(Time* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Time* New() const final {
    return CreateMaybeMessage<Time>(nullptr);
  }

  Time* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Time>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Time& from);
  void MergeFrom(const Time& from);
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
  void InternalSwap(Time* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "troika.av3.time.Time";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_troika_2fav3_2ftime_2eproto);
    return ::descriptor_table_troika_2fav3_2ftime_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHourFieldNumber = 1,
    kMinuteFieldNumber = 2,
    kSecondFieldNumber = 3,
  };
  // required uint32 hour = 1;
  bool has_hour() const;
  private:
  bool _internal_has_hour() const;
  public:
  void clear_hour();
  ::PROTOBUF_NAMESPACE_ID::uint32 hour() const;
  void set_hour(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_hour() const;
  void _internal_set_hour(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 minute = 2;
  bool has_minute() const;
  private:
  bool _internal_has_minute() const;
  public:
  void clear_minute();
  ::PROTOBUF_NAMESPACE_ID::uint32 minute() const;
  void set_minute(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_minute() const;
  void _internal_set_minute(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 second = 3;
  bool has_second() const;
  private:
  bool _internal_has_second() const;
  public:
  void clear_second();
  ::PROTOBUF_NAMESPACE_ID::uint32 second() const;
  void set_second(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_second() const;
  void _internal_set_second(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:troika.av3.time.Time)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 hour_;
  ::PROTOBUF_NAMESPACE_ID::uint32 minute_;
  ::PROTOBUF_NAMESPACE_ID::uint32 second_;
  friend struct ::TableStruct_troika_2fav3_2ftime_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Time

// required uint32 hour = 1;
inline bool Time::_internal_has_hour() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Time::has_hour() const {
  return _internal_has_hour();
}
inline void Time::clear_hour() {
  hour_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Time::_internal_hour() const {
  return hour_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Time::hour() const {
  // @@protoc_insertion_point(field_get:troika.av3.time.Time.hour)
  return _internal_hour();
}
inline void Time::_internal_set_hour(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  hour_ = value;
}
inline void Time::set_hour(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_hour(value);
  // @@protoc_insertion_point(field_set:troika.av3.time.Time.hour)
}

// required uint32 minute = 2;
inline bool Time::_internal_has_minute() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Time::has_minute() const {
  return _internal_has_minute();
}
inline void Time::clear_minute() {
  minute_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Time::_internal_minute() const {
  return minute_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Time::minute() const {
  // @@protoc_insertion_point(field_get:troika.av3.time.Time.minute)
  return _internal_minute();
}
inline void Time::_internal_set_minute(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  minute_ = value;
}
inline void Time::set_minute(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_minute(value);
  // @@protoc_insertion_point(field_set:troika.av3.time.Time.minute)
}

// required uint32 second = 3;
inline bool Time::_internal_has_second() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Time::has_second() const {
  return _internal_has_second();
}
inline void Time::clear_second() {
  second_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Time::_internal_second() const {
  return second_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Time::second() const {
  // @@protoc_insertion_point(field_get:troika.av3.time.Time.second)
  return _internal_second();
}
inline void Time::_internal_set_second(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  second_ = value;
}
inline void Time::set_second(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_second(value);
  // @@protoc_insertion_point(field_set:troika.av3.time.Time.second)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace time
}  // namespace av3
}  // namespace troika

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_troika_2fav3_2ftime_2eproto
