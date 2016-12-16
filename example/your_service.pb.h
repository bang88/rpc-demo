// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: your_service.proto

#ifndef PROTOBUF_your_5fservice_2eproto__INCLUDED
#define PROTOBUF_your_5fservice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)

namespace example {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_your_5fservice_2eproto();
void protobuf_InitDefaults_your_5fservice_2eproto();
void protobuf_AssignDesc_your_5fservice_2eproto();
void protobuf_ShutdownFile_your_5fservice_2eproto();

class StringMessage;

// ===================================================================

class StringMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:example.StringMessage) */ {
 public:
  StringMessage();
  virtual ~StringMessage();

  StringMessage(const StringMessage& from);

  inline StringMessage& operator=(const StringMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StringMessage& default_instance();

  static const StringMessage* internal_default_instance();

  void Swap(StringMessage* other);

  // implements Message ----------------------------------------------

  inline StringMessage* New() const { return New(NULL); }

  StringMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StringMessage& from);
  void MergeFrom(const StringMessage& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StringMessage* other);
  void UnsafeMergeFrom(const StringMessage& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string value = 1;
  void clear_value();
  static const int kValueFieldNumber = 1;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:example.StringMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_your_5fservice_2eproto_impl();
  friend void  protobuf_AddDesc_your_5fservice_2eproto_impl();
  friend void protobuf_AssignDesc_your_5fservice_2eproto();
  friend void protobuf_ShutdownFile_your_5fservice_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<StringMessage> StringMessage_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StringMessage

// optional string value = 1;
inline void StringMessage::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& StringMessage::value() const {
  // @@protoc_insertion_point(field_get:example.StringMessage.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StringMessage::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:example.StringMessage.value)
}
inline void StringMessage::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:example.StringMessage.value)
}
inline void StringMessage::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:example.StringMessage.value)
}
inline ::std::string* StringMessage::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:example.StringMessage.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StringMessage::release_value() {
  // @@protoc_insertion_point(field_release:example.StringMessage.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StringMessage::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:example.StringMessage.value)
}

inline const StringMessage* StringMessage::internal_default_instance() {
  return &StringMessage_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace example

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_your_5fservice_2eproto__INCLUDED
