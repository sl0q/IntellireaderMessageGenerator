// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: troika/av3/read_ticket.proto

#include "troika/av3/read_ticket.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_mifare_2fclassic_2fauth_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SamKey_mifare_2fclassic_2fauth_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_troika_2fav3_2fdate_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Date_troika_2fav3_2fdate_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_troika_2fav3_2ftime_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_troika_2fav3_2ftime_2eproto;
namespace troika {
namespace av3 {
namespace read_ticket {
class ReadTicketDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ReadTicket> _instance;
} _ReadTicket_default_instance_;
class TicketDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Ticket> _instance;
} _Ticket_default_instance_;
}  // namespace read_ticket
}  // namespace av3
}  // namespace troika
static void InitDefaultsscc_info_ReadTicket_troika_2fav3_2fread_5fticket_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::troika::av3::read_ticket::_ReadTicket_default_instance_;
    new (ptr) ::troika::av3::read_ticket::ReadTicket();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::troika::av3::read_ticket::ReadTicket::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_ReadTicket_troika_2fav3_2fread_5fticket_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_ReadTicket_troika_2fav3_2fread_5fticket_2eproto}, {
      &scc_info_Date_troika_2fav3_2fdate_2eproto.base,
      &scc_info_Time_troika_2fav3_2ftime_2eproto.base,
      &scc_info_SamKey_mifare_2fclassic_2fauth_2eproto.base,}};

static void InitDefaultsscc_info_Ticket_troika_2fav3_2fread_5fticket_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::troika::av3::read_ticket::_Ticket_default_instance_;
    new (ptr) ::troika::av3::read_ticket::Ticket();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::troika::av3::read_ticket::Ticket::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Ticket_troika_2fav3_2fread_5fticket_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Ticket_troika_2fav3_2fread_5fticket_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_troika_2fav3_2fread_5fticket_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_troika_2fav3_2fread_5fticket_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_troika_2fav3_2fread_5fticket_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_troika_2fav3_2fread_5fticket_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::ReadTicket, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::ReadTicket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::ReadTicket, date_),
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::ReadTicket, time_),
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::ReadTicket, sectors_),
  0,
  1,
  ~0u,
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::Ticket, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::Ticket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::Ticket, sector_number_),
  PROTOBUF_FIELD_OFFSET(::troika::av3::read_ticket::Ticket, ticket_data_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::troika::av3::read_ticket::ReadTicket)},
  { 11, 18, sizeof(::troika::av3::read_ticket::Ticket)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::troika::av3::read_ticket::_ReadTicket_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::troika::av3::read_ticket::_Ticket_default_instance_),
};

