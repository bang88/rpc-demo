// Code generated by protoc-gen-go.
// source: your_service.proto
// DO NOT EDIT!

/*
Package example is a generated protocol buffer package.

It is generated from these files:
	your_service.proto

It has these top-level messages:
	StringMessage
*/
package example

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import _ "github.com/grpc-ecosystem/grpc-gateway/third_party/googleapis/google/api"

import (
	context "golang.org/x/net/context"
	grpc "google.golang.org/grpc"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type StringMessage struct {
	Value string `protobuf:"bytes,1,opt,name=value" json:"value,omitempty"`
}

func (m *StringMessage) Reset()                    { *m = StringMessage{} }
func (m *StringMessage) String() string            { return proto.CompactTextString(m) }
func (*StringMessage) ProtoMessage()               {}
func (*StringMessage) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *StringMessage) GetValue() string {
	if m != nil {
		return m.Value
	}
	return ""
}

func init() {
	proto.RegisterType((*StringMessage)(nil), "example.StringMessage")
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// Client API for YourService service

type YourServiceClient interface {
	Echo(ctx context.Context, in *StringMessage, opts ...grpc.CallOption) (*StringMessage, error)
}

type yourServiceClient struct {
	cc *grpc.ClientConn
}

func NewYourServiceClient(cc *grpc.ClientConn) YourServiceClient {
	return &yourServiceClient{cc}
}

func (c *yourServiceClient) Echo(ctx context.Context, in *StringMessage, opts ...grpc.CallOption) (*StringMessage, error) {
	out := new(StringMessage)
	err := grpc.Invoke(ctx, "/example.YourService/Echo", in, out, c.cc, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// Server API for YourService service

type YourServiceServer interface {
	Echo(context.Context, *StringMessage) (*StringMessage, error)
}

func RegisterYourServiceServer(s *grpc.Server, srv YourServiceServer) {
	s.RegisterService(&_YourService_serviceDesc, srv)
}

func _YourService_Echo_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(StringMessage)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(YourServiceServer).Echo(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/example.YourService/Echo",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(YourServiceServer).Echo(ctx, req.(*StringMessage))
	}
	return interceptor(ctx, in, info, handler)
}

var _YourService_serviceDesc = grpc.ServiceDesc{
	ServiceName: "example.YourService",
	HandlerType: (*YourServiceServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Echo",
			Handler:    _YourService_Echo_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "your_service.proto",
}

func init() { proto.RegisterFile("your_service.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 174 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x09, 0x6e, 0x88, 0x02, 0xff, 0xe2, 0x12, 0xaa, 0xcc, 0x2f, 0x2d,
	0x8a, 0x2f, 0x4e, 0x2d, 0x2a, 0xcb, 0x4c, 0x4e, 0xd5, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62,
	0x4f, 0xad, 0x48, 0xcc, 0x2d, 0xc8, 0x49, 0x95, 0x92, 0x49, 0xcf, 0xcf, 0x4f, 0xcf, 0x49, 0xd5,
	0x4f, 0x2c, 0xc8, 0xd4, 0x4f, 0xcc, 0xcb, 0xcb, 0x2f, 0x49, 0x2c, 0xc9, 0xcc, 0xcf, 0x2b, 0x86,
	0x28, 0x53, 0x52, 0xe5, 0xe2, 0x0d, 0x2e, 0x29, 0xca, 0xcc, 0x4b, 0xf7, 0x4d, 0x2d, 0x2e, 0x4e,
	0x4c, 0x4f, 0x15, 0x12, 0xe1, 0x62, 0x2d, 0x4b, 0xcc, 0x29, 0x4d, 0x95, 0x60, 0x54, 0x60, 0xd4,
	0xe0, 0x0c, 0x82, 0x70, 0x8c, 0x92, 0xb8, 0xb8, 0x23, 0xf3, 0x4b, 0x8b, 0x82, 0x21, 0x56, 0x08,
	0x05, 0x73, 0xb1, 0xb8, 0x26, 0x67, 0xe4, 0x0b, 0x89, 0xe9, 0x41, 0x6d, 0xd1, 0x43, 0x31, 0x44,
	0x0a, 0x87, 0xb8, 0x92, 0x74, 0xd3, 0xe5, 0x27, 0x93, 0x99, 0x44, 0x95, 0x04, 0xf4, 0xcb, 0x0c,
	0xf5, 0xa1, 0x4a, 0xf4, 0x53, 0x93, 0x33, 0xf2, 0xad, 0x18, 0xb5, 0x92, 0xd8, 0xc0, 0x2e, 0x32,
	0x06, 0x04, 0x00, 0x00, 0xff, 0xff, 0xb5, 0xbe, 0x4a, 0x3c, 0xce, 0x00, 0x00, 0x00,
}
