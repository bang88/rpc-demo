# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: your_service.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='your_service.proto',
  package='example',
  syntax='proto3',
  serialized_pb=_b('\n\x12your_service.proto\x12\x07\x65xample\x1a\x1cgoogle/api/annotations.proto\"\x1e\n\rStringMessage\x12\r\n\x05value\x18\x01 \x01(\t2b\n\x0bYourService\x12S\n\x04\x45\x63ho\x12\x16.example.StringMessage\x1a\x16.example.StringMessage\"\x1b\x82\xd3\xe4\x93\x02\x15\"\x10/v1/example/echo:\x01*b\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_STRINGMESSAGE = _descriptor.Descriptor(
  name='StringMessage',
  full_name='example.StringMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='value', full_name='example.StringMessage.value', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=61,
  serialized_end=91,
)

DESCRIPTOR.message_types_by_name['StringMessage'] = _STRINGMESSAGE

StringMessage = _reflection.GeneratedProtocolMessageType('StringMessage', (_message.Message,), dict(
  DESCRIPTOR = _STRINGMESSAGE,
  __module__ = 'your_service_pb2'
  # @@protoc_insertion_point(class_scope:example.StringMessage)
  ))
_sym_db.RegisterMessage(StringMessage)


# @@protoc_insertion_point(module_scope)