const char descriptor_table_protodef_troika_2fav3_2fread_5fticket_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034troika/av3/read_ticket.proto\022\026troika.a"
  "v3.read_ticket\032\031mifare/classic/auth.prot"
  "o\032\025troika/av3/date.proto\032\025troika/av3/tim"
  "e.proto\"\204\001\n\nReadTicket\022#\n\004date\030\001 \002(\0132\025.t"
  "roika.av3.date.Date\022#\n\004time\030\002 \002(\0132\025.troi"
  "ka.av3.time.Time\022,\n\007sectors\030\003 \003(\0132\033.mifa"
  "re.classic.auth.SamKey\"4\n\006Ticket\022\025\n\rsect"
  "or_number\030\001 \002(\r\022\023\n\013ticket_data\030\002 \002(\014"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_troika_2fav3_2fread_5fticket_2eproto_deps[3] = {
  &::descriptor_table_mifare_2fclassic_2fauth_2eproto,
  &::descriptor_table_troika_2fav3_2fdate_2eproto,
  &::descriptor_table_troika_2fav3_2ftime_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_troika_2fav3_2fread_5fticket_2eproto_sccs[2] = {
  &scc_info_ReadTicket_troika_2fav3_2fread_5fticket_2eproto.base,
  &scc_info_Ticket_troika_2fav3_2fread_5fticket_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_troika_2fav3_2fread_5fticket_2eproto_once;
static bool descriptor_table_troika_2fav3_2fread_5fticket_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_troika_2fav3_2fread_5fticket_2eproto = {
  &descriptor_table_troika_2fav3_2fread_5fticket_2eproto_initialized, descriptor_table_protodef_troika_2fav3_2fread_5fticket_2eproto, "troika/av3/read_ticket.proto", 316,
  &descriptor_table_troika_2fav3_2fread_5fticket_2eproto_once, descriptor_table_troika_2fav3_2fread_5fticket_2eproto_sccs, descriptor_table_troika_2fav3_2fread_5fticket_2eproto_deps, 2, 3,
  schemas, file_default_instances, TableStruct_troika_2fav3_2fread_5fticket_2eproto::offsets,
  file_level_metadata_troika_2fav3_2fread_5fticket_2eproto, 2, file_level_enum_descriptors_troika_2fav3_2fread_5fticket_2eproto, file_level_service_descriptors_troika_2fav3_2fread_5fticket_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_troika_2fav3_2fread_5fticket_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_troika_2fav3_2fread_5fticket_2eproto), true);
namespace troika {
namespace av3 {
namespace read_ticket {

// ===================================================================

void ReadTicket::InitAsDefaultInstance() {
  ::troika::av3::read_ticket::_ReadTicket_default_instance_._instance.get_mutable()->date_ = const_cast< ::troika::av3::date::Date*>(
      ::troika::av3::date::Date::internal_default_instance());
  ::troika::av3::read_ticket::_ReadTicket_default_instance_._instance.get_mutable()->time_ = const_cast< ::troika::av3::time::Time*>(
      ::troika::av3::time::Time::internal_default_instance());
}
class ReadTicket::_Internal {
 public:
  using HasBits = decltype(std::declval<ReadTicket>()._has_bits_);
  static const ::troika::av3::date::Date& date(const ReadTicket* msg);
  static void set_has_date(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::troika::av3::time::Time& time(const ReadTicket* msg);
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::troika::av3::date::Date&
ReadTicket::_Internal::date(const ReadTicket* msg) {
  return *msg->date_;
}
const ::troika::av3::time::Time&
ReadTicket::_Internal::time(const ReadTicket* msg) {
  return *msg->time_;
}
void ReadTicket::clear_date() {
  if (date_ != nullptr) date_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void ReadTicket::clear_time() {
  if (time_ != nullptr) time_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void ReadTicket::clear_sectors() {
  sectors_.Clear();
}
ReadTicket::ReadTicket()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:troika.av3.read_ticket.ReadTicket)
}
ReadTicket::ReadTicket(const ReadTicket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      sectors_(from.sectors_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_date()) {
    date_ = new ::troika::av3::date::Date(*from.date_);
  } else {
    date_ = nullptr;
  }
  if (from._internal_has_time()) {
    time_ = new ::troika::av3::time::Time(*from.time_);
  } else {
    time_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:troika.av3.read_ticket.ReadTicket)
}

void ReadTicket::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ReadTicket_troika_2fav3_2fread_5fticket_2eproto.base);
  ::memset(&date_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&date_)) + sizeof(time_));
}

ReadTicket::~ReadTicket() {
  // @@protoc_insertion_point(destructor:troika.av3.read_ticket.ReadTicket)
  SharedDtor();
}

void ReadTicket::SharedDtor() {
  if (this != internal_default_instance()) delete date_;
  if (this != internal_default_instance()) delete time_;
}

void ReadTicket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ReadTicket& ReadTicket::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ReadTicket_troika_2fav3_2fread_5fticket_2eproto.base);
  return *internal_default_instance();
}


void ReadTicket::Clear() {
// @@protoc_insertion_point(message_clear_start:troika.av3.read_ticket.ReadTicket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sectors_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(date_ != nullptr);
      date_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(time_ != nullptr);
      time_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ReadTicket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .troika.av3.date.Date date = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_date(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .troika.av3.time.Time time = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_time(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .mifare.classic.auth.SamKey sectors = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sectors(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* ReadTicket::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:troika.av3.read_ticket.ReadTicket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .troika.av3.date.Date date = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::date(this), target, stream);
  }

  // required .troika.av3.time.Time time = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::time(this), target, stream);
  }

  // repeated .mifare.classic.auth.SamKey sectors = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_sectors_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_sectors(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:troika.av3.read_ticket.ReadTicket)
  return target;
}

size_t ReadTicket::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:troika.av3.read_ticket.ReadTicket)
  size_t total_size = 0;

  if (_internal_has_date()) {
    // required .troika.av3.date.Date date = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *date_);
  }

  if (_internal_has_time()) {
    // required .troika.av3.time.Time time = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);
  }

  return total_size;
}
size_t ReadTicket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:troika.av3.read_ticket.ReadTicket)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .troika.av3.date.Date date = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *date_);

    // required .troika.av3.time.Time time = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .mifare.classic.auth.SamKey sectors = 3;
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

void ReadTicket::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:troika.av3.read_ticket.ReadTicket)
  GOOGLE_DCHECK_NE(&from, this);
  const ReadTicket* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ReadTicket>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:troika.av3.read_ticket.ReadTicket)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:troika.av3.read_ticket.ReadTicket)
    MergeFrom(*source);
  }
}

