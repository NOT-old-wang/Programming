// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/service.pb.h"

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

namespace grpc_demo {
namespace service {
class UserRequestDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<UserRequest>
     _instance;
} _UserRequest_default_instance_;
class UserResponseDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<UserResponse>
     _instance;
} _UserResponse_default_instance_;

namespace protobuf_proto_2fservice_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserRequest, name_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserResponse, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserResponse, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserResponse, age_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserResponse, sex_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(UserRequest)},
  { 6, -1, sizeof(UserResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_UserRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_UserResponse_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "proto/service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _UserRequest_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_UserRequest_default_instance_);_UserResponse_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_UserResponse_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023proto/service.proto\022\021grpc_demo.service"
      "\"\033\n\013UserRequest\022\014\n\004name\030\001 \001(\t\"B\n\014UserRes"
      "ponse\022\014\n\004name\030\001 \001(\t\022\n\n\002id\030\002 \001(\005\022\013\n\003age\030\003"
      " \001(\005\022\013\n\003sex\030\004 \001(\t2c\n\017UserInfoService\022P\n\013"
      "GetUserInfo\022\036.grpc_demo.service.UserRequ"
      "est\032\037.grpc_demo.service.UserResponse\"\000b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 246);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/service.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_proto_2fservice_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserRequest::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserRequest::UserRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_proto_2fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:grpc_demo.service.UserRequest)
}
UserRequest::UserRequest(const UserRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:grpc_demo.service.UserRequest)
}

void UserRequest::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

UserRequest::~UserRequest() {
  // @@protoc_insertion_point(destructor:grpc_demo.service.UserRequest)
  SharedDtor();
}

void UserRequest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void UserRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserRequest::descriptor() {
  protobuf_proto_2fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const UserRequest& UserRequest::default_instance() {
  protobuf_proto_2fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

UserRequest* UserRequest::New(::google::protobuf::Arena* arena) const {
  UserRequest* n = new UserRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpc_demo.service.UserRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool UserRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:grpc_demo.service.UserRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "grpc_demo.service.UserRequest.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:grpc_demo.service.UserRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:grpc_demo.service.UserRequest)
  return false;
#undef DO_
}

void UserRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:grpc_demo.service.UserRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grpc_demo.service.UserRequest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:grpc_demo.service.UserRequest)
}

::google::protobuf::uint8* UserRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:grpc_demo.service.UserRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grpc_demo.service.UserRequest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpc_demo.service.UserRequest)
  return target;
}

size_t UserRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpc_demo.service.UserRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpc_demo.service.UserRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const UserRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const UserRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpc_demo.service.UserRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpc_demo.service.UserRequest)
    MergeFrom(*source);
  }
}

void UserRequest::MergeFrom(const UserRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpc_demo.service.UserRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void UserRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpc_demo.service.UserRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserRequest::CopyFrom(const UserRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpc_demo.service.UserRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserRequest::IsInitialized() const {
  return true;
}

void UserRequest::Swap(UserRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserRequest::InternalSwap(UserRequest* other) {
  using std::swap;
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UserRequest::GetMetadata() const {
  protobuf_proto_2fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UserRequest

// string name = 1;
void UserRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& UserRequest::name() const {
  // @@protoc_insertion_point(field_get:grpc_demo.service.UserRequest.name)
  return name_.GetNoArena();
}
void UserRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:grpc_demo.service.UserRequest.name)
}
#if LANG_CXX11
void UserRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:grpc_demo.service.UserRequest.name)
}
#endif
void UserRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:grpc_demo.service.UserRequest.name)
}
void UserRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:grpc_demo.service.UserRequest.name)
}
::std::string* UserRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:grpc_demo.service.UserRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* UserRequest::release_name() {
  // @@protoc_insertion_point(field_release:grpc_demo.service.UserRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void UserRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:grpc_demo.service.UserRequest.name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserResponse::kNameFieldNumber;
const int UserResponse::kIdFieldNumber;
const int UserResponse::kAgeFieldNumber;
const int UserResponse::kSexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserResponse::UserResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_proto_2fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:grpc_demo.service.UserResponse)
}
UserResponse::UserResponse(const UserResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  sex_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.sex().size() > 0) {
    sex_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sex_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&age_) -
    reinterpret_cast<char*>(&id_)) + sizeof(age_));
  // @@protoc_insertion_point(copy_constructor:grpc_demo.service.UserResponse)
}

void UserResponse::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sex_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&age_) -
      reinterpret_cast<char*>(&id_)) + sizeof(age_));
  _cached_size_ = 0;
}

UserResponse::~UserResponse() {
  // @@protoc_insertion_point(destructor:grpc_demo.service.UserResponse)
  SharedDtor();
}

void UserResponse::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sex_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void UserResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserResponse::descriptor() {
  protobuf_proto_2fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const UserResponse& UserResponse::default_instance() {
  protobuf_proto_2fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

UserResponse* UserResponse::New(::google::protobuf::Arena* arena) const {
  UserResponse* n = new UserResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpc_demo.service.UserResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sex_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&age_) -
      reinterpret_cast<char*>(&id_)) + sizeof(age_));
  _internal_metadata_.Clear();
}

