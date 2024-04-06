// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gui/input_dialog.proto

#include "gui/input_dialog.pb.h"

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
namespace gui {
namespace input_dialog {
class InputDialogDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<InputDialog> _instance;
} _InputDialog_default_instance_;
class EnteredTextDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EnteredText> _instance;
} _EnteredText_default_instance_;
}  // namespace input_dialog
}  // namespace gui
static void InitDefaultsscc_info_EnteredText_gui_2finput_5fdialog_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gui::input_dialog::_EnteredText_default_instance_;
    new (ptr) ::gui::input_dialog::EnteredText();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gui::input_dialog::EnteredText::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EnteredText_gui_2finput_5fdialog_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_EnteredText_gui_2finput_5fdialog_2eproto}, {}};

static void InitDefaultsscc_info_InputDialog_gui_2finput_5fdialog_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gui::input_dialog::_InputDialog_default_instance_;
    new (ptr) ::gui::input_dialog::InputDialog();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gui::input_dialog::InputDialog::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InputDialog_gui_2finput_5fdialog_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_InputDialog_gui_2finput_5fdialog_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_gui_2finput_5fdialog_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_gui_2finput_5fdialog_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_gui_2finput_5fdialog_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_gui_2finput_5fdialog_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, caption_),
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, placeholder_),
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, timeout_),
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, min_text_length_),
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, max_text_length_),
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::InputDialog, layouts_),
  0,
  1,
  2,
  3,
  4,
  ~0u,
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::EnteredText, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::EnteredText, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gui::input_dialog::EnteredText, text_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::gui::input_dialog::InputDialog)},
  { 17, 23, sizeof(::gui::input_dialog::EnteredText)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gui::input_dialog::_InputDialog_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gui::input_dialog::_EnteredText_default_instance_),
};

const char descriptor_table_protodef_gui_2finput_5fdialog_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026gui/input_dialog.proto\022\020gui.input_dial"
  "og\"\264\001\n\013InputDialog\022\017\n\007caption\030\001 \002(\t\022\023\n\013p"
  "laceholder\030\002 \001(\t\022\017\n\007timeout\030\003 \001(\r\022\032\n\017min"
  "_text_length\030\004 \001(\r:\0010\022\035\n\017max_text_length"
  "\030\005 \001(\r:\0041024\0223\n\007layouts\030\006 \003(\0162\036.gui.inpu"
  "t_dialog.KeypadLayoutB\002\020\001\"\033\n\013EnteredText"
  "\022\014\n\004text\030\001 \002(\t*\201\001\n\014KeypadLayout\022\022\n\016DECIM"
  "AL_DIGITS\020\000\022\021\n\rSPECIAL_CHARS\020\001\022\021\n\rENGLIS"
  "H_LOWER\020\002\022\021\n\rENGLISH_UPPER\020\003\022\021\n\rRUSSIAN_"
  "LOWER\020\004\022\021\n\rRUSSIAN_UPPER\020\005"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_gui_2finput_5fdialog_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_gui_2finput_5fdialog_2eproto_sccs[2] = {
  &scc_info_EnteredText_gui_2finput_5fdialog_2eproto.base,
  &scc_info_InputDialog_gui_2finput_5fdialog_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_gui_2finput_5fdialog_2eproto_once;
static bool descriptor_table_gui_2finput_5fdialog_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gui_2finput_5fdialog_2eproto = {
  &descriptor_table_gui_2finput_5fdialog_2eproto_initialized, descriptor_table_protodef_gui_2finput_5fdialog_2eproto, "gui/input_dialog.proto", 386,
  &descriptor_table_gui_2finput_5fdialog_2eproto_once, descriptor_table_gui_2finput_5fdialog_2eproto_sccs, descriptor_table_gui_2finput_5fdialog_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_gui_2finput_5fdialog_2eproto::offsets,
  file_level_metadata_gui_2finput_5fdialog_2eproto, 2, file_level_enum_descriptors_gui_2finput_5fdialog_2eproto, file_level_service_descriptors_gui_2finput_5fdialog_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_gui_2finput_5fdialog_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_gui_2finput_5fdialog_2eproto), true);