void ReadTicket::MergeFrom(const ReadTicket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:troika.av3.read_ticket.ReadTicket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  sectors_.MergeFrom(from.sectors_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_date()->::troika::av3::date::Date::MergeFrom(from._internal_date());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_time()->::troika::av3::time::Time::MergeFrom(from._internal_time());
    }
  }
}

void ReadTicket::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:troika.av3.read_ticket.ReadTicket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReadTicket::CopyFrom(const ReadTicket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:troika.av3.read_ticket.ReadTicket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReadTicket::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(sectors_)) return false;
  if (_internal_has_date()) {
    if (!date_->IsInitialized()) return false;
  }
  if (_internal_has_time()) {
    if (!time_->IsInitialized()) return false;
  }
  return true;
}

void ReadTicket::InternalSwap(ReadTicket* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  sectors_.InternalSwap(&other->sectors_);
  swap(date_, other->date_);
  swap(time_, other->time_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ReadTicket::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Ticket::InitAsDefaultInstance() {
}
class Ticket::_Internal {
 public:
  using HasBits = decltype(std::declval<Ticket>()._has_bits_);
  static void set_has_sector_number(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_ticket_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Ticket::Ticket()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:troika.av3.read_ticket.Ticket)
}
Ticket::Ticket(const Ticket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ticket_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_ticket_data()) {
    ticket_data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.ticket_data_);
  }
  sector_number_ = from.sector_number_;
  // @@protoc_insertion_point(copy_constructor:troika.av3.read_ticket.Ticket)
}

void Ticket::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Ticket_troika_2fav3_2fread_5fticket_2eproto.base);
  ticket_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sector_number_ = 0u;
}

Ticket::~Ticket() {
  // @@protoc_insertion_point(destructor:troika.av3.read_ticket.Ticket)
  SharedDtor();
}

void Ticket::SharedDtor() {
  ticket_data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Ticket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Ticket& Ticket::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Ticket_troika_2fav3_2fread_5fticket_2eproto.base);
  return *internal_default_instance();
}


void Ticket::Clear() {
// @@protoc_insertion_point(message_clear_start:troika.av3.read_ticket.Ticket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ticket_data_.ClearNonDefaultToEmptyNoArena();
  }
  sector_number_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Ticket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 sector_number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_sector_number(&has_bits);
          sector_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required bytes ticket_data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_ticket_data();
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

::PROTOBUF_NAMESPACE_ID::uint8* Ticket::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:troika.av3.read_ticket.Ticket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 sector_number = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_sector_number(), target);
  }

  // required bytes ticket_data = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_ticket_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:troika.av3.read_ticket.Ticket)
  return target;
}

size_t Ticket::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:troika.av3.read_ticket.Ticket)
  size_t total_size = 0;

  if (_internal_has_ticket_data()) {
    // required bytes ticket_data = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_ticket_data());
  }

  if (_internal_has_sector_number()) {
    // required uint32 sector_number = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_sector_number());
  }

  return total_size;
}
size_t Ticket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:troika.av3.read_ticket.Ticket)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required bytes ticket_data = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_ticket_data());

    // required uint32 sector_number = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_sector_number());

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

void Ticket::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:troika.av3.read_ticket.Ticket)
  GOOGLE_DCHECK_NE(&from, this);
  const Ticket* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Ticket>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:troika.av3.read_ticket.Ticket)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:troika.av3.read_ticket.Ticket)
    MergeFrom(*source);
  }
}

void Ticket::MergeFrom(const Ticket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:troika.av3.read_ticket.Ticket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      ticket_data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.ticket_data_);
    }
    if (cached_has_bits & 0x00000002u) {
      sector_number_ = from.sector_number_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Ticket::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:troika.av3.read_ticket.Ticket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Ticket::CopyFrom(const Ticket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:troika.av3.read_ticket.Ticket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ticket::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void Ticket::InternalSwap(Ticket* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ticket_data_.Swap(&other->ticket_data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(sector_number_, other->sector_number_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Ticket::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace read_ticket
}  // namespace av3
}  // namespace troika
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::troika::av3::read_ticket::ReadTicket* Arena::CreateMaybeMessage< ::troika::av3::read_ticket::ReadTicket >(Arena* arena) {
  return Arena::CreateInternal< ::troika::av3::read_ticket::ReadTicket >(arena);
}
template<> PROTOBUF_NOINLINE ::troika::av3::read_ticket::Ticket* Arena::CreateMaybeMessage< ::troika::av3::read_ticket::Ticket >(Arena* arena) {
  return Arena::CreateInternal< ::troika::av3::read_ticket::Ticket >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>