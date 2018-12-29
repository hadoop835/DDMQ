/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "consumerProxy_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace CarreraConsumer {


Message::~Message() throw() {
}


void Message::__set_key(const std::string& val) {
  this->key = val;
}

void Message::__set_value(const std::string& val) {
  this->value = val;
}

void Message::__set_tag(const std::string& val) {
  this->tag = val;
}

void Message::__set_offset(const int64_t val) {
  this->offset = val;
}

const char* Message::ascii_fingerprint = "5F9965D46A4F3845985AC0F9B81C3C69";
const uint8_t Message::binary_fingerprint[16] = {0x5F,0x99,0x65,0xD4,0x6A,0x4F,0x38,0x45,0x98,0x5A,0xC0,0xF9,0xB8,0x1C,0x3C,0x69};

uint32_t Message::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->key);
          this->__isset.key = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->tag);
          this->__isset.tag = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->offset);
          this->__isset.offset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Message::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Message");

  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->key);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->value);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tag", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->tag);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("offset", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->offset);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a.key, b.key);
  swap(a.value, b.value);
  swap(a.tag, b.tag);
  swap(a.offset, b.offset);
  swap(a.__isset, b.__isset);
}

Message::Message(const Message& other0) {
  key = other0.key;
  value = other0.value;
  tag = other0.tag;
  offset = other0.offset;
  __isset = other0.__isset;
}
Message& Message::operator=(const Message& other1) {
  key = other1.key;
  value = other1.value;
  tag = other1.tag;
  offset = other1.offset;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Message& obj) {
  using apache::thrift::to_string;
  out << "Message(";
  out << "key=" << to_string(obj.key);
  out << ", " << "value=" << to_string(obj.value);
  out << ", " << "tag=" << to_string(obj.tag);
  out << ", " << "offset=" << to_string(obj.offset);
  out << ")";
  return out;
}


Context::~Context() throw() {
}


void Context::__set_groupId(const std::string& val) {
  this->groupId = val;
}

void Context::__set_topic(const std::string& val) {
  this->topic = val;
}

void Context::__set_qid(const std::string& val) {
  this->qid = val;
}

const char* Context::ascii_fingerprint = "AB879940BD15B6B25691265F7384B271";
const uint8_t Context::binary_fingerprint[16] = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

uint32_t Context::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->groupId);
          this->__isset.groupId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->topic);
          this->__isset.topic = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->qid);
          this->__isset.qid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Context::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Context");

  xfer += oprot->writeFieldBegin("groupId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->groupId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("topic", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->topic);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("qid", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->qid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Context &a, Context &b) {
  using ::std::swap;
  swap(a.groupId, b.groupId);
  swap(a.topic, b.topic);
  swap(a.qid, b.qid);
  swap(a.__isset, b.__isset);
}

Context::Context(const Context& other2) {
  groupId = other2.groupId;
  topic = other2.topic;
  qid = other2.qid;
  __isset = other2.__isset;
}
Context& Context::operator=(const Context& other3) {
  groupId = other3.groupId;
  topic = other3.topic;
  qid = other3.qid;
  __isset = other3.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Context& obj) {
  using apache::thrift::to_string;
  out << "Context(";
  out << "groupId=" << to_string(obj.groupId);
  out << ", " << "topic=" << to_string(obj.topic);
  out << ", " << "qid=" << to_string(obj.qid);
  out << ")";
  return out;
}


FetchRequest::~FetchRequest() throw() {
}


void FetchRequest::__set_consumerId(const std::string& val) {
  this->consumerId = val;
}

void FetchRequest::__set_groupId(const std::string& val) {
  this->groupId = val;
}

void FetchRequest::__set_cluster(const std::string& val) {
  this->cluster = val;
}

void FetchRequest::__set_fetchOffset(const std::map<std::string, std::map<std::string, int64_t> > & val) {
  this->fetchOffset = val;
__isset.fetchOffset = true;
}