namespace gui {
namespace input_dialog {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* KeypadLayout_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_gui_2finput_5fdialog_2eproto);
  return file_level_enum_descriptors_gui_2finput_5fdialog_2eproto[0];
}
bool KeypadLayout_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void InputDialog::InitAsDefaultInstance() {
}
class InputDialog::_Internal {
 public:
  using HasBits = decltype(std::declval<InputDialog>()._has_bits_);
  static void set_has_caption(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_placeholder(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timeout(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_min_text_length(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_max_text_length(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

InputDialog::InputDialog()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gui.input_dialog.InputDialog)
}
InputDialog::InputDialog(const InputDialog& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      layouts_(from.layouts_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  caption_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_caption()) {
    caption_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.caption_);
  }
  placeholder_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_placeholder()) {
    placeholder_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.placeholder_);
  }
  ::memcpy(&timeout_, &from.timeout_,
    static_cast<size_t>(reinterpret_cast<char*>(&max_text_length_) -
    reinterpret_cast<char*>(&timeout_)) + sizeof(max_text_length_));
  // @@protoc_insertion_point(copy_constructor:gui.input_dialog.InputDialog)
}

void InputDialog::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_InputDialog_gui_2finput_5fdialog_2eproto.base);
  caption_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  placeholder_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&timeout_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&min_text_length_) -
      reinterpret_cast<char*>(&timeout_)) + sizeof(min_text_length_));
  max_text_length_ = 1024u;
}

InputDialog::~InputDialog() {
  // @@protoc_insertion_point(destructor:gui.input_dialog.InputDialog)
  SharedDtor();
}

void InputDialog::SharedDtor() {
  caption_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  placeholder_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void InputDialog::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InputDialog& InputDialog::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_InputDialog_gui_2finput_5fdialog_2eproto.base);
  return *internal_default_instance();
}


void InputDialog::Clear() {
// @@protoc_insertion_point(message_clear_start:gui.input_dialog.InputDialog)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  layouts_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      caption_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      placeholder_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x0000001cu) {
    ::memset(&timeout_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&min_text_length_) -
        reinterpret_cast<char*>(&timeout_)) + sizeof(min_text_length_));
    max_text_length_ = 1024u;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* InputDialog::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string caption = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_caption();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gui.input_dialog.InputDialog.caption");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string placeholder = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_placeholder();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gui.input_dialog.InputDialog.placeholder");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 timeout = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_timeout(&has_bits);
          timeout_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 min_text_length = 4 [default = 0];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_min_text_length(&has_bits);
          min_text_length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 max_text_length = 5 [default = 1024];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_max_text_length(&has_bits);
          max_text_length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gui.input_dialog.KeypadLayout layouts = 6 [packed = true];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_layouts(), ptr, ctx, ::gui::input_dialog::KeypadLayout_IsValid, &_internal_metadata_, 6);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::gui::input_dialog::KeypadLayout_IsValid(val))) {
            _internal_add_layouts(static_cast<::gui::input_dialog::KeypadLayout>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(6, val, mutable_unknown_fields());
          }
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

::PROTOBUF_NAMESPACE_ID::uint8* InputDialog::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gui.input_dialog.InputDialog)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string caption = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_caption().data(), static_cast<int>(this->_internal_caption().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gui.input_dialog.InputDialog.caption");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_caption(), target);
  }

  // optional string placeholder = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_placeholder().data(), static_cast<int>(this->_internal_placeholder().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gui.input_dialog.InputDialog.placeholder");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_placeholder(), target);
  }

  // optional uint32 timeout = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_timeout(), target);
  }

  // optional uint32 min_text_length = 4 [default = 0];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_min_text_length(), target);
  }

  // optional uint32 max_text_length = 5 [default = 1024];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->_internal_max_text_length(), target);
  }

  // repeated .gui.input_dialog.KeypadLayout layouts = 6 [packed = true];
  {
    int byte_size = _layouts_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          6, layouts_, byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gui.input_dialog.InputDialog)
  return target;
}

size_t InputDialog::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gui.input_dialog.InputDialog)
  size_t total_size = 0;

  // required string caption = 1;
  if (_internal_has_caption()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_caption());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gui.input_dialog.KeypadLayout layouts = 6 [packed = true];
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_layouts_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_layouts(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _layouts_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001eu) {
    // optional string placeholder = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_placeholder());
    }

    // optional uint32 timeout = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_timeout());
    }

    // optional uint32 min_text_length = 4 [default = 0];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_min_text_length());
    }

    // optional uint32 max_text_length = 5 [default = 1024];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_max_text_length());
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

