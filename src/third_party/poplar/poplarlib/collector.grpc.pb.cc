// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: collector.proto

#include "collector.pb.h"
#include "collector.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace poplar {

static const char* PoplarEventCollector_method_names[] = {
  "/poplar.PoplarEventCollector/CreateCollector",
  "/poplar.PoplarEventCollector/SendEvent",
  "/poplar.PoplarEventCollector/RegisterStream",
  "/poplar.PoplarEventCollector/StreamEvents",
  "/poplar.PoplarEventCollector/CloseCollector",
};

std::unique_ptr< PoplarEventCollector::Stub> PoplarEventCollector::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PoplarEventCollector::Stub> stub(new PoplarEventCollector::Stub(channel));
  return stub;
}

PoplarEventCollector::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateCollector_(PoplarEventCollector_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendEvent_(PoplarEventCollector_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RegisterStream_(PoplarEventCollector_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StreamEvents_(PoplarEventCollector_method_names[3], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_CloseCollector_(PoplarEventCollector_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PoplarEventCollector::Stub::CreateCollector(::grpc::ClientContext* context, const ::poplar::CreateOptions& request, ::poplar::PoplarResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateCollector_, context, request, response);
}

void PoplarEventCollector::Stub::experimental_async::CreateCollector(::grpc::ClientContext* context, const ::poplar::CreateOptions* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateCollector_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::CreateCollector(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateCollector_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::CreateCollector(::grpc::ClientContext* context, const ::poplar::CreateOptions* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateCollector_, context, request, response, reactor);
}

void PoplarEventCollector::Stub::experimental_async::CreateCollector(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateCollector_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::AsyncCreateCollectorRaw(::grpc::ClientContext* context, const ::poplar::CreateOptions& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_CreateCollector_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::PrepareAsyncCreateCollectorRaw(::grpc::ClientContext* context, const ::poplar::CreateOptions& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_CreateCollector_, context, request, false);
}

::grpc::Status PoplarEventCollector::Stub::SendEvent(::grpc::ClientContext* context, const ::poplar::EventMetrics& request, ::poplar::PoplarResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendEvent_, context, request, response);
}

void PoplarEventCollector::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::poplar::EventMetrics* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::poplar::EventMetrics* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, reactor);
}

void PoplarEventCollector::Stub::experimental_async::SendEvent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SendEvent_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::AsyncSendEventRaw(::grpc::ClientContext* context, const ::poplar::EventMetrics& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_SendEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::PrepareAsyncSendEventRaw(::grpc::ClientContext* context, const ::poplar::EventMetrics& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_SendEvent_, context, request, false);
}

::grpc::Status PoplarEventCollector::Stub::RegisterStream(::grpc::ClientContext* context, const ::poplar::CollectorName& request, ::poplar::PoplarResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegisterStream_, context, request, response);
}

void PoplarEventCollector::Stub::experimental_async::RegisterStream(::grpc::ClientContext* context, const ::poplar::CollectorName* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterStream_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::RegisterStream(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterStream_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::RegisterStream(::grpc::ClientContext* context, const ::poplar::CollectorName* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterStream_, context, request, response, reactor);
}

void PoplarEventCollector::Stub::experimental_async::RegisterStream(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterStream_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::AsyncRegisterStreamRaw(::grpc::ClientContext* context, const ::poplar::CollectorName& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_RegisterStream_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::PrepareAsyncRegisterStreamRaw(::grpc::ClientContext* context, const ::poplar::CollectorName& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_RegisterStream_, context, request, false);
}

::grpc::ClientWriter< ::poplar::EventMetrics>* PoplarEventCollector::Stub::StreamEventsRaw(::grpc::ClientContext* context, ::poplar::PoplarResponse* response) {
  return ::grpc_impl::internal::ClientWriterFactory< ::poplar::EventMetrics>::Create(channel_.get(), rpcmethod_StreamEvents_, context, response);
}

void PoplarEventCollector::Stub::experimental_async::StreamEvents(::grpc::ClientContext* context, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientWriteReactor< ::poplar::EventMetrics>* reactor) {
  ::grpc_impl::internal::ClientCallbackWriterFactory< ::poplar::EventMetrics>::Create(stub_->channel_.get(), stub_->rpcmethod_StreamEvents_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::poplar::EventMetrics>* PoplarEventCollector::Stub::AsyncStreamEventsRaw(::grpc::ClientContext* context, ::poplar::PoplarResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncWriterFactory< ::poplar::EventMetrics>::Create(channel_.get(), cq, rpcmethod_StreamEvents_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::poplar::EventMetrics>* PoplarEventCollector::Stub::PrepareAsyncStreamEventsRaw(::grpc::ClientContext* context, ::poplar::PoplarResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncWriterFactory< ::poplar::EventMetrics>::Create(channel_.get(), cq, rpcmethod_StreamEvents_, context, response, false, nullptr);
}

::grpc::Status PoplarEventCollector::Stub::CloseCollector(::grpc::ClientContext* context, const ::poplar::PoplarID& request, ::poplar::PoplarResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CloseCollector_, context, request, response);
}

void PoplarEventCollector::Stub::experimental_async::CloseCollector(::grpc::ClientContext* context, const ::poplar::PoplarID* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CloseCollector_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::CloseCollector(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CloseCollector_, context, request, response, std::move(f));
}

void PoplarEventCollector::Stub::experimental_async::CloseCollector(::grpc::ClientContext* context, const ::poplar::PoplarID* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CloseCollector_, context, request, response, reactor);
}

void PoplarEventCollector::Stub::experimental_async::CloseCollector(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::poplar::PoplarResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CloseCollector_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::AsyncCloseCollectorRaw(::grpc::ClientContext* context, const ::poplar::PoplarID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_CloseCollector_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::poplar::PoplarResponse>* PoplarEventCollector::Stub::PrepareAsyncCloseCollectorRaw(::grpc::ClientContext* context, const ::poplar::PoplarID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::poplar::PoplarResponse>::Create(channel_.get(), cq, rpcmethod_CloseCollector_, context, request, false);
}

PoplarEventCollector::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoplarEventCollector_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoplarEventCollector::Service, ::poplar::CreateOptions, ::poplar::PoplarResponse>(
          std::mem_fn(&PoplarEventCollector::Service::CreateCollector), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoplarEventCollector_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoplarEventCollector::Service, ::poplar::EventMetrics, ::poplar::PoplarResponse>(
          std::mem_fn(&PoplarEventCollector::Service::SendEvent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoplarEventCollector_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoplarEventCollector::Service, ::poplar::CollectorName, ::poplar::PoplarResponse>(
          std::mem_fn(&PoplarEventCollector::Service::RegisterStream), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoplarEventCollector_method_names[3],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< PoplarEventCollector::Service, ::poplar::EventMetrics, ::poplar::PoplarResponse>(
          std::mem_fn(&PoplarEventCollector::Service::StreamEvents), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoplarEventCollector_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoplarEventCollector::Service, ::poplar::PoplarID, ::poplar::PoplarResponse>(
          std::mem_fn(&PoplarEventCollector::Service::CloseCollector), this)));
}

PoplarEventCollector::Service::~Service() {
}

::grpc::Status PoplarEventCollector::Service::CreateCollector(::grpc::ServerContext* context, const ::poplar::CreateOptions* request, ::poplar::PoplarResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PoplarEventCollector::Service::SendEvent(::grpc::ServerContext* context, const ::poplar::EventMetrics* request, ::poplar::PoplarResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PoplarEventCollector::Service::RegisterStream(::grpc::ServerContext* context, const ::poplar::CollectorName* request, ::poplar::PoplarResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PoplarEventCollector::Service::StreamEvents(::grpc::ServerContext* context, ::grpc::ServerReader< ::poplar::EventMetrics>* reader, ::poplar::PoplarResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PoplarEventCollector::Service::CloseCollector(::grpc::ServerContext* context, const ::poplar::PoplarID* request, ::poplar::PoplarResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace poplar

