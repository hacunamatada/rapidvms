// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: onvifcli.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "onvifcli.pb.h"

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

namespace OnvifCli {
class OnvifCliCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<OnvifCliCmd> {
  public:
  const ::OnvifCliDeviceLoginReq* loginreq_;
  const ::OnvifCliDeviceLoginResp* loginresp_;
  const ::OnvifCliMediaGetProfilesReq* getprofilereq_;
  const ::OnvifCliMediaGetProfilesResp* getprofileresp_;
  const ::OnvifCliPTZReq* ptzreq_;
  const ::OnvifCliPTZResp* ptzresp_;
} _OnvifCliCmd_default_instance_;

namespace protobuf_onvifcli_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OnvifCliCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OnvifCliCmd, _oneof_case_[0]),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OnvifCliCmd, type_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_OnvifCliCmd_default_instance_), loginreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_OnvifCliCmd_default_instance_), loginresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_OnvifCliCmd_default_instance_), getprofilereq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_OnvifCliCmd_default_instance_), getprofileresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_OnvifCliCmd_default_instance_), ptzreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_OnvifCliCmd_default_instance_), ptzresp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OnvifCliCmd, cmd_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(OnvifCliCmd)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_OnvifCliCmd_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "onvifcli.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _OnvifCliCmd_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_onvifclidevice_2eproto::InitDefaults();
  ::protobuf_onvifclimedia_2eproto::InitDefaults();
  ::protobuf_onvifcliptz_2eproto::InitDefaults();
  _OnvifCliCmd_default_instance_.DefaultConstruct();
  _OnvifCliCmd_default_instance_.loginreq_ = const_cast< ::OnvifCliDeviceLoginReq*>(
      ::OnvifCliDeviceLoginReq::internal_default_instance());
  _OnvifCliCmd_default_instance_.loginresp_ = const_cast< ::OnvifCliDeviceLoginResp*>(
      ::OnvifCliDeviceLoginResp::internal_default_instance());
  _OnvifCliCmd_default_instance_.getprofilereq_ = const_cast< ::OnvifCliMediaGetProfilesReq*>(
      ::OnvifCliMediaGetProfilesReq::internal_default_instance());
  _OnvifCliCmd_default_instance_.getprofileresp_ = const_cast< ::OnvifCliMediaGetProfilesResp*>(
      ::OnvifCliMediaGetProfilesResp::internal_default_instance());
  _OnvifCliCmd_default_instance_.ptzreq_ = const_cast< ::OnvifCliPTZReq*>(
      ::OnvifCliPTZReq::internal_default_instance());
  _OnvifCliCmd_default_instance_.ptzresp_ = const_cast< ::OnvifCliPTZResp*>(
      ::OnvifCliPTZResp::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\016onvifcli.proto\022\010OnvifCli\032\024onvifclidevi"
      "ce.proto\032\023onvifclimedia.proto\032\021onvifclip"
      "tz.proto\"\321\002\n\013OnvifCliCmd\022\'\n\004type\030\001 \001(\0162\031"
      ".OnvifCli.OnvifCliCmdType\022+\n\010loginReq\030\002 "
      "\001(\0132\027.OnvifCliDeviceLoginReqH\000\022-\n\tloginR"
      "esp\030\003 \001(\0132\030.OnvifCliDeviceLoginRespH\000\0225\n"
      "\rgetProfileReq\030\004 \001(\0132\034.OnvifCliMediaGetP"
      "rofilesReqH\000\0227\n\016getProfileResp\030\005 \001(\0132\035.O"
      "nvifCliMediaGetProfilesRespH\000\022!\n\006ptzReq\030"
      "\006 \001(\0132\017.OnvifCliPTZReqH\000\022#\n\007ptzResp\030\007 \001("
      "\0132\020.OnvifCliPTZRespH\000B\005\n\003cmd*\322\001\n\017OnvifCl"
      "iCmdType\022\024\n\020CLI_CMD_DEV_ZERO\020\000\022\031\n\025CLI_CM"
      "D_DEV_LOGIN_REQ\020\001\022\032\n\026CLI_CMD_DEV_LOGIN_R"
      "ESP\020\002\022\"\n\036CLI_CMD_MEDIA_GET_PROFILES_REQ\020"
      "\003\022#\n\037CLI_CMD_MEDIA_GET_PROFILES_RESP\020\004\022\023"
      "\n\017CLI_CMD_PTZ_REQ\020\005\022\024\n\020CLI_CMD_PTZ_RESP\020"
      "\006b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 649);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "onvifcli.proto", &protobuf_RegisterTypes);
  ::protobuf_onvifclidevice_2eproto::AddDescriptors();
  ::protobuf_onvifclimedia_2eproto::AddDescriptors();
  ::protobuf_onvifcliptz_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_onvifcli_2eproto

const ::google::protobuf::EnumDescriptor* OnvifCliCmdType_descriptor() {
  protobuf_onvifcli_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_onvifcli_2eproto::file_level_enum_descriptors[0];
}
bool OnvifCliCmdType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OnvifCliCmd::kTypeFieldNumber;
const int OnvifCliCmd::kLoginReqFieldNumber;
const int OnvifCliCmd::kLoginRespFieldNumber;
const int OnvifCliCmd::kGetProfileReqFieldNumber;
const int OnvifCliCmd::kGetProfileRespFieldNumber;
const int OnvifCliCmd::kPtzReqFieldNumber;
const int OnvifCliCmd::kPtzRespFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OnvifCliCmd::OnvifCliCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_onvifcli_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:OnvifCli.OnvifCliCmd)
}
OnvifCliCmd::OnvifCliCmd(const OnvifCliCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_ = from.type_;
  clear_has_cmd();
  switch (from.cmd_case()) {
    case kLoginReq: {
      mutable_loginreq()->::OnvifCliDeviceLoginReq::MergeFrom(from.loginreq());
      break;
    }
    case kLoginResp: {
      mutable_loginresp()->::OnvifCliDeviceLoginResp::MergeFrom(from.loginresp());
      break;
    }
    case kGetProfileReq: {
      mutable_getprofilereq()->::OnvifCliMediaGetProfilesReq::MergeFrom(from.getprofilereq());
      break;
    }
    case kGetProfileResp: {
      mutable_getprofileresp()->::OnvifCliMediaGetProfilesResp::MergeFrom(from.getprofileresp());
      break;
    }
    case kPtzReq: {
      mutable_ptzreq()->::OnvifCliPTZReq::MergeFrom(from.ptzreq());
      break;
    }
    case kPtzResp: {
      mutable_ptzresp()->::OnvifCliPTZResp::MergeFrom(from.ptzresp());
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:OnvifCli.OnvifCliCmd)
}

void OnvifCliCmd::SharedCtor() {
  type_ = 0;
  clear_has_cmd();
  _cached_size_ = 0;
}

OnvifCliCmd::~OnvifCliCmd() {
  // @@protoc_insertion_point(destructor:OnvifCli.OnvifCliCmd)
  SharedDtor();
}

void OnvifCliCmd::SharedDtor() {
  if (has_cmd()) {
    clear_cmd();
  }
}

void OnvifCliCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OnvifCliCmd::descriptor() {
  protobuf_onvifcli_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_onvifcli_2eproto::file_level_metadata[0].descriptor;
}

const OnvifCliCmd& OnvifCliCmd::default_instance() {
  protobuf_onvifcli_2eproto::InitDefaults();
  return *internal_default_instance();
}

OnvifCliCmd* OnvifCliCmd::New(::google::protobuf::Arena* arena) const {
  OnvifCliCmd* n = new OnvifCliCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OnvifCliCmd::clear_cmd() {
// @@protoc_insertion_point(one_of_clear_start:OnvifCli.OnvifCliCmd)
  switch (cmd_case()) {
    case kLoginReq: {
      delete cmd_.loginreq_;
      break;
    }
    case kLoginResp: {
      delete cmd_.loginresp_;
      break;
    }
    case kGetProfileReq: {
      delete cmd_.getprofilereq_;
      break;
    }
    case kGetProfileResp: {
      delete cmd_.getprofileresp_;
      break;
    }
    case kPtzReq: {
      delete cmd_.ptzreq_;
      break;
    }
    case kPtzResp: {
      delete cmd_.ptzresp_;
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = CMD_NOT_SET;
}


void OnvifCliCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:OnvifCli.OnvifCliCmd)
  type_ = 0;
  clear_cmd();
}

bool OnvifCliCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:OnvifCli.OnvifCliCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .OnvifCli.OnvifCliCmdType type = 1;
      case 1: {
        if (tag == 8u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::OnvifCli::OnvifCliCmdType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .OnvifCliDeviceLoginReq loginReq = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_loginreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .OnvifCliDeviceLoginResp loginResp = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_loginresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .OnvifCliMediaGetProfilesReq getProfileReq = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_getprofilereq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .OnvifCliMediaGetProfilesResp getProfileResp = 5;
      case 5: {
        if (tag == 42u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_getprofileresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .OnvifCliPTZReq ptzReq = 6;
      case 6: {
        if (tag == 50u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ptzreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .OnvifCliPTZResp ptzResp = 7;
      case 7: {
        if (tag == 58u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ptzresp()));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:OnvifCli.OnvifCliCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:OnvifCli.OnvifCliCmd)
  return false;
#undef DO_
}

void OnvifCliCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:OnvifCli.OnvifCliCmd)
  // .OnvifCli.OnvifCliCmdType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // .OnvifCliDeviceLoginReq loginReq = 2;
  if (has_loginreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *cmd_.loginreq_, output);
  }

  // .OnvifCliDeviceLoginResp loginResp = 3;
  if (has_loginresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *cmd_.loginresp_, output);
  }

  // .OnvifCliMediaGetProfilesReq getProfileReq = 4;
  if (has_getprofilereq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *cmd_.getprofilereq_, output);
  }

  // .OnvifCliMediaGetProfilesResp getProfileResp = 5;
  if (has_getprofileresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *cmd_.getprofileresp_, output);
  }

  // .OnvifCliPTZReq ptzReq = 6;
  if (has_ptzreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *cmd_.ptzreq_, output);
  }

  // .OnvifCliPTZResp ptzResp = 7;
  if (has_ptzresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *cmd_.ptzresp_, output);
  }

  // @@protoc_insertion_point(serialize_end:OnvifCli.OnvifCliCmd)
}

::google::protobuf::uint8* OnvifCliCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:OnvifCli.OnvifCliCmd)
  // .OnvifCli.OnvifCliCmdType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // .OnvifCliDeviceLoginReq loginReq = 2;
  if (has_loginreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *cmd_.loginreq_, false, target);
  }

  // .OnvifCliDeviceLoginResp loginResp = 3;
  if (has_loginresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *cmd_.loginresp_, false, target);
  }

  // .OnvifCliMediaGetProfilesReq getProfileReq = 4;
  if (has_getprofilereq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *cmd_.getprofilereq_, false, target);
  }

  // .OnvifCliMediaGetProfilesResp getProfileResp = 5;
  if (has_getprofileresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *cmd_.getprofileresp_, false, target);
  }

  // .OnvifCliPTZReq ptzReq = 6;
  if (has_ptzreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *cmd_.ptzreq_, false, target);
  }

  // .OnvifCliPTZResp ptzResp = 7;
  if (has_ptzresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *cmd_.ptzresp_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:OnvifCli.OnvifCliCmd)
  return target;
}

size_t OnvifCliCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:OnvifCli.OnvifCliCmd)
  size_t total_size = 0;

  // .OnvifCli.OnvifCliCmdType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  switch (cmd_case()) {
    // .OnvifCliDeviceLoginReq loginReq = 2;
    case kLoginReq: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.loginreq_);
      break;
    }
    // .OnvifCliDeviceLoginResp loginResp = 3;
    case kLoginResp: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.loginresp_);
      break;
    }
    // .OnvifCliMediaGetProfilesReq getProfileReq = 4;
    case kGetProfileReq: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.getprofilereq_);
      break;
    }
    // .OnvifCliMediaGetProfilesResp getProfileResp = 5;
    case kGetProfileResp: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.getprofileresp_);
      break;
    }
    // .OnvifCliPTZReq ptzReq = 6;
    case kPtzReq: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.ptzreq_);
      break;
    }
    // .OnvifCliPTZResp ptzResp = 7;
    case kPtzResp: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.ptzresp_);
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OnvifCliCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:OnvifCli.OnvifCliCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const OnvifCliCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OnvifCliCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:OnvifCli.OnvifCliCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:OnvifCli.OnvifCliCmd)
    MergeFrom(*source);
  }
}

void OnvifCliCmd::MergeFrom(const OnvifCliCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:OnvifCli.OnvifCliCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.type() != 0) {
    set_type(from.type());
  }
  switch (from.cmd_case()) {
    case kLoginReq: {
      mutable_loginreq()->::OnvifCliDeviceLoginReq::MergeFrom(from.loginreq());
      break;
    }
    case kLoginResp: {
      mutable_loginresp()->::OnvifCliDeviceLoginResp::MergeFrom(from.loginresp());
      break;
    }
    case kGetProfileReq: {
      mutable_getprofilereq()->::OnvifCliMediaGetProfilesReq::MergeFrom(from.getprofilereq());
      break;
    }
    case kGetProfileResp: {
      mutable_getprofileresp()->::OnvifCliMediaGetProfilesResp::MergeFrom(from.getprofileresp());
      break;
    }
    case kPtzReq: {
      mutable_ptzreq()->::OnvifCliPTZReq::MergeFrom(from.ptzreq());
      break;
    }
    case kPtzResp: {
      mutable_ptzresp()->::OnvifCliPTZResp::MergeFrom(from.ptzresp());
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
}

void OnvifCliCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:OnvifCli.OnvifCliCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OnvifCliCmd::CopyFrom(const OnvifCliCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:OnvifCli.OnvifCliCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OnvifCliCmd::IsInitialized() const {
  return true;
}

void OnvifCliCmd::Swap(OnvifCliCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OnvifCliCmd::InternalSwap(OnvifCliCmd* other) {
  std::swap(type_, other->type_);
  std::swap(cmd_, other->cmd_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OnvifCliCmd::GetMetadata() const {
  protobuf_onvifcli_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_onvifcli_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OnvifCliCmd

// .OnvifCli.OnvifCliCmdType type = 1;
void OnvifCliCmd::clear_type() {
  type_ = 0;
}
::OnvifCli::OnvifCliCmdType OnvifCliCmd::type() const {
  // @@protoc_insertion_point(field_get:OnvifCli.OnvifCliCmd.type)
  return static_cast< ::OnvifCli::OnvifCliCmdType >(type_);
}
void OnvifCliCmd::set_type(::OnvifCli::OnvifCliCmdType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:OnvifCli.OnvifCliCmd.type)
}

// .OnvifCliDeviceLoginReq loginReq = 2;
bool OnvifCliCmd::has_loginreq() const {
  return cmd_case() == kLoginReq;
}
void OnvifCliCmd::set_has_loginreq() {
  _oneof_case_[0] = kLoginReq;
}
void OnvifCliCmd::clear_loginreq() {
  if (has_loginreq()) {
    delete cmd_.loginreq_;
    clear_has_cmd();
  }
}
 const ::OnvifCliDeviceLoginReq& OnvifCliCmd::loginreq() const {
  // @@protoc_insertion_point(field_get:OnvifCli.OnvifCliCmd.loginReq)
  return has_loginreq()
      ? *cmd_.loginreq_
      : ::OnvifCliDeviceLoginReq::default_instance();
}
::OnvifCliDeviceLoginReq* OnvifCliCmd::mutable_loginreq() {
  if (!has_loginreq()) {
    clear_cmd();
    set_has_loginreq();
    cmd_.loginreq_ = new ::OnvifCliDeviceLoginReq;
  }
  // @@protoc_insertion_point(field_mutable:OnvifCli.OnvifCliCmd.loginReq)
  return cmd_.loginreq_;
}
::OnvifCliDeviceLoginReq* OnvifCliCmd::release_loginreq() {
  // @@protoc_insertion_point(field_release:OnvifCli.OnvifCliCmd.loginReq)
  if (has_loginreq()) {
    clear_has_cmd();
    ::OnvifCliDeviceLoginReq* temp = cmd_.loginreq_;
    cmd_.loginreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void OnvifCliCmd::set_allocated_loginreq(::OnvifCliDeviceLoginReq* loginreq) {
  clear_cmd();
  if (loginreq) {
    set_has_loginreq();
    cmd_.loginreq_ = loginreq;
  }
  // @@protoc_insertion_point(field_set_allocated:OnvifCli.OnvifCliCmd.loginReq)
}

// .OnvifCliDeviceLoginResp loginResp = 3;
bool OnvifCliCmd::has_loginresp() const {
  return cmd_case() == kLoginResp;
}
void OnvifCliCmd::set_has_loginresp() {
  _oneof_case_[0] = kLoginResp;
}
void OnvifCliCmd::clear_loginresp() {
  if (has_loginresp()) {
    delete cmd_.loginresp_;
    clear_has_cmd();
  }
}
 const ::OnvifCliDeviceLoginResp& OnvifCliCmd::loginresp() const {
  // @@protoc_insertion_point(field_get:OnvifCli.OnvifCliCmd.loginResp)
  return has_loginresp()
      ? *cmd_.loginresp_
      : ::OnvifCliDeviceLoginResp::default_instance();
}
::OnvifCliDeviceLoginResp* OnvifCliCmd::mutable_loginresp() {
  if (!has_loginresp()) {
    clear_cmd();
    set_has_loginresp();
    cmd_.loginresp_ = new ::OnvifCliDeviceLoginResp;
  }
  // @@protoc_insertion_point(field_mutable:OnvifCli.OnvifCliCmd.loginResp)
  return cmd_.loginresp_;
}
::OnvifCliDeviceLoginResp* OnvifCliCmd::release_loginresp() {
  // @@protoc_insertion_point(field_release:OnvifCli.OnvifCliCmd.loginResp)
  if (has_loginresp()) {
    clear_has_cmd();
    ::OnvifCliDeviceLoginResp* temp = cmd_.loginresp_;
    cmd_.loginresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void OnvifCliCmd::set_allocated_loginresp(::OnvifCliDeviceLoginResp* loginresp) {
  clear_cmd();
  if (loginresp) {
    set_has_loginresp();
    cmd_.loginresp_ = loginresp;
  }
  // @@protoc_insertion_point(field_set_allocated:OnvifCli.OnvifCliCmd.loginResp)
}

// .OnvifCliMediaGetProfilesReq getProfileReq = 4;
bool OnvifCliCmd::has_getprofilereq() const {
  return cmd_case() == kGetProfileReq;
}
void OnvifCliCmd::set_has_getprofilereq() {
  _oneof_case_[0] = kGetProfileReq;
}
void OnvifCliCmd::clear_getprofilereq() {
  if (has_getprofilereq()) {
    delete cmd_.getprofilereq_;
    clear_has_cmd();
  }
}
 const ::OnvifCliMediaGetProfilesReq& OnvifCliCmd::getprofilereq() const {
  // @@protoc_insertion_point(field_get:OnvifCli.OnvifCliCmd.getProfileReq)
  return has_getprofilereq()
      ? *cmd_.getprofilereq_
      : ::OnvifCliMediaGetProfilesReq::default_instance();
}
::OnvifCliMediaGetProfilesReq* OnvifCliCmd::mutable_getprofilereq() {
  if (!has_getprofilereq()) {
    clear_cmd();
    set_has_getprofilereq();
    cmd_.getprofilereq_ = new ::OnvifCliMediaGetProfilesReq;
  }
  // @@protoc_insertion_point(field_mutable:OnvifCli.OnvifCliCmd.getProfileReq)
  return cmd_.getprofilereq_;
}
::OnvifCliMediaGetProfilesReq* OnvifCliCmd::release_getprofilereq() {
  // @@protoc_insertion_point(field_release:OnvifCli.OnvifCliCmd.getProfileReq)
  if (has_getprofilereq()) {
    clear_has_cmd();
    ::OnvifCliMediaGetProfilesReq* temp = cmd_.getprofilereq_;
    cmd_.getprofilereq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void OnvifCliCmd::set_allocated_getprofilereq(::OnvifCliMediaGetProfilesReq* getprofilereq) {
  clear_cmd();
  if (getprofilereq) {
    set_has_getprofilereq();
    cmd_.getprofilereq_ = getprofilereq;
  }
  // @@protoc_insertion_point(field_set_allocated:OnvifCli.OnvifCliCmd.getProfileReq)
}

// .OnvifCliMediaGetProfilesResp getProfileResp = 5;
bool OnvifCliCmd::has_getprofileresp() const {
  return cmd_case() == kGetProfileResp;
}
void OnvifCliCmd::set_has_getprofileresp() {
  _oneof_case_[0] = kGetProfileResp;
}
void OnvifCliCmd::clear_getprofileresp() {
  if (has_getprofileresp()) {
    delete cmd_.getprofileresp_;
    clear_has_cmd();
  }
}
 const ::OnvifCliMediaGetProfilesResp& OnvifCliCmd::getprofileresp() const {
  // @@protoc_insertion_point(field_get:OnvifCli.OnvifCliCmd.getProfileResp)
  return has_getprofileresp()
      ? *cmd_.getprofileresp_
      : ::OnvifCliMediaGetProfilesResp::default_instance();
}
::OnvifCliMediaGetProfilesResp* OnvifCliCmd::mutable_getprofileresp() {
  if (!has_getprofileresp()) {
    clear_cmd();
    set_has_getprofileresp();
    cmd_.getprofileresp_ = new ::OnvifCliMediaGetProfilesResp;
  }
  // @@protoc_insertion_point(field_mutable:OnvifCli.OnvifCliCmd.getProfileResp)
  return cmd_.getprofileresp_;
}
::OnvifCliMediaGetProfilesResp* OnvifCliCmd::release_getprofileresp() {
  // @@protoc_insertion_point(field_release:OnvifCli.OnvifCliCmd.getProfileResp)
  if (has_getprofileresp()) {
    clear_has_cmd();
    ::OnvifCliMediaGetProfilesResp* temp = cmd_.getprofileresp_;
    cmd_.getprofileresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void OnvifCliCmd::set_allocated_getprofileresp(::OnvifCliMediaGetProfilesResp* getprofileresp) {
  clear_cmd();
  if (getprofileresp) {
    set_has_getprofileresp();
    cmd_.getprofileresp_ = getprofileresp;
  }
  // @@protoc_insertion_point(field_set_allocated:OnvifCli.OnvifCliCmd.getProfileResp)
}

// .OnvifCliPTZReq ptzReq = 6;
bool OnvifCliCmd::has_ptzreq() const {
  return cmd_case() == kPtzReq;
}
void OnvifCliCmd::set_has_ptzreq() {
  _oneof_case_[0] = kPtzReq;
}
void OnvifCliCmd::clear_ptzreq() {
  if (has_ptzreq()) {
    delete cmd_.ptzreq_;
    clear_has_cmd();
  }
}
 const ::OnvifCliPTZReq& OnvifCliCmd::ptzreq() const {
  // @@protoc_insertion_point(field_get:OnvifCli.OnvifCliCmd.ptzReq)
  return has_ptzreq()
      ? *cmd_.ptzreq_
      : ::OnvifCliPTZReq::default_instance();
}
::OnvifCliPTZReq* OnvifCliCmd::mutable_ptzreq() {
  if (!has_ptzreq()) {
    clear_cmd();
    set_has_ptzreq();
    cmd_.ptzreq_ = new ::OnvifCliPTZReq;
  }
  // @@protoc_insertion_point(field_mutable:OnvifCli.OnvifCliCmd.ptzReq)
  return cmd_.ptzreq_;
}
::OnvifCliPTZReq* OnvifCliCmd::release_ptzreq() {
  // @@protoc_insertion_point(field_release:OnvifCli.OnvifCliCmd.ptzReq)
  if (has_ptzreq()) {
    clear_has_cmd();
    ::OnvifCliPTZReq* temp = cmd_.ptzreq_;
    cmd_.ptzreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void OnvifCliCmd::set_allocated_ptzreq(::OnvifCliPTZReq* ptzreq) {
  clear_cmd();
  if (ptzreq) {
    set_has_ptzreq();
    cmd_.ptzreq_ = ptzreq;
  }
  // @@protoc_insertion_point(field_set_allocated:OnvifCli.OnvifCliCmd.ptzReq)
}

// .OnvifCliPTZResp ptzResp = 7;
bool OnvifCliCmd::has_ptzresp() const {
  return cmd_case() == kPtzResp;
}
void OnvifCliCmd::set_has_ptzresp() {
  _oneof_case_[0] = kPtzResp;
}
void OnvifCliCmd::clear_ptzresp() {
  if (has_ptzresp()) {
    delete cmd_.ptzresp_;
    clear_has_cmd();
  }
}
 const ::OnvifCliPTZResp& OnvifCliCmd::ptzresp() const {
  // @@protoc_insertion_point(field_get:OnvifCli.OnvifCliCmd.ptzResp)
  return has_ptzresp()
      ? *cmd_.ptzresp_
      : ::OnvifCliPTZResp::default_instance();
}
::OnvifCliPTZResp* OnvifCliCmd::mutable_ptzresp() {
  if (!has_ptzresp()) {
    clear_cmd();
    set_has_ptzresp();
    cmd_.ptzresp_ = new ::OnvifCliPTZResp;
  }
  // @@protoc_insertion_point(field_mutable:OnvifCli.OnvifCliCmd.ptzResp)
  return cmd_.ptzresp_;
}
::OnvifCliPTZResp* OnvifCliCmd::release_ptzresp() {
  // @@protoc_insertion_point(field_release:OnvifCli.OnvifCliCmd.ptzResp)
  if (has_ptzresp()) {
    clear_has_cmd();
    ::OnvifCliPTZResp* temp = cmd_.ptzresp_;
    cmd_.ptzresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void OnvifCliCmd::set_allocated_ptzresp(::OnvifCliPTZResp* ptzresp) {
  clear_cmd();
  if (ptzresp) {
    set_has_ptzresp();
    cmd_.ptzresp_ = ptzresp;
  }
  // @@protoc_insertion_point(field_set_allocated:OnvifCli.OnvifCliCmd.ptzResp)
}

bool OnvifCliCmd::has_cmd() const {
  return cmd_case() != CMD_NOT_SET;
}
void OnvifCliCmd::clear_has_cmd() {
  _oneof_case_[0] = CMD_NOT_SET;
}
OnvifCliCmd::CmdCase OnvifCliCmd::cmd_case() const {
  return OnvifCliCmd::CmdCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace OnvifCli

// @@protoc_insertion_point(global_scope)
