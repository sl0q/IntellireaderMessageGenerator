// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gui/draw_bitmap.proto

#include "gui/draw_bitmap.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_gui_2fdraw_5fbitmap_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Area_gui_2fdraw_5fbitmap_2eproto;
namespace gui {
namespace draw_bitmap {
class DrawBitmapDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DrawBitmap> _instance;
} _DrawBitmap_default_instance_;
class AreaDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Area> _instance;
} _Area_default_instance_;
}  // namespace draw_bitmap
}  // namespace gui
static void InitDefaultsscc_info_Area_gui_2fdraw_5fbitmap_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gui::draw_bitmap::_Area_default_instance_;
    new (ptr) ::gui::draw_bitmap::Area();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gui::draw_bitmap::Area::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Area_gui_2fdraw_5fbitmap_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Area_gui_2fdraw_5fbitmap_2eproto}, {}};

static void InitDefaultsscc_info_DrawBitmap_gui_2fdraw_5fbitmap_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gui::draw_bitmap::_DrawBitmap_default_instance_;
    new (ptr) ::gui::draw_bitmap::DrawBitmap();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gui::draw_bitmap::DrawBitmap::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DrawBitmap_gui_2fdraw_5fbitmap_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_DrawBitmap_gui_2fdraw_5fbitmap_2eproto}, {
      &scc_info_Area_gui_2fdraw_5fbitmap_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_gui_2fdraw_5fbitmap_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_gui_2fdraw_5fbitmap_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_gui_2fdraw_5fbitmap_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_gui_2fdraw_5fbitmap_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::DrawBitmap, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::DrawBitmap, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::DrawBitmap, data_),
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::DrawBitmap, area_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::Area, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::Area, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::Area, x_),
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::Area, y_),
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::Area, width_),
  PROTOBUF_FIELD_OFFSET(::gui::draw_bitmap::Area, height_),
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gui::draw_bitmap::DrawBitmap)},
  { 9, 18, sizeof(::gui::draw_bitmap::Area)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gui::draw_bitmap::_DrawBitmap_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gui::draw_bitmap::_Area_default_instance_),
};

const char descriptor_table_protodef_gui_2fdraw_5fbitmap_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025gui/draw_bitmap.proto\022\017gui.draw_bitmap"
  "\"\?\n\nDrawBitmap\022\014\n\004data\030\001 \002(\014\022#\n\004area\030\002 \001"
  "(\0132\025.gui.draw_bitmap.Area\";\n\004Area\022\t\n\001x\030\001"
  " \002(\r\022\t\n\001y\030\002 \002(\r\022\r\n\005width\030\003 \002(\r\022\016\n\006height"
  "\030\004 \002(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_gui_2fdraw_5fbitmap_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_gui_2fdraw_5fbitmap_2eproto_sccs[2] = {
  &scc_info_Area_gui_2fdraw_5fbitmap_2eproto.base,
  &scc_info_DrawBitmap_gui_2fdraw_5fbitmap_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_gui_2fdraw_5fbitmap_2eproto_once;
static bool descriptor_table_gui_2fdraw_5fbitmap_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gui_2fdraw_5fbitmap_2eproto = {
  &descriptor_table_gui_2fdraw_5fbitmap_2eproto_initialized, descriptor_table_protodef_gui_2fdraw_5fbitmap_2eproto, "gui/draw_bitmap.proto", 166,
  &descriptor_table_gui_2fdraw_5fbitmap_2eproto_once, descriptor_table_gui_2fdraw_5fbitmap_2eproto_sccs, descriptor_table_gui_2fdraw_5fbitmap_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_gui_2fdraw_5fbitmap_2eproto::offsets,
  file_level_metadata_gui_2fdraw_5fbitmap_2eproto, 2, file_level_enum_descriptors_gui_2fdraw_5fbitmap_2eproto, file_level_service_descriptors_gui_2fdraw_5fbitmap_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_gui_2fdraw_5fbitmap_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_gui_2fdraw_5fbitmap_2eproto), true);
namespace gui {
namespace draw_bitmap {

// ===================================================================

void DrawBitmap::InitAsDefaultInstance() {
  ::gui::draw_bitmap::_DrawBitmap_default_instance_._instance.get_mutable()->area_ = const_cast< ::gui::draw_bitmap::Area*>(
      ::gui::draw_bitmap::Area::internal_default_instance());
}
class DrawBitmap::_Internal {
 public:
  using HasBits = decltype(std::declval<DrawBitmap>()._has_bits_);
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gui::draw_bitmap::Area& area(const DrawBitmap* msg);
  static void set_has_area(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::gui::draw_bitmap::Area&
DrawBitmap::_Internal::area(const DrawBitmap* msg) {
  return *msg->area_;
}
DrawBitmap::DrawBitmap()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gui.draw_bitmap.DrawBitmap)
}
DrawBitmap::DrawBitmap(const DrawBitmap& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_data()) {
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from._internal_has_area()) {
    area_ = new ::gui::draw_bitmap::Area(*from.area_);
  } else {
    area_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gui.draw_bitmap.DrawBitmap)
}

void DrawBitmap::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DrawBitmap_gui_2fdraw_5fbitmap_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  area_ = nullptr;
}

