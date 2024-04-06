// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: misc/ethernet.proto

#include "misc/ethernet.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_misc_2fethernet_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PortStats_misc_2fethernet_2eproto;
namespace misc {
namespace ethernet {
class StatisticDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Statistic> _instance;
} _Statistic_default_instance_;
class PortStatsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PortStats> _instance;
} _PortStats_default_instance_;
}  // namespace ethernet
}  // namespace misc
static void InitDefaultsscc_info_PortStats_misc_2fethernet_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::misc::ethernet::_PortStats_default_instance_;
    new (ptr) ::misc::ethernet::PortStats();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::misc::ethernet::PortStats::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PortStats_misc_2fethernet_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PortStats_misc_2fethernet_2eproto}, {}};

static void InitDefaultsscc_info_Statistic_misc_2fethernet_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::misc::ethernet::_Statistic_default_instance_;
    new (ptr) ::misc::ethernet::Statistic();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::misc::ethernet::Statistic::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Statistic_misc_2fethernet_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Statistic_misc_2fethernet_2eproto}, {
      &scc_info_PortStats_misc_2fethernet_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_misc_2fethernet_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_misc_2fethernet_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_misc_2fethernet_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_misc_2fethernet_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::Statistic, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::Statistic, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::Statistic, port1_),
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::Statistic, port2_),
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::Statistic, port3_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::PortStats, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::PortStats, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::PortStats, tx_packets_),
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::PortStats, rx_packets_),
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::PortStats, rx_errors_),
  PROTOBUF_FIELD_OFFSET(::misc::ethernet::PortStats, txrx_dropped_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::misc::ethernet::Statistic)},
  { 11, 20, sizeof(::misc::ethernet::PortStats)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::misc::ethernet::_Statistic_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::misc::ethernet::_PortStats_default_instance_),
};

const char descriptor_table_protodef_misc_2fethernet_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023misc/ethernet.proto\022\rmisc.ethernet\"\206\001\n"
  "\tStatistic\022\'\n\005port1\030\001 \001(\0132\030.misc.etherne"
  "t.PortStats\022\'\n\005port2\030\002 \001(\0132\030.misc.ethern"
  "et.PortStats\022\'\n\005port3\030\003 \001(\0132\030.misc.ether"
  "net.PortStats\"\\\n\tPortStats\022\022\n\ntx_packets"
  "\030\001 \002(\r\022\022\n\nrx_packets\030\002 \002(\r\022\021\n\trx_errors\030"
  "\003 \002(\r\022\024\n\014txrx_dropped\030\004 \002(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_misc_2fethernet_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_misc_2fethernet_2eproto_sccs[2] = {
  &scc_info_PortStats_misc_2fethernet_2eproto.base,
  &scc_info_Statistic_misc_2fethernet_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_misc_2fethernet_2eproto_once;
static bool descriptor_table_misc_2fethernet_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_misc_2fethernet_2eproto = {
  &descriptor_table_misc_2fethernet_2eproto_initialized, descriptor_table_protodef_misc_2fethernet_2eproto, "misc/ethernet.proto", 267,
  &descriptor_table_misc_2fethernet_2eproto_once, descriptor_table_misc_2fethernet_2eproto_sccs, descriptor_table_misc_2fethernet_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_misc_2fethernet_2eproto::offsets,
  file_level_metadata_misc_2fethernet_2eproto, 2, file_level_enum_descriptors_misc_2fethernet_2eproto, file_level_service_descriptors_misc_2fethernet_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_misc_2fethernet_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_misc_2fethernet_2eproto), true);
