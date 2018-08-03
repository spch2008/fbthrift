/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/gen/module_types_h.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_types.h"

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace module2 {
class Struct;
class BigStruct;
} // module2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace module2 {
class Struct final : private apache::thrift::detail::st::ComparisonOperators<Struct> {
 public:

  Struct() {}
  // FragileConstructor for use in initialization lists only.
  Struct(apache::thrift::FragileConstructor,  ::module0::Struct first__arg,  ::module1::Struct second__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    first = arg.extract();
    __isset.first = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    second = arg.extract();
    __isset.second = true;
  }

  Struct(Struct&&) = default;

  Struct(const Struct&) = default;

  Struct& operator=(Struct&&) = default;

  Struct& operator=(const Struct&) = default;
  void __clear();
   ::module0::Struct first;
   ::module1::Struct second;

  struct __isset {
    bool first;
    bool second;
  } __isset = {};
  bool operator==(const Struct& rhs) const;
  bool operator<(const Struct& rhs) const;
  const  ::module0::Struct& get_first() const&;
   ::module0::Struct get_first() &&;

  template <typename T_Struct_first_struct_setter =  ::module0::Struct>
   ::module0::Struct& set_first(T_Struct_first_struct_setter&& first_) {
    first = std::forward<T_Struct_first_struct_setter>(first_);
    __isset.first = true;
    return first;
  }
  const  ::module1::Struct& get_second() const&;
   ::module1::Struct get_second() &&;

  template <typename T_Struct_second_struct_setter =  ::module1::Struct>
   ::module1::Struct& set_second(T_Struct_second_struct_setter&& second_) {
    second = std::forward<T_Struct_second_struct_setter>(second_);
    __isset.second = true;
    return second;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Struct >;
};

void swap(Struct& a, Struct& b);
extern template void Struct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Struct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Struct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t Struct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // module2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::module2::Struct>::clear( ::module2::Struct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::module2::Struct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::module2::Struct>::write(Protocol* proto,  ::module2::Struct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::module2::Struct>::read(Protocol* proto,  ::module2::Struct* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::module2::Struct>::serializedSize(Protocol const* proto,  ::module2::Struct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::module2::Struct>::serializedSizeZC(Protocol const* proto,  ::module2::Struct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace module2 {
class BigStruct final : private apache::thrift::detail::st::ComparisonOperators<BigStruct> {
 public:

  BigStruct() :
      id(0) {}
  // FragileConstructor for use in initialization lists only.
  BigStruct(apache::thrift::FragileConstructor,  ::module2::Struct s__arg, int32_t id__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    s = arg.extract();
    __isset.s = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    id = arg.extract();
    __isset.id = true;
  }

  BigStruct(BigStruct&&) = default;

  BigStruct(const BigStruct&) = default;

  BigStruct& operator=(BigStruct&&) = default;

  BigStruct& operator=(const BigStruct&) = default;
  void __clear();
   ::module2::Struct s;
  int32_t id;

  struct __isset {
    bool s;
    bool id;
  } __isset = {};
  bool operator==(const BigStruct& rhs) const;
  bool operator<(const BigStruct& rhs) const;
  const  ::module2::Struct& get_s() const&;
   ::module2::Struct get_s() &&;

  template <typename T_BigStruct_s_struct_setter =  ::module2::Struct>
   ::module2::Struct& set_s(T_BigStruct_s_struct_setter&& s_) {
    s = std::forward<T_BigStruct_s_struct_setter>(s_);
    __isset.s = true;
    return s;
  }

  int32_t get_id() const {
    return id;
  }

  int32_t& set_id(int32_t id_) {
    id = id_;
    __isset.id = true;
    return id;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< BigStruct >;
};

void swap(BigStruct& a, BigStruct& b);
extern template void BigStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t BigStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t BigStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void BigStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t BigStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t BigStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t BigStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // module2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::module2::BigStruct>::clear( ::module2::BigStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::module2::BigStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::module2::BigStruct>::write(Protocol* proto,  ::module2::BigStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::module2::BigStruct>::read(Protocol* proto,  ::module2::BigStruct* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::module2::BigStruct>::serializedSize(Protocol const* proto,  ::module2::BigStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::module2::BigStruct>::serializedSizeZC(Protocol const* proto,  ::module2::BigStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
