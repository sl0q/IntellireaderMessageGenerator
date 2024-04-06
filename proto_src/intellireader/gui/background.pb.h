// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gui/background.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_gui_2fbackground_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_gui_2fbackground_2eproto

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
#include "gui/solidfill.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_gui_2fbackground_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_gui_2fbackground_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gui_2fbackground_2eproto;
namespace gui {
namespace background {
class Background;
class BackgroundDefaultTypeInternal;
extern BackgroundDefaultTypeInternal _Background_default_instance_;
}  // namespace background
}  // namespace gui
PROTOBUF_NAMESPACE_OPEN
template<> ::gui::background::Background* Arena::CreateMaybeMessage<::gui::background::Background>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gui {
namespace background {

// ===================================================================

class Background :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gui.background.Background) */ {
 public:
  Background();
  virtual ~Background();

  Background(const Background& from);
  Background(Background&& from) noexcept
    : Background() {
    *this = ::std::move(from);
  }

  inline Background& operator=(const Background& from) {
    CopyFrom(from);
    return *this;
  }
  inline Background& operator=(Background&& from) noexcept {
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
  static const Background& default_instance();

  enum BackgroundCase {
    kSolidFill = 1,
    kSolidFillRgb = 2,
    BACKGROUND_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Background* internal_default_instance() {
    return reinterpret_cast<const Background*>(
               &_Background_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Background& a, Background& b) {
    a.Swap(&b);
  }
  inline void Swap(Background* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Background* New() const final {
    return CreateMaybeMessage<Background>(nullptr);
  }

  Background* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Background>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Background& from);
  void MergeFrom(const Background& from);
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
  void InternalSwap(Background* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gui.background.Background";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_gui_2fbackground_2eproto);
    return ::descriptor_table_gui_2fbackground_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSolidFillFieldNumber = 1,
    kSolidFillRgbFieldNumber = 2,
  };
  // optional .gui.solidfill.SolidFill solid_fill = 1;
  bool has_solid_fill() const;
  private:
  bool _internal_has_solid_fill() const;
  public:
  void clear_solid_fill();
  ::gui::solidfill::SolidFill solid_fill() const;
  void set_solid_fill(::gui::solidfill::SolidFill value);
  private:
  ::gui::solidfill::SolidFill _internal_solid_fill() const;
  void _internal_set_solid_fill(::gui::solidfill::SolidFill value);
  public:

  // optional uint32 solid_fill_rgb = 2;
  bool has_solid_fill_rgb() const;
  private:
  bool _internal_has_solid_fill_rgb() const;
  public:
  void clear_solid_fill_rgb();
  ::PROTOBUF_NAMESPACE_ID::uint32 solid_fill_rgb() const;
  void set_solid_fill_rgb(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_solid_fill_rgb() const;
  void _internal_set_solid_fill_rgb(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  void clear_background();
  BackgroundCase background_case() const;
  // @@protoc_insertion_point(class_scope:gui.background.Background)
 private:
  class _Internal;
  void set_has_solid_fill();
  void set_has_solid_fill_rgb();

  inline bool has_background() const;
  inline void clear_has_background();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  union BackgroundUnion {
    BackgroundUnion() {}
    int solid_fill_;
    ::PROTOBUF_NAMESPACE_ID::uint32 solid_fill_rgb_;
  } background_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_gui_2fbackground_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Background

// optional .gui.solidfill.SolidFill solid_fill = 1;
inline bool Background::_internal_has_solid_fill() const {
  return background_case() == kSolidFill;
}
inline bool Background::has_solid_fill() const {
  return _internal_has_solid_fill();
}
inline void Background::set_has_solid_fill() {
  _oneof_case_[0] = kSolidFill;
}
inline void Background::clear_solid_fill() {
  if (_internal_has_solid_fill()) {
    background_.solid_fill_ = 0;
    clear_has_background();
  }
}
inline ::gui::solidfill::SolidFill Background::_internal_solid_fill() const {
  if (_internal_has_solid_fill()) {
    return static_cast< ::gui::solidfill::SolidFill >(background_.solid_fill_);
  }
  return static_cast< ::gui::solidfill::SolidFill >(0);
}
inline ::gui::solidfill::SolidFill Background::solid_fill() const {
  // @@protoc_insertion_point(field_get:gui.background.Background.solid_fill)
  return _internal_solid_fill();
}
inline void Background::_internal_set_solid_fill(::gui::solidfill::SolidFill value) {
  assert(::gui::solidfill::SolidFill_IsValid(value));
  if (!_internal_has_solid_fill()) {
    clear_background();
    set_has_solid_fill();
  }
  background_.solid_fill_ = value;
}
inline void Background::set_solid_fill(::gui::solidfill::SolidFill value) {
  // @@protoc_insertion_point(field_set:gui.background.Background.solid_fill)
  _internal_set_solid_fill(value);
}

// optional uint32 solid_fill_rgb = 2;
inline bool Background::_internal_has_solid_fill_rgb() const {
  return background_case() == kSolidFillRgb;
}
inline bool Background::has_solid_fill_rgb() const {
  return _internal_has_solid_fill_rgb();
}
inline void Background::set_has_solid_fill_rgb() {
  _oneof_case_[0] = kSolidFillRgb;
}
inline void Background::clear_solid_fill_rgb() {
  if (_internal_has_solid_fill_rgb()) {
    background_.solid_fill_rgb_ = 0u;
    clear_has_background();
  }
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Background::_internal_solid_fill_rgb() const {
  if (_internal_has_solid_fill_rgb()) {
    return background_.solid_fill_rgb_;
  }
  return 0u;
}
inline void Background::_internal_set_solid_fill_rgb(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  if (!_internal_has_solid_fill_rgb()) {
    clear_background();
    set_has_solid_fill_rgb();
  }
  background_.solid_fill_rgb_ = value;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Background::solid_fill_rgb() const {
  // @@protoc_insertion_point(field_get:gui.background.Background.solid_fill_rgb)
  return _internal_solid_fill_rgb();
}
inline void Background::set_solid_fill_rgb(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_solid_fill_rgb(value);
  // @@protoc_insertion_point(field_set:gui.background.Background.solid_fill_rgb)
}

inline bool Background::has_background() const {
  return background_case() != BACKGROUND_NOT_SET;
}
inline void Background::clear_has_background() {
  _oneof_case_[0] = BACKGROUND_NOT_SET;
}
inline Background::BackgroundCase Background::background_case() const {
  return Background::BackgroundCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace background
}  // namespace gui

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_gui_2fbackground_2eproto