namespace misc {
namespace ethernet {

// ===================================================================

void Statistic::InitAsDefaultInstance() {
  ::misc::ethernet::_Statistic_default_instance_._instance.get_mutable()->port1_ = const_cast< ::misc::ethernet::PortStats*>(
      ::misc::ethernet::PortStats::internal_default_instance());
  ::misc::ethernet::_Statistic_default_instance_._instance.get_mutable()->port2_ = const_cast< ::misc::ethernet::PortStats*>(
      ::misc::ethernet::PortStats::internal_default_instance());
  ::misc::ethernet::_Statistic_default_instance_._instance.get_mutable()->port3_ = const_cast< ::misc::ethernet::PortStats*>(
      ::misc::ethernet::PortStats::internal_default_instance());
}
class Statistic::_Internal {
 public:
  using HasBits = decltype(std::declval<Statistic>()._has_bits_);
  static const ::misc::ethernet::PortStats& port1(const Statistic* msg);
  static void set_has_port1(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::misc::ethernet::PortStats& port2(const Statistic* msg);
  static void set_has_port2(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::misc::ethernet::PortStats& port3(const Statistic* msg);
  static void set_has_port3(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::misc::ethernet::PortStats&
Statistic::_Internal::port1(const Statistic* msg) {
  return *msg->port1_;
}
const ::misc::ethernet::PortStats&
Statistic::_Internal::port2(const Statistic* msg) {
  return *msg->port2_;
}
const ::misc::ethernet::PortStats&
Statistic::_Internal::port3(const Statistic* msg) {
  return *msg->port3_;
}
Statistic::Statistic()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:misc.ethernet.Statistic)
}
Statistic::Statistic(const Statistic& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_port1()) {
    port1_ = new ::misc::ethernet::PortStats(*from.port1_);
  } else {
    port1_ = nullptr;
  }
  if (from._internal_has_port2()) {
    port2_ = new ::misc::ethernet::PortStats(*from.port2_);
  } else {
    port2_ = nullptr;
  }
  if (from._internal_has_port3()) {
    port3_ = new ::misc::ethernet::PortStats(*from.port3_);
  } else {
    port3_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:misc.ethernet.Statistic)
}

void Statistic::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Statistic_misc_2fethernet_2eproto.base);
  ::memset(&port1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&port3_) -
      reinterpret_cast<char*>(&port1_)) + sizeof(port3_));
}

Statistic::~Statistic() {
  // @@protoc_insertion_point(destructor:misc.ethernet.Statistic)
  SharedDtor();
}

void Statistic::SharedDtor() {
  if (this != internal_default_instance()) delete port1_;
  if (this != internal_default_instance()) delete port2_;
  if (this != internal_default_instance()) delete port3_;
}

void Statistic::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Statistic& Statistic::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Statistic_misc_2fethernet_2eproto.base);
  return *internal_default_instance();
}


void Statistic::Clear() {
// @@protoc_insertion_point(message_clear_start:misc.ethernet.Statistic)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(port1_ != nullptr);
      port1_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(port2_ != nullptr);
      port2_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(port3_ != nullptr);
      port3_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Statistic::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .misc.ethernet.PortStats port1 = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_port1(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.ethernet.PortStats port2 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_port2(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .misc.ethernet.PortStats port3 = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_port3(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Statistic::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:misc.ethernet.Statistic)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .misc.ethernet.PortStats port1 = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::port1(this), target, stream);
  }

  // optional .misc.ethernet.PortStats port2 = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::port2(this), target, stream);
  }

  // optional .misc.ethernet.PortStats port3 = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::port3(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:misc.ethernet.Statistic)
  return target;
}

size_t Statistic::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:misc.ethernet.Statistic)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .misc.ethernet.PortStats port1 = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *port1_);
    }

    // optional .misc.ethernet.PortStats port2 = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *port2_);
    }

    // optional .misc.ethernet.PortStats port3 = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *port3_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Statistic::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:misc.ethernet.Statistic)
  GOOGLE_DCHECK_NE(&from, this);
  const Statistic* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Statistic>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:misc.ethernet.Statistic)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:misc.ethernet.Statistic)
    MergeFrom(*source);
  }
}

void Statistic::MergeFrom(const Statistic& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:misc.ethernet.Statistic)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_port1()->::misc::ethernet::PortStats::MergeFrom(from._internal_port1());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_port2()->::misc::ethernet::PortStats::MergeFrom(from._internal_port2());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_port3()->::misc::ethernet::PortStats::MergeFrom(from._internal_port3());
    }
  }
}