DrawBitmap::~DrawBitmap() {
  // @@protoc_insertion_point(destructor:gui.draw_bitmap.DrawBitmap)
  SharedDtor();
}

void DrawBitmap::SharedDtor() {
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete area_;
}

void DrawBitmap::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DrawBitmap& DrawBitmap::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DrawBitmap_gui_2fdraw_5fbitmap_2eproto.base);
  return *internal_default_instance();
}


void DrawBitmap::Clear() {
// @@protoc_insertion_point(message_clear_start:gui.draw_bitmap.DrawBitmap)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      data_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(area_ != nullptr);
      area_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* DrawBitmap::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // optional .gui.draw_bitmap.Area area = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_area(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* DrawBitmap::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gui.draw_bitmap.DrawBitmap)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bytes data = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_data(), target);
  }

  // optional .gui.draw_bitmap.Area area = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::area(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gui.draw_bitmap.DrawBitmap)
  return target;
}

size_t DrawBitmap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gui.draw_bitmap.DrawBitmap)
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

  // optional .gui.draw_bitmap.Area area = 2;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000002u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *area_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DrawBitmap::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gui.draw_bitmap.DrawBitmap)
  GOOGLE_DCHECK_NE(&from, this);
  const DrawBitmap* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DrawBitmap>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gui.draw_bitmap.DrawBitmap)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gui.draw_bitmap.DrawBitmap)
    MergeFrom(*source);
  }
}

void DrawBitmap::MergeFrom(const DrawBitmap& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gui.draw_bitmap.DrawBitmap)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_area()->::gui::draw_bitmap::Area::MergeFrom(from._internal_area());
    }
  }
}

void DrawBitmap::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gui.draw_bitmap.DrawBitmap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DrawBitmap::CopyFrom(const DrawBitmap& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gui.draw_bitmap.DrawBitmap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DrawBitmap::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (_internal_has_area()) {
    if (!area_->IsInitialized()) return false;
  }
  return true;
}

void DrawBitmap::InternalSwap(DrawBitmap* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(area_, other->area_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DrawBitmap::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Area::InitAsDefaultInstance() {
}
class Area::_Internal {
 public:
  using HasBits = decltype(std::declval<Area>()._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

Area::Area()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gui.draw_bitmap.Area)
}
Area::Area(const Area& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&x_)) + sizeof(height_));
  // @@protoc_insertion_point(copy_constructor:gui.draw_bitmap.Area)
}

void Area::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&height_) -
      reinterpret_cast<char*>(&x_)) + sizeof(height_));
}

Area::~Area() {
  // @@protoc_insertion_point(destructor:gui.draw_bitmap.Area)
  SharedDtor();
}

void Area::SharedDtor() {
}

void Area::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Area& Area::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Area_gui_2fdraw_5fbitmap_2eproto.base);
  return *internal_default_instance();
}


void Area::Clear() {
// @@protoc_insertion_point(message_clear_start:gui.draw_bitmap.Area)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&height_) -
        reinterpret_cast<char*>(&x_)) + sizeof(height_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Area::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // required uint32 width = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_width(&has_bits);
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 height = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_height(&has_bits);
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Area::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gui.draw_bitmap.Area)
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

  // required uint32 width = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_width(), target);
  }

  // required uint32 height = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_height(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gui.draw_bitmap.Area)
  return target;
}

size_t Area::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gui.draw_bitmap.Area)
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

  if (_internal_has_width()) {
    // required uint32 width = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_width());
  }

  if (_internal_has_height()) {
    // required uint32 height = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_height());
  }

  return total_size;
}
size_t Area::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gui.draw_bitmap.Area)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required uint32 x = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_x());

    // required uint32 y = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_y());

    // required uint32 width = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_width());

    // required uint32 height = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_height());

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

void Area::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gui.draw_bitmap.Area)
  GOOGLE_DCHECK_NE(&from, this);
  const Area* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Area>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gui.draw_bitmap.Area)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gui.draw_bitmap.Area)
    MergeFrom(*source);
  }
}

void Area::MergeFrom(const Area& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gui.draw_bitmap.Area)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_ = from.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000008u) {
      height_ = from.height_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Area::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gui.draw_bitmap.Area)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Area::CopyFrom(const Area& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gui.draw_bitmap.Area)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Area::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void Area::InternalSwap(Area* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(width_, other->width_);
  swap(height_, other->height_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Area::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace draw_bitmap
}  // namespace gui
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gui::draw_bitmap::DrawBitmap* Arena::CreateMaybeMessage< ::gui::draw_bitmap::DrawBitmap >(Arena* arena) {
  return Arena::CreateInternal< ::gui::draw_bitmap::DrawBitmap >(arena);
}
template<> PROTOBUF_NOINLINE ::gui::draw_bitmap::Area* Arena::CreateMaybeMessage< ::gui::draw_bitmap::Area >(Arena* arena) {
  return Arena::CreateInternal< ::gui::draw_bitmap::Area >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
