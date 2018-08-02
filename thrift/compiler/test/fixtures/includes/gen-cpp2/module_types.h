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

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class MyStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class MyStruct final : private apache::thrift::detail::st::ComparisonOperators<MyStruct> {
 public:

  MyStruct() :
      MyIncludedField(::apache::thrift::detail::make_constant< ::cpp2::Included>(::apache::thrift::detail::wrap_argument<1>(2LL), ::apache::thrift::detail::wrap_argument<2>(::apache::thrift::detail::make_constant< ::cpp2::Foo>(::apache::thrift::detail::wrap_argument<1>(2LL))))),
      MyIncludedInt(42LL) {}
  // FragileConstructor for use in initialization lists only.
  MyStruct(apache::thrift::FragileConstructor,  ::cpp2::Included MyIncludedField__arg,  ::cpp2::Included MyOtherIncludedField__arg,  ::cpp2::IncludedInt64 MyIncludedInt__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    MyIncludedField = arg.extract();
    __isset.MyIncludedField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    MyOtherIncludedField = arg.extract();
    __isset.MyOtherIncludedField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    MyIncludedInt = arg.extract();
    __isset.MyIncludedInt = true;
  }

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;

  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();
   ::cpp2::Included MyIncludedField;
   ::cpp2::Included MyOtherIncludedField;
   ::cpp2::IncludedInt64 MyIncludedInt;

  struct __isset {
    bool MyIncludedField;
    bool MyOtherIncludedField;
    bool MyIncludedInt;
  } __isset = {};
  bool operator==(const MyStruct& rhs) const;
  bool operator<(const MyStruct& rhs) const;
  const  ::cpp2::Included& get_MyIncludedField() const&;
   ::cpp2::Included get_MyIncludedField() &&;

  template <typename T_MyStruct_MyIncludedField_struct_setter =  ::cpp2::Included>
   ::cpp2::Included& set_MyIncludedField(T_MyStruct_MyIncludedField_struct_setter&& MyIncludedField_) {
    MyIncludedField = std::forward<T_MyStruct_MyIncludedField_struct_setter>(MyIncludedField_);
    __isset.MyIncludedField = true;
    return MyIncludedField;
  }
  const  ::cpp2::Included& get_MyOtherIncludedField() const&;
   ::cpp2::Included get_MyOtherIncludedField() &&;

  template <typename T_MyStruct_MyOtherIncludedField_struct_setter =  ::cpp2::Included>
   ::cpp2::Included& set_MyOtherIncludedField(T_MyStruct_MyOtherIncludedField_struct_setter&& MyOtherIncludedField_) {
    MyOtherIncludedField = std::forward<T_MyStruct_MyOtherIncludedField_struct_setter>(MyOtherIncludedField_);
    __isset.MyOtherIncludedField = true;
    return MyOtherIncludedField;
  }

   ::cpp2::IncludedInt64 get_MyIncludedInt() const {
    return MyIncludedInt;
  }

   ::cpp2::IncludedInt64& set_MyIncludedInt( ::cpp2::IncludedInt64 MyIncludedInt_) {
    MyIncludedInt = MyIncludedInt_;
    __isset.MyIncludedInt = true;
    return MyIncludedInt;
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

  friend class ::apache::thrift::Cpp2Ops< MyStruct >;
};

void swap(MyStruct& a, MyStruct& b);
extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyStruct>::clear( ::cpp2::MyStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::write(Protocol* proto,  ::cpp2::MyStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::MyStruct>::read(Protocol* proto,  ::cpp2::MyStruct* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSize(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