void Statistic::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:misc.ethernet.Statistic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Statistic::CopyFrom(const Statistic& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:misc.ethernet.Statistic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Statistic::IsInitialized() const {
  if (_internal_has_port1()) {
    if (!port1_->IsInitialized()) return false;
  }
  if (_internal_has_port2()) {
    if (!port2_->IsInitialized()) return false;
  }
  if (_internal_has_port3()) {
    if (!port3_->IsInitialized()) return false;
  }
  return true;
}

void Statistic::InternalSwap(Statistic* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(port1_, other->port1_);
  swap(port2_, other->port2_);
  swap(port3_, other->port3_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Statistic::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void PortStats::InitAsDefaultInstance() {
}
class PortStats::_Internal {
 public:
  using HasBits = decltype(std::declval<PortStats>()._has_bits_);
  static void set_has_tx_packets(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_rx_packets(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_rx_errors(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_txrx_dropped(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

PortStats::PortStats()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:misc.ethernet.PortStats)
}
PortStats::PortStats(const PortStats& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&tx_packets_, &from.tx_packets_,
    static_cast<size_t>(reinterpret_cast<char*>(&txrx_dropped_) -
    reinterpret_cast<char*>(&tx_packets_)) + sizeof(txrx_dropped_));
  // @@protoc_insertion_point(copy_constructor:misc.ethernet.PortStats)
}

void PortStats::SharedCtor() {
  ::memset(&tx_packets_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&txrx_dropped_) -
      reinterpret_cast<char*>(&tx_packets_)) + sizeof(txrx_dropped_));
}

PortStats::~PortStats() {
  // @@protoc_insertion_point(destructor:misc.ethernet.PortStats)
  SharedDtor();
}

void PortStats::SharedDtor() {
}

void PortStats::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PortStats& PortStats::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PortStats_misc_2fethernet_2eproto.base);
  return *internal_default_instance();
}


void PortStats::Clear() {
// @@protoc_insertion_point(message_clear_start:misc.ethernet.PortStats)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&tx_packets_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&txrx_dropped_) -
        reinterpret_cast<char*>(&tx_packets_)) + sizeof(txrx_dropped_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PortStats::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 tx_packets = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_tx_packets(&has_bits);
          tx_packets_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 rx_packets = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_rx_packets(&has_bits);
          rx_packets_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 rx_errors = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_rx_errors(&has_bits);
          rx_errors_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 txrx_dropped = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_txrx_dropped(&has_bits);
          txrx_dropped_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PortStats::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:misc.ethernet.PortStats)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 tx_packets = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_tx_packets(), target);
  }

  // required uint32 rx_packets = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_rx_packets(), target);
  }

  // required uint32 rx_errors = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_rx_errors(), target);
  }

  // required uint32 txrx_dropped = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_txrx_dropped(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:misc.ethernet.PortStats)
  return target;
}

size_t PortStats::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:misc.ethernet.PortStats)
  size_t total_size = 0;

  if (_internal_has_tx_packets()) {
    // required uint32 tx_packets = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tx_packets());
  }

  if (_internal_has_rx_packets()) {
    // required uint32 rx_packets = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_rx_packets());
  }

  if (_internal_has_rx_errors()) {
    // required uint32 rx_errors = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_rx_errors());
  }

  if (_internal_has_txrx_dropped()) {
    // required uint32 txrx_dropped = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_txrx_dropped());
  }

  return total_size;
}
size_t PortStats::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:misc.ethernet.PortStats)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required uint32 tx_packets = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tx_packets());

    // required uint32 rx_packets = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_rx_packets());

    // required uint32 rx_errors = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_rx_errors());

    // required uint32 txrx_dropped = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_txrx_dropped());

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

void PortStats::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:misc.ethernet.PortStats)
  GOOGLE_DCHECK_NE(&from, this);
  const PortStats* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PortStats>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:misc.ethernet.PortStats)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:misc.ethernet.PortStats)
    MergeFrom(*source);
  }
}

void PortStats::MergeFrom(const PortStats& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:misc.ethernet.PortStats)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      tx_packets_ = from.tx_packets_;
    }
    if (cached_has_bits & 0x00000002u) {
      rx_packets_ = from.rx_packets_;
    }
    if (cached_has_bits & 0x00000004u) {
      rx_errors_ = from.rx_errors_;
    }
    if (cached_has_bits & 0x00000008u) {
      txrx_dropped_ = from.txrx_dropped_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PortStats::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:misc.ethernet.PortStats)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PortStats::CopyFrom(const PortStats& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:misc.ethernet.PortStats)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PortStats::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void PortStats::InternalSwap(PortStats* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(tx_packets_, other->tx_packets_);
  swap(rx_packets_, other->rx_packets_);
  swap(rx_errors_, other->rx_errors_);
  swap(txrx_dropped_, other->txrx_dropped_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PortStats::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ethernet
}  // namespace misc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::misc::ethernet::Statistic* Arena::CreateMaybeMessage< ::misc::ethernet::Statistic >(Arena* arena) {
  return Arena::CreateInternal< ::misc::ethernet::Statistic >(arena);
}
template<> PROTOBUF_NOINLINE ::misc::ethernet::PortStats* Arena::CreateMaybeMessage< ::misc::ethernet::PortStats >(Arena* arena) {
  return Arena::CreateInternal< ::misc::ethernet::PortStats >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
