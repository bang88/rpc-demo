// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: your_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "your_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace example {

namespace {

const ::google::protobuf::Descriptor* StringMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StringMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_your_5fservice_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_your_5fservice_2eproto() {
  protobuf_AddDesc_your_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "your_service.proto");
  GOOGLE_CHECK(file != NULL);
  StringMessage_descriptor_ = file->message_type(0);
  static const int StringMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringMessage, value_),
  };
  StringMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      StringMessage_descriptor_,
      StringMessage::internal_default_instance(),
      StringMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(StringMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringMessage, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_your_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      StringMessage_descriptor_, StringMessage::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_your_5fservice_2eproto() {
  StringMessage_default_instance_.Shutdown();
  delete StringMessage_reflection_;
}

void protobuf_InitDefaults_your_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::api::protobuf_InitDefaults_google_2fapi_2fannotations_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  StringMessage_default_instance_.DefaultConstruct();
  StringMessage_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_your_5fservice_2eproto_once_);
void protobuf_InitDefaults_your_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_your_5fservice_2eproto_once_,
                 &protobuf_InitDefaults_your_5fservice_2eproto_impl);
}
void protobuf_AddDesc_your_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_your_5fservice_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022your_service.proto\022\007example\032\034google/ap"
    "i/annotations.proto\"\036\n\rStringMessage\022\r\n\005"
    "value\030\001 \001(\t2b\n\013YourService\022S\n\004Echo\022\026.exa"
    "mple.StringMessage\032\026.example.StringMessa"
    "ge\"\033\202\323\344\223\002\025\"\020/v1/example/echo:\001*b\006proto3", 199);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "your_service.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_your_5fservice_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_your_5fservice_2eproto_once_);
void protobuf_AddDesc_your_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_your_5fservice_2eproto_once_,
                 &protobuf_AddDesc_your_5fservice_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_your_5fservice_2eproto {
  StaticDescriptorInitializer_your_5fservice_2eproto() {
    protobuf_AddDesc_your_5fservice_2eproto();
  }
} static_descriptor_initializer_your_5fservice_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StringMessage::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StringMessage::StringMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_your_5fservice_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:example.StringMessage)
}

void StringMessage::InitAsDefaultInstance() {
}

StringMessage::StringMessage(const StringMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:example.StringMessage)
}

void StringMessage::SharedCtor() {
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

StringMessage::~StringMessage() {
  // @@protoc_insertion_point(destructor:example.StringMessage)
  SharedDtor();
}

void StringMessage::SharedDtor() {
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void StringMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StringMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StringMessage_descriptor_;
}

const StringMessage& StringMessage::default_instance() {
  protobuf_InitDefaults_your_5fservice_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<StringMessage> StringMessage_default_instance_;

StringMessage* StringMessage::New(::google::protobuf::Arena* arena) const {
  StringMessage* n = new StringMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StringMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:example.StringMessage)
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool StringMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:example.StringMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string value = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "example.StringMessage.value"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:example.StringMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:example.StringMessage)
  return false;
#undef DO_
}

void StringMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:example.StringMessage)
  // optional string value = 1;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "example.StringMessage.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:example.StringMessage)
}

::google::protobuf::uint8* StringMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:example.StringMessage)
  // optional string value = 1;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "example.StringMessage.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:example.StringMessage)
  return target;
}

size_t StringMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:example.StringMessage)
  size_t total_size = 0;

  // optional string value = 1;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StringMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:example.StringMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const StringMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StringMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:example.StringMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:example.StringMessage)
    UnsafeMergeFrom(*source);
  }
}

void StringMessage::MergeFrom(const StringMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:example.StringMessage)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void StringMessage::UnsafeMergeFrom(const StringMessage& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void StringMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:example.StringMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StringMessage::CopyFrom(const StringMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:example.StringMessage)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool StringMessage::IsInitialized() const {

  return true;
}

void StringMessage::Swap(StringMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StringMessage::InternalSwap(StringMessage* other) {
  value_.Swap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StringMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StringMessage_descriptor_;
  metadata.reflection = StringMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StringMessage

// optional string value = 1;
void StringMessage::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& StringMessage::value() const {
  // @@protoc_insertion_point(field_get:example.StringMessage.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void StringMessage::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:example.StringMessage.value)
}
void StringMessage::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:example.StringMessage.value)
}
void StringMessage::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:example.StringMessage.value)
}
::std::string* StringMessage::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:example.StringMessage.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* StringMessage::release_value() {
  // @@protoc_insertion_point(field_release:example.StringMessage.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void StringMessage::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:example.StringMessage.value)
}

inline const StringMessage* StringMessage::internal_default_instance() {
  return &StringMessage_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace example

// @@protoc_insertion_point(global_scope)