void FetchRequest::__set_maxBatchSize(const int32_t val) {
  this->maxBatchSize = val;
__isset.maxBatchSize = true;
}

void FetchRequest::__set_maxLingerTime(const int32_t val) {
  this->maxLingerTime = val;
__isset.maxLingerTime = true;
}

void FetchRequest::__set_version(const std::string& val) {
  this->version = val;
__isset.version = true;
}

const char* FetchRequest::ascii_fingerprint = "906773A8CD439B466BD075DB396E9FD4";
const uint8_t FetchRequest::binary_fingerprint[16] = {0x90,0x67,0x73,0xA8,0xCD,0x43,0x9B,0x46,0x6B,0xD0,0x75,0xDB,0x39,0x6E,0x9F,0xD4};

uint32_t FetchRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_consumerId = false;
  bool isset_groupId = false;
  bool isset_cluster = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->consumerId);
          isset_consumerId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->groupId);
          isset_groupId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->cluster);
          isset_cluster = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->fetchOffset.clear();
            uint32_t _size4;
            ::apache::thrift::protocol::TType _ktype5;
            ::apache::thrift::protocol::TType _vtype6;
            xfer += iprot->readMapBegin(_ktype5, _vtype6, _size4);
            uint32_t _i8;
            for (_i8 = 0; _i8 < _size4; ++_i8)
            {
              std::string _key9;
              xfer += iprot->readString(_key9);
              std::map<std::string, int64_t> & _val10 = this->fetchOffset[_key9];
              {
                _val10.clear();
                uint32_t _size11;
                ::apache::thrift::protocol::TType _ktype12;
                ::apache::thrift::protocol::TType _vtype13;
                xfer += iprot->readMapBegin(_ktype12, _vtype13, _size11);
                uint32_t _i15;
                for (_i15 = 0; _i15 < _size11; ++_i15)
                {
                  std::string _key16;
                  xfer += iprot->readString(_key16);
                  int64_t& _val17 = _val10[_key16];
                  xfer += iprot->readI64(_val17);
                }
                xfer += iprot->readMapEnd();
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fetchOffset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->maxBatchSize);
          this->__isset.maxBatchSize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->maxLingerTime);
          this->__isset.maxLingerTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 60:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->version);
          this->__isset.version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_consumerId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_groupId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_cluster)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t FetchRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("FetchRequest");

  xfer += oprot->writeFieldBegin("consumerId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->consumerId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("groupId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->groupId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cluster", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->cluster);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.fetchOffset) {
    xfer += oprot->writeFieldBegin("fetchOffset", ::apache::thrift::protocol::T_MAP, 4);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_MAP, static_cast<uint32_t>(this->fetchOffset.size()));
      std::map<std::string, std::map<std::string, int64_t> > ::const_iterator _iter18;
      for (_iter18 = this->fetchOffset.begin(); _iter18 != this->fetchOffset.end(); ++_iter18)
      {
        xfer += oprot->writeString(_iter18->first);
        {
          xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_I64, static_cast<uint32_t>(_iter18->second.size()));
          std::map<std::string, int64_t> ::const_iterator _iter19;
          for (_iter19 = _iter18->second.begin(); _iter19 != _iter18->second.end(); ++_iter19)
          {
            xfer += oprot->writeString(_iter19->first);
            xfer += oprot->writeI64(_iter19->second);
          }
          xfer += oprot->writeMapEnd();
        }
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.maxBatchSize) {
    xfer += oprot->writeFieldBegin("maxBatchSize", ::apache::thrift::protocol::T_I32, 10);
    xfer += oprot->writeI32(this->maxBatchSize);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.maxLingerTime) {
    xfer += oprot->writeFieldBegin("maxLingerTime", ::apache::thrift::protocol::T_I32, 11);
    xfer += oprot->writeI32(this->maxLingerTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.version) {
    xfer += oprot->writeFieldBegin("version", ::apache::thrift::protocol::T_STRING, 60);
    xfer += oprot->writeString(this->version);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(FetchRequest &a, FetchRequest &b) {
  using ::std::swap;
  swap(a.consumerId, b.consumerId);
  swap(a.groupId, b.groupId);
  swap(a.cluster, b.cluster);
  swap(a.fetchOffset, b.fetchOffset);
  swap(a.maxBatchSize, b.maxBatchSize);
  swap(a.maxLingerTime, b.maxLingerTime);
  swap(a.version, b.version);
  swap(a.__isset, b.__isset);
}

FetchRequest::FetchRequest(const FetchRequest& other20) {
  consumerId = other20.consumerId;
  groupId = other20.groupId;
  cluster = other20.cluster;
  fetchOffset = other20.fetchOffset;
  maxBatchSize = other20.maxBatchSize;
  maxLingerTime = other20.maxLingerTime;
  version = other20.version;
  __isset = other20.__isset;
}
FetchRequest& FetchRequest::operator=(const FetchRequest& other21) {
  consumerId = other21.consumerId;
  groupId = other21.groupId;
  cluster = other21.cluster;
  fetchOffset = other21.fetchOffset;
  maxBatchSize = other21.maxBatchSize;
  maxLingerTime = other21.maxLingerTime;
  version = other21.version;
  __isset = other21.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const FetchRequest& obj) {
  using apache::thrift::to_string;
  out << "FetchRequest(";
  out << "consumerId=" << to_string(obj.consumerId);
  out << ", " << "groupId=" << to_string(obj.groupId);
  out << ", " << "cluster=" << to_string(obj.cluster);
  out << ", " << "fetchOffset="; (obj.__isset.fetchOffset ? (out << to_string(obj.fetchOffset)) : (out << "<null>"));
  out << ", " << "maxBatchSize="; (obj.__isset.maxBatchSize ? (out << to_string(obj.maxBatchSize)) : (out << "<null>"));
  out << ", " << "maxLingerTime="; (obj.__isset.maxLingerTime ? (out << to_string(obj.maxLingerTime)) : (out << "<null>"));
  out << ", " << "version="; (obj.__isset.version ? (out << to_string(obj.version)) : (out << "<null>"));
  out << ")";
  return out;
}


QidResponse::~QidResponse() throw() {
}


void QidResponse::__set_topic(const std::string& val) {
  this->topic = val;
}

void QidResponse::__set_qid(const std::string& val) {
  this->qid = val;
}

void QidResponse::__set_nextRequestOffset(const int64_t val) {
  this->nextRequestOffset = val;
__isset.nextRequestOffset = true;
}

void QidResponse::__set_messages(const std::vector<Message> & val) {
  this->messages = val;
}

const char* QidResponse::ascii_fingerprint = "D27932A420DED5C23617C48CBE8CC55E";
const uint8_t QidResponse::binary_fingerprint[16] = {0xD2,0x79,0x32,0xA4,0x20,0xDE,0xD5,0xC2,0x36,0x17,0xC4,0x8C,0xBE,0x8C,0xC5,0x5E};

uint32_t QidResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_topic = false;
  bool isset_qid = false;
  bool isset_messages = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->topic);
          isset_topic = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->qid);
          isset_qid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->nextRequestOffset);
          this->__isset.nextRequestOffset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->messages.clear();
            uint32_t _size22;
            ::apache::thrift::protocol::TType _etype25;
            xfer += iprot->readListBegin(_etype25, _size22);
            this->messages.resize(_size22);
            uint32_t _i26;
            for (_i26 = 0; _i26 < _size22; ++_i26)
            {
              xfer += this->messages[_i26].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_messages = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_topic)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_qid)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_messages)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t QidResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("QidResponse");

  xfer += oprot->writeFieldBegin("topic", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->topic);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("qid", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->qid);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.nextRequestOffset) {
    xfer += oprot->writeFieldBegin("nextRequestOffset", ::apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->nextRequestOffset);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("messages", ::apache::thrift::protocol::T_LIST, 10);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->messages.size()));
    std::vector<Message> ::const_iterator _iter27;
    for (_iter27 = this->messages.begin(); _iter27 != this->messages.end(); ++_iter27)
    {
      xfer += (*_iter27).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(QidResponse &a, QidResponse &b) {
  using ::std::swap;
  swap(a.topic, b.topic);
  swap(a.qid, b.qid);
  swap(a.nextRequestOffset, b.nextRequestOffset);
  swap(a.messages, b.messages);
  swap(a.__isset, b.__isset);
}

QidResponse::QidResponse(const QidResponse& other28) {
  topic = other28.topic;
  qid = other28.qid;
  nextRequestOffset = other28.nextRequestOffset;
  messages = other28.messages;
  __isset = other28.__isset;
}
QidResponse& QidResponse::operator=(const QidResponse& other29) {
  topic = other29.topic;
  qid = other29.qid;
  nextRequestOffset = other29.nextRequestOffset;
  messages = other29.messages;
  __isset = other29.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const QidResponse& obj) {
  using apache::thrift::to_string;
  out << "QidResponse(";
  out << "topic=" << to_string(obj.topic);
  out << ", " << "qid=" << to_string(obj.qid);
  out << ", " << "nextRequestOffset="; (obj.__isset.nextRequestOffset ? (out << to_string(obj.nextRequestOffset)) : (out << "<null>"));
  out << ", " << "messages=" << to_string(obj.messages);
  out << ")";
  return out;
}


FetchResponse::~FetchResponse() throw() {
}


void FetchResponse::__set_code(const int32_t val) {
  this->code = val;
__isset.code = true;
}

void FetchResponse::__set_results(const std::vector<QidResponse> & val) {
  this->results = val;
}

const char* FetchResponse::ascii_fingerprint = "B56E50C806471F5271B7B3E2704047F5";
const uint8_t FetchResponse::binary_fingerprint[16] = {0xB5,0x6E,0x50,0xC8,0x06,0x47,0x1F,0x52,0x71,0xB7,0xB3,0xE2,0x70,0x40,0x47,0xF5};

uint32_t FetchResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_results = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->code);
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->results.clear();
            uint32_t _size30;
            ::apache::thrift::protocol::TType _etype33;
            xfer += iprot->readListBegin(_etype33, _size30);
            this->results.resize(_size30);
            uint32_t _i34;
            for (_i34 = 0; _i34 < _size30; ++_i34)
            {
              xfer += this->results[_i34].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_results = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_results)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t FetchResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("FetchResponse");

  if (this->__isset.code) {
    xfer += oprot->writeFieldBegin("code", ::apache::thrift::protocol::T_I32, 1);
    xfer += oprot->writeI32(this->code);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("results", ::apache::thrift::protocol::T_LIST, 10);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->results.size()));
    std::vector<QidResponse> ::const_iterator _iter35;
    for (_iter35 = this->results.begin(); _iter35 != this->results.end(); ++_iter35)
    {
      xfer += (*_iter35).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(FetchResponse &a, FetchResponse &b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.results, b.results);
  swap(a.__isset, b.__isset);
}