bool UserResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:grpc_demo.service.UserResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "grpc_demo.service.UserResponse.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 age = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &age_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sex = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sex()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sex().data(), static_cast<int>(this->sex().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "grpc_demo.service.UserResponse.sex"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:grpc_demo.service.UserResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:grpc_demo.service.UserResponse)
  return false;
#undef DO_
}

void UserResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:grpc_demo.service.UserResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grpc_demo.service.UserResponse.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // int32 id = 2;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // int32 age = 3;
  if (this->age() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->age(), output);
  }

  // string sex = 4;
  if (this->sex().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sex().data(), static_cast<int>(this->sex().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grpc_demo.service.UserResponse.sex");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->sex(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:grpc_demo.service.UserResponse)
}

::google::protobuf::uint8* UserResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:grpc_demo.service.UserResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grpc_demo.service.UserResponse.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // int32 id = 2;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // int32 age = 3;
  if (this->age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->age(), target);
  }

  // string sex = 4;
  if (this->sex().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sex().data(), static_cast<int>(this->sex().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "grpc_demo.service.UserResponse.sex");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->sex(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpc_demo.service.UserResponse)
  return target;
}

size_t UserResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpc_demo.service.UserResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string sex = 4;
  if (this->sex().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sex());
  }

  // int32 id = 2;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // int32 age = 3;
  if (this->age() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->age());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grpc_demo.service.UserResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const UserResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const UserResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grpc_demo.service.UserResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grpc_demo.service.UserResponse)
    MergeFrom(*source);
  }
}

void UserResponse::MergeFrom(const UserResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpc_demo.service.UserResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.sex().size() > 0) {

    sex_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sex_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.age() != 0) {
    set_age(from.age());
  }
}

void UserResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grpc_demo.service.UserResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserResponse::CopyFrom(const UserResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpc_demo.service.UserResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserResponse::IsInitialized() const {
  return true;
}

void UserResponse::Swap(UserResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserResponse::InternalSwap(UserResponse* other) {
  using std::swap;
  name_.Swap(&other->name_);
  sex_.Swap(&other->sex_);
  swap(id_, other->id_);
  swap(age_, other->age_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UserResponse::GetMetadata() const {
  protobuf_proto_2fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UserResponse

// string name = 1;
void UserResponse::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& UserResponse::name() const {
  // @@protoc_insertion_point(field_get:grpc_demo.service.UserResponse.name)
  return name_.GetNoArena();
}
void UserResponse::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:grpc_demo.service.UserResponse.name)
}
#if LANG_CXX11
void UserResponse::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:grpc_demo.service.UserResponse.name)
}
#endif
void UserResponse::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:grpc_demo.service.UserResponse.name)
}
void UserResponse::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:grpc_demo.service.UserResponse.name)
}
::std::string* UserResponse::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:grpc_demo.service.UserResponse.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* UserResponse::release_name() {
  // @@protoc_insertion_point(field_release:grpc_demo.service.UserResponse.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void UserResponse::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:grpc_demo.service.UserResponse.name)
}

// int32 id = 2;
void UserResponse::clear_id() {
  id_ = 0;
}
::google::protobuf::int32 UserResponse::id() const {
  // @@protoc_insertion_point(field_get:grpc_demo.service.UserResponse.id)
  return id_;
}
void UserResponse::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:grpc_demo.service.UserResponse.id)
}

// int32 age = 3;
void UserResponse::clear_age() {
  age_ = 0;
}
::google::protobuf::int32 UserResponse::age() const {
  // @@protoc_insertion_point(field_get:grpc_demo.service.UserResponse.age)
  return age_;
}
void UserResponse::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:grpc_demo.service.UserResponse.age)
}

// string sex = 4;
void UserResponse::clear_sex() {
  sex_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& UserResponse::sex() const {
  // @@protoc_insertion_point(field_get:grpc_demo.service.UserResponse.sex)
  return sex_.GetNoArena();
}
void UserResponse::set_sex(const ::std::string& value) {
  
  sex_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:grpc_demo.service.UserResponse.sex)
}
#if LANG_CXX11
void UserResponse::set_sex(::std::string&& value) {
  
  sex_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:grpc_demo.service.UserResponse.sex)
}
#endif
void UserResponse::set_sex(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  sex_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:grpc_demo.service.UserResponse.sex)
}
void UserResponse::set_sex(const char* value, size_t size) {
  
  sex_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:grpc_demo.service.UserResponse.sex)
}
::std::string* UserResponse::mutable_sex() {
  
  // @@protoc_insertion_point(field_mutable:grpc_demo.service.UserResponse.sex)
  return sex_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* UserResponse::release_sex() {
  // @@protoc_insertion_point(field_release:grpc_demo.service.UserResponse.sex)
  
  return sex_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void UserResponse::set_allocated_sex(::std::string* sex) {
  if (sex != NULL) {
    
  } else {
    
  }
  sex_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sex);
  // @@protoc_insertion_point(field_set_allocated:grpc_demo.service.UserResponse.sex)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace service
}  // namespace grpc_demo

// @@protoc_insertion_point(global_scope)