void InputDialog::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gui.input_dialog.InputDialog)
  GOOGLE_DCHECK_NE(&from, this);
  const InputDialog* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<InputDialog>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gui.input_dialog.InputDialog)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gui.input_dialog.InputDialog)
    MergeFrom(*source);
  }
}

void InputDialog::MergeFrom(const InputDialog& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gui.input_dialog.InputDialog)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  layouts_.MergeFrom(from.layouts_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      caption_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.caption_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      placeholder_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.placeholder_);
    }
    if (cached_has_bits & 0x00000004u) {
      timeout_ = from.timeout_;
    }
    if (cached_has_bits & 0x00000008u) {
      min_text_length_ = from.min_text_length_;
    }
    if (cached_has_bits & 0x00000010u) {
      max_text_length_ = from.max_text_length_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void InputDialog::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gui.input_dialog.InputDialog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InputDialog::CopyFrom(const InputDialog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gui.input_dialog.InputDialog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InputDialog::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void InputDialog::InternalSwap(InputDialog* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  layouts_.InternalSwap(&other->layouts_);
  caption_.Swap(&other->caption_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  placeholder_.Swap(&other->placeholder_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timeout_, other->timeout_);
  swap(min_text_length_, other->min_text_length_);
  swap(max_text_length_, other->max_text_length_);
}

::PROTOBUF_NAMESPACE_ID::Metadata InputDialog::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void EnteredText::InitAsDefaultInstance() {
}
class EnteredText::_Internal {
 public:
  using HasBits = decltype(std::declval<EnteredText>()._has_bits_);
  static void set_has_text(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

EnteredText::EnteredText()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gui.input_dialog.EnteredText)
}
EnteredText::EnteredText(const EnteredText& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_text()) {
    text_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  // @@protoc_insertion_point(copy_constructor:gui.input_dialog.EnteredText)
}

void EnteredText::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EnteredText_gui_2finput_5fdialog_2eproto.base);
  text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

EnteredText::~EnteredText() {
  // @@protoc_insertion_point(destructor:gui.input_dialog.EnteredText)
  SharedDtor();
}

void EnteredText::SharedDtor() {
  text_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EnteredText::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EnteredText& EnteredText::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EnteredText_gui_2finput_5fdialog_2eproto.base);
  return *internal_default_instance();
}


void EnteredText::Clear() {
// @@protoc_insertion_point(message_clear_start:gui.input_dialog.EnteredText)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    text_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* EnteredText::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string text = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_text();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gui.input_dialog.EnteredText.text");
          #endif  // !NDEBUG
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

::PROTOBUF_NAMESPACE_ID::uint8* EnteredText::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gui.input_dialog.EnteredText)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string text = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_text().data(), static_cast<int>(this->_internal_text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gui.input_dialog.EnteredText.text");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_text(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gui.input_dialog.EnteredText)
  return target;
}

size_t EnteredText::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gui.input_dialog.EnteredText)
  size_t total_size = 0;

  // required string text = 1;
  if (_internal_has_text()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_text());
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

void EnteredText::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gui.input_dialog.EnteredText)
  GOOGLE_DCHECK_NE(&from, this);
  const EnteredText* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EnteredText>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gui.input_dialog.EnteredText)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gui.input_dialog.EnteredText)
    MergeFrom(*source);
  }
}

void EnteredText::MergeFrom(const EnteredText& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gui.input_dialog.EnteredText)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_text()) {
    _has_bits_[0] |= 0x00000001u;
    text_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
}

void EnteredText::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gui.input_dialog.EnteredText)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnteredText::CopyFrom(const EnteredText& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gui.input_dialog.EnteredText)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnteredText::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void EnteredText::InternalSwap(EnteredText* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  text_.Swap(&other->text_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata EnteredText::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace input_dialog
}  // namespace gui
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gui::input_dialog::InputDialog* Arena::CreateMaybeMessage< ::gui::input_dialog::InputDialog >(Arena* arena) {
  return Arena::CreateInternal< ::gui::input_dialog::InputDialog >(arena);
}
template<> PROTOBUF_NOINLINE ::gui::input_dialog::EnteredText* Arena::CreateMaybeMessage< ::gui::input_dialog::EnteredText >(Arena* arena) {
  return Arena::CreateInternal< ::gui::input_dialog::EnteredText >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