FetchResponse::FetchResponse(const FetchResponse& other36) {
  code = other36.code;
  results = other36.results;
  __isset = other36.__isset;
}
FetchResponse& FetchResponse::operator=(const FetchResponse& other37) {
  code = other37.code;
  results = other37.results;
  __isset = other37.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const FetchResponse& obj) {
  using apache::thrift::to_string;
  out << "FetchResponse(";
  out << "code="; (obj.__isset.code ? (out << to_string(obj.code)) : (out << "<null>"));
  out << ", " << "results=" << to_string(obj.results);
  out << ")";
  return out;
}


AckResult::~AckResult() throw() {
}


void AckResult::__set_consumerId(const std::string& val) {
  this->consumerId = val;
}

void AckResult::__set_groupId(const std::string& val) {
  this->groupId = val;
}

void AckResult::__set_cluster(const std::string& val) {
  this->cluster = val;
}

void AckResult::__set_offsets(const std::map<std::string, std::map<std::string, int64_t> > & val) {
  this->offsets = val;
}

const char* AckResult::ascii_fingerprint = "3F9AC3B359E37DC260749F3B0D4910E4";
const uint8_t AckResult::binary_fingerprint[16] = {0x3F,0x9A,0xC3,0xB3,0x59,0xE3,0x7D,0xC2,0x60,0x74,0x9F,0x3B,0x0D,0x49,0x10,0xE4};

uint32_t AckResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_consumerId = false;
  bool isset_groupId = false;
  bool isset_cluster = false;
  bool isset_offsets = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->consumerId);
          isset_consumerId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->groupId);
          isset_groupId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->cluster);
          isset_cluster = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->offsets.clear();
            uint32_t _size38;
            ::apache::thrift::protocol::TType _ktype39;
            ::apache::thrift::protocol::TType _vtype40;
            xfer += iprot->readMapBegin(_ktype39, _vtype40, _size38);
            uint32_t _i42;
            for (_i42 = 0; _i42 < _size38; ++_i42)
            {
              std::string _key43;
              xfer += iprot->readString(_key43);
              std::map<std::string, int64_t> & _val44 = this->offsets[_key43];
              {
                _val44.clear();
                uint32_t _size45;
                ::apache::thrift::protocol::TType _ktype46;
                ::apache::thrift::protocol::TType _vtype47;
                xfer += iprot->readMapBegin(_ktype46, _vtype47, _size45);
                uint32_t _i49;
                for (_i49 = 0; _i49 < _size45; ++_i49)
                {
                  std::string _key50;
                  xfer += iprot->readString(_key50);
                  int64_t& _val51 = _val44[_key50];
                  xfer += iprot->readI64(_val51);
                }
                xfer += iprot->readMapEnd();
              }
            }
            xfer += iprot->readMapEnd();
          }
          isset_offsets = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_consumerId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_groupId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_cluster)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_offsets)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t AckResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("AckResult");

  xfer += oprot->writeFieldBegin("consumerId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->consumerId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("groupId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->groupId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cluster", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->cluster);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("offsets", ::apache::thrift::protocol::T_MAP, 4);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_MAP, static_cast<uint32_t>(this->offsets.size()));
    std::map<std::string, std::map<std::string, int64_t> > ::const_iterator _iter52;
    for (_iter52 = this->offsets.begin(); _iter52 != this->offsets.end(); ++_iter52)
    {
      xfer += oprot->writeString(_iter52->first);
      {
        xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_I64, static_cast<uint32_t>(_iter52->second.size()));
        std::map<std::string, int64_t> ::const_iterator _iter53;
        for (_iter53 = _iter52->second.begin(); _iter53 != _iter52->second.end(); ++_iter53)
        {
          xfer += oprot->writeString(_iter53->first);
          xfer += oprot->writeI64(_iter53->second);
        }
        xfer += oprot->writeMapEnd();
      }
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(AckResult &a, AckResult &b) {
  using ::std::swap;
  swap(a.consumerId, b.consumerId);
  swap(a.groupId, b.groupId);
  swap(a.cluster, b.cluster);
  swap(a.offsets, b.offsets);
}

AckResult::AckResult(const AckResult& other54) {
  consumerId = other54.consumerId;
  groupId = other54.groupId;
  cluster = other54.cluster;
  offsets = other54.offsets;
}
AckResult& AckResult::operator=(const AckResult& other55) {
  consumerId = other55.consumerId;
  groupId = other55.groupId;
  cluster = other55.cluster;
  offsets = other55.offsets;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const AckResult& obj) {
  using apache::thrift::to_string;
  out << "AckResult(";
  out << "consumerId=" << to_string(obj.consumerId);
  out << ", " << "groupId=" << to_string(obj.groupId);
  out << ", " << "cluster=" << to_string(obj.cluster);
  out << ", " << "offsets=" << to_string(obj.offsets);
  out << ")";
  return out;
}

} // namespace