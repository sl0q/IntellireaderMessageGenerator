// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: troika/av3/read_ticket.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_troika_2fav3_2fread_5fticket_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_troika_2fav3_2fread_5fticket_2eproto

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
#include "mifare/classic/auth.pb.h"
#include "troika/av3/date.pb.h"
#include "troika/av3/time.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_troika_2fav3_2fread_5fticket_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_troika_2fav3_2fread_5fticket_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_troika_2fav3_2fread_5fticket_2eproto;
namespace troika {
namespace av3 {
namespace read_ticket {
class ReadTicket;
class ReadTicketDefaultTypeInternal;
extern ReadTicketDefaultTypeInternal _ReadTicket_default_instance_;
class Ticket;
class TicketDefaultTypeInternal;
extern TicketDefaultTypeInternal _Ticket_default_instance_;
}  // namespace read_ticket
}  // namespace av3
}  // namespace troika
PROTOBUF_NAMESPACE_OPEN
template<> ::troika::av3::read_ticket::ReadTicket* Arena::CreateMaybeMessage<::troika::av3::read_ticket::ReadTicket>(Arena*);
template<> ::troika::av3::read_ticket::Ticket* Arena::CreateMaybeMessage<::troika::av3::read_ticket::Ticket>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace troika {
namespace av3 {
namespace read_ticket {

// ===================================================================

class ReadTicket :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:troika.av3.read_ticket.ReadTicket) */ {
 public:
  ReadTicket();
  virtual ~ReadTicket();

  ReadTicket(const ReadTicket& from);
  ReadTicket(ReadTicket&& from) noexcept
    : ReadTicket() {
    *this = ::std::move(from);
  }

  inline ReadTicket& operator=(const ReadTicket& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReadTicket& operator=(ReadTicket&& from) noexcept {
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
  static const ReadTicket& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReadTicket* internal_default_instance() {
    return reinterpret_cast<const ReadTicket*>(
               &_ReadTicket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ReadTicket& a, ReadTicket& b) {
    a.Swap(&b);
  }
  inline void Swap(ReadTicket* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReadTicket* New() const final {
    return CreateMaybeMessage<ReadTicket>(nullptr);
  }

  ReadTicket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReadTicket>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReadTicket& from);
  void MergeFrom(const ReadTicket& from);
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
  void InternalSwap(ReadTicket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "troika.av3.read_ticket.ReadTicket";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_troika_2fav3_2fread_5fticket_2eproto);
    return ::descriptor_table_troika_2fav3_2fread_5fticket_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSectorsFieldNumber = 3,
    kDateFieldNumber = 1,
    kTimeFieldNumber = 2,
  };
  // repeated .mifare.classic.auth.SamKey sectors = 3;
  int sectors_size() const;
  private:
  int _internal_sectors_size() const;
  public:
  void clear_sectors();
  ::mifare::classic::auth::SamKey* mutable_sectors(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mifare::classic::auth::SamKey >*
      mutable_sectors();
  private:
  const ::mifare::classic::auth::SamKey& _internal_sectors(int index) const;
  ::mifare::classic::auth::SamKey* _internal_add_sectors();
  public:
  const ::mifare::classic::auth::SamKey& sectors(int index) const;
  ::mifare::classic::auth::SamKey* add_sectors();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mifare::classic::auth::SamKey >&
      sectors() const;

  // required .troika.av3.date.Date date = 1;
  bool has_date() const;
  private:
  bool _internal_has_date() const;
  public:
  void clear_date();
  const ::troika::av3::date::Date& date() const;
  ::troika::av3::date::Date* release_date();
  ::troika::av3::date::Date* mutable_date();
  void set_allocated_date(::troika::av3::date::Date* date);
  private:
  const ::troika::av3::date::Date& _internal_date() const;
  ::troika::av3::date::Date* _internal_mutable_date();
  public:

  // required .troika.av3.time.Time time = 2;
  bool has_time() const;
  private:
  bool _internal_has_time() const;
  public:
  void clear_time();
  const ::troika::av3::time::Time& time() const;
  ::troika::av3::time::Time* release_time();
  ::troika::av3::time::Time* mutable_time();
  void set_allocated_time(::troika::av3::time::Time* time);
  private:
  const ::troika::av3::time::Time& _internal_time() const;
  ::troika::av3::time::Time* _internal_mutable_time();
  public:

  // @@protoc_insertion_point(class_scope:troika.av3.read_ticket.ReadTicket)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mifare::classic::auth::SamKey > sectors_;
  ::troika::av3::date::Date* date_;
  ::troika::av3::time::Time* time_;
  friend struct ::TableStruct_troika_2fav3_2fread_5fticket_2eproto;
};
// -------------------------------------------------------------------

class Ticket :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:troika.av3.read_ticket.Ticket) */ {
 public:
  Ticket();
  virtual ~Ticket();

  Ticket(const Ticket& from);
  Ticket(Ticket&& from) noexcept
    : Ticket() {
    *this = ::std::move(from);
  }

  inline Ticket& operator=(const Ticket& from) {
    CopyFrom(from);
    return *this;
  }
  inline Ticket& operator=(Ticket&& from) noexcept {
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
  static const Ticket& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Ticket* internal_default_instance() {
    return reinterpret_cast<const Ticket*>(
               &_Ticket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Ticket& a, Ticket& b) {
    a.Swap(&b);
  }
  inline void Swap(Ticket* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Ticket* New() const final {
    return CreateMaybeMessage<Ticket>(nullptr);
  }

  Ticket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Ticket>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Ticket& from);
  void MergeFrom(const Ticket& from);
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
  void InternalSwap(Ticket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "troika.av3.read_ticket.Ticket";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_troika_2fav3_2fread_5fticket_2eproto);
    return ::descriptor_table_troika_2fav3_2fread_5fticket_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTicketDataFieldNumber = 2,
    kSectorNumberFieldNumber = 1,
  };
  // required bytes ticket_data = 2;
  bool has_ticket_data() const;
  private:
  bool _internal_has_ticket_data() const;
  public:
  void clear_ticket_data();
  const std::string& ticket_data() const;
  void set_ticket_data(const std::string& value);
  void set_ticket_data(std::string&& value);
  void set_ticket_data(const char* value);
  void set_ticket_data(const void* value, size_t size);
  std::string* mutable_ticket_data();
  std::string* release_ticket_data();
  void set_allocated_ticket_data(std::string* ticket_data);
  private:
  const std::string& _internal_ticket_data() const;
  void _internal_set_ticket_data(const std::string& value);
  std::string* _internal_mutable_ticket_data();
  public:

  // required uint32 sector_number = 1;
  bool has_sector_number() const;
  private:
  bool _internal_has_sector_number() const;
  public:
  void clear_sector_number();
  ::PROTOBUF_NAMESPACE_ID::uint32 sector_number() const;
  void set_sector_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_sector_number() const;
  void _internal_set_sector_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:troika.av3.read_ticket.Ticket)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ticket_data_;
  ::PROTOBUF_NAMESPACE_ID::uint32 sector_number_;
  friend struct ::TableStruct_troika_2fav3_2fread_5fticket_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReadTicket

// required .troika.av3.date.Date date = 1;
inline bool ReadTicket::_internal_has_date() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || date_ != nullptr);
  return value;
}
inline bool ReadTicket::has_date() const {
  return _internal_has_date();
}
inline const ::troika::av3::date::Date& ReadTicket::_internal_date() const {
  const ::troika::av3::date::Date* p = date_;
  return p != nullptr ? *p : *reinterpret_cast<const ::troika::av3::date::Date*>(
      &::troika::av3::date::_Date_default_instance_);
}
inline const ::troika::av3::date::Date& ReadTicket::date() const {
  // @@protoc_insertion_point(field_get:troika.av3.read_ticket.ReadTicket.date)
  return _internal_date();
}
inline ::troika::av3::date::Date* ReadTicket::release_date() {
  // @@protoc_insertion_point(field_release:troika.av3.read_ticket.ReadTicket.date)
  _has_bits_[0] &= ~0x00000001u;
  ::troika::av3::date::Date* temp = date_;
  date_ = nullptr;
  return temp;
}
inline ::troika::av3::date::Date* ReadTicket::_internal_mutable_date() {
  _has_bits_[0] |= 0x00000001u;
  if (date_ == nullptr) {
    auto* p = CreateMaybeMessage<::troika::av3::date::Date>(GetArenaNoVirtual());
    date_ = p;
  }
  return date_;
}
inline ::troika::av3::date::Date* ReadTicket::mutable_date() {
  // @@protoc_insertion_point(field_mutable:troika.av3.read_ticket.ReadTicket.date)
  return _internal_mutable_date();
}
inline void ReadTicket::set_allocated_date(::troika::av3::date::Date* date) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(date_);
  }
  if (date) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      date = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, date, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  date_ = date;
  // @@protoc_insertion_point(field_set_allocated:troika.av3.read_ticket.ReadTicket.date)
}

// required .troika.av3.time.Time time = 2;
inline bool ReadTicket::_internal_has_time() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || time_ != nullptr);
  return value;
}
inline bool ReadTicket::has_time() const {
  return _internal_has_time();
}
inline const ::troika::av3::time::Time& ReadTicket::_internal_time() const {
  const ::troika::av3::time::Time* p = time_;
  return p != nullptr ? *p : *reinterpret_cast<const ::troika::av3::time::Time*>(
      &::troika::av3::time::_Time_default_instance_);
}
inline const ::troika::av3::time::Time& ReadTicket::time() const {
  // @@protoc_insertion_point(field_get:troika.av3.read_ticket.ReadTicket.time)
  return _internal_time();
}
inline ::troika::av3::time::Time* ReadTicket::release_time() {
  // @@protoc_insertion_point(field_release:troika.av3.read_ticket.ReadTicket.time)
  _has_bits_[0] &= ~0x00000002u;
  ::troika::av3::time::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::troika::av3::time::Time* ReadTicket::_internal_mutable_time() {
  _has_bits_[0] |= 0x00000002u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::troika::av3::time::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  return time_;
}
inline ::troika::av3::time::Time* ReadTicket::mutable_time() {
  // @@protoc_insertion_point(field_mutable:troika.av3.read_ticket.ReadTicket.time)
  return _internal_mutable_time();
}
inline void ReadTicket::set_allocated_time(::troika::av3::time::Time* time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_);
  }
  if (time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:troika.av3.read_ticket.ReadTicket.time)
}

// repeated .mifare.classic.auth.SamKey sectors = 3;
inline int ReadTicket::_internal_sectors_size() const {
  return sectors_.size();
}
inline int ReadTicket::sectors_size() const {
  return _internal_sectors_size();
}
inline ::mifare::classic::auth::SamKey* ReadTicket::mutable_sectors(int index) {
  // @@protoc_insertion_point(field_mutable:troika.av3.read_ticket.ReadTicket.sectors)
  return sectors_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mifare::classic::auth::SamKey >*
ReadTicket::mutable_sectors() {
  // @@protoc_insertion_point(field_mutable_list:troika.av3.read_ticket.ReadTicket.sectors)
  return &sectors_;
}
inline const ::mifare::classic::auth::SamKey& ReadTicket::_internal_sectors(int index) const {
  return sectors_.Get(index);
}
inline const ::mifare::classic::auth::SamKey& ReadTicket::sectors(int index) const {
  // @@protoc_insertion_point(field_get:troika.av3.read_ticket.ReadTicket.sectors)
  return _internal_sectors(index);
}
inline ::mifare::classic::auth::SamKey* ReadTicket::_internal_add_sectors() {
  return sectors_.Add();
}
inline ::mifare::classic::auth::SamKey* ReadTicket::add_sectors() {
  // @@protoc_insertion_point(field_add:troika.av3.read_ticket.ReadTicket.sectors)
  return _internal_add_sectors();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::mifare::classic::auth::SamKey >&
ReadTicket::sectors() const {
  // @@protoc_insertion_point(field_list:troika.av3.read_ticket.ReadTicket.sectors)
  return sectors_;
}

// -------------------------------------------------------------------

// Ticket

// required uint32 sector_number = 1;
inline bool Ticket::_internal_has_sector_number() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Ticket::has_sector_number() const {
  return _internal_has_sector_number();
}
inline void Ticket::clear_sector_number() {
  sector_number_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Ticket::_internal_sector_number() const {
  return sector_number_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Ticket::sector_number() const {
  // @@protoc_insertion_point(field_get:troika.av3.read_ticket.Ticket.sector_number)
  return _internal_sector_number();
}
inline void Ticket::_internal_set_sector_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  sector_number_ = value;
}
inline void Ticket::set_sector_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_sector_number(value);
  // @@protoc_insertion_point(field_set:troika.av3.read_ticket.Ticket.sector_number)
}

// required bytes ticket_data = 2;
inline bool Ticket::_internal_has_ticket_data() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Ticket::has_ticket_data() const {
  return _internal_has_ticket_data();
}
inline void Ticket::clear_ticket_data() {
  ticket_data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Ticket::ticket_data() const {
  // @@protoc_insertion_point(field_get:troika.av3.read_ticket.Ticket.ticket_data)
  return _internal_ticket_data();
}
inline void Ticket::set_ticket_data(const std::string& value) {
  _internal_set_ticket_data(value);
  // @@protoc_insertion_point(field_set:troika.av3.read_ticket.Ticket.ticket_data)
}
inline std::string* Ticket::mutable_ticket_data() {
  // @@protoc_insertion_point(field_mutable:troika.av3.read_ticket.Ticket.ticket_data)
  return _internal_mutable_ticket_data();
}
inline const std::string& Ticket::_internal_ticket_data() const {
  return ticket_data_.GetNoArena();
}
inline void Ticket::_internal_set_ticket_data(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  ticket_data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Ticket::set_ticket_data(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  ticket_data_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:troika.av3.read_ticket.Ticket.ticket_data)
}
inline void Ticket::set_ticket_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  ticket_data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:troika.av3.read_ticket.Ticket.ticket_data)
}
inline void Ticket::set_ticket_data(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  ticket_data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:troika.av3.read_ticket.Ticket.ticket_data)
}
inline std::string* Ticket::_internal_mutable_ticket_data() {
  _has_bits_[0] |= 0x00000001u;
  return ticket_data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Ticket::release_ticket_data() {
  // @@protoc_insertion_point(field_release:troika.av3.read_ticket.Ticket.ticket_data)
  if (!_internal_has_ticket_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return ticket_data_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Ticket::set_allocated_ticket_data(std::string* ticket_data) {
  if (ticket_data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  ticket_data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ticket_data);
  // @@protoc_insertion_point(field_set_allocated:troika.av3.read_ticket.Ticket.ticket_data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace read_ticket
}  // namespace av3
}  // namespace troika

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_troika_2fav3_2fread_5fticket_2eproto