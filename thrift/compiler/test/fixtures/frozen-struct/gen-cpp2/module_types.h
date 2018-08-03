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

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include1_types.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_types.h"

// BEGIN declare_enums
namespace some { namespace ns {

enum class EnumB {
  EMPTY = 1
};

using _EnumB_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<EnumB, EnumB>;
extern const _EnumB_EnumMapFactory::ValuesToNamesMapType _EnumB_VALUES_TO_NAMES;
extern const _EnumB_EnumMapFactory::NamesToValuesMapType _EnumB_NAMES_TO_VALUES;



}} // some::ns
namespace std {


template<> struct hash<typename  ::some::ns::EnumB> : public apache::thrift::detail::enum_hash<typename  ::some::ns::EnumB> {};
template<> struct equal_to<typename  ::some::ns::EnumB> : public apache::thrift::detail::enum_equal_to<typename  ::some::ns::EnumB> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::some::ns::EnumB>;
#ifndef _MSC_VER
template <> const std::size_t TEnumTraits< ::some::ns::EnumB>::size;
template <> const folly::Range<const  ::some::ns::EnumB*> TEnumTraits< ::some::ns::EnumB>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::some::ns::EnumB>::names;
#endif
template <> const char* TEnumTraits< ::some::ns::EnumB>::findName( ::some::ns::EnumB value);
template <> bool TEnumTraits< ::some::ns::EnumB>::findValue(const char* name,  ::some::ns::EnumB* outValue);

template <> inline constexpr  ::some::ns::EnumB TEnumTraits< ::some::ns::EnumB>::min() {
  return  ::some::ns::EnumB::EMPTY;
}

template <> inline constexpr  ::some::ns::EnumB TEnumTraits< ::some::ns::EnumB>::max() {
  return  ::some::ns::EnumB::EMPTY;
}


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace some { namespace ns {
class ModuleA;
class ModuleB;
}} // some::ns
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace some { namespace ns {
class ModuleA final : private apache::thrift::detail::st::ComparisonOperators<ModuleA> {
 public:

  ModuleA();

  // FragileConstructor for use in initialization lists only.
  ModuleA(apache::thrift::FragileConstructor, int32_t i32Field__arg, std::string strField__arg, std::vector<int16_t> listField__arg, std::map<std::string, int32_t> mapField__arg,  ::some::ns::IncludedA inclAField__arg,  ::some::ns::IncludedB inclBField__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    i32Field = arg.extract();
    __isset.i32Field = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    strField = arg.extract();
    __isset.strField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    listField = arg.extract();
    __isset.listField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    mapField = arg.extract();
    __isset.mapField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<5, _T> arg) {
    inclAField = arg.extract();
    __isset.inclAField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<6, _T> arg) {
    inclBField = arg.extract();
    __isset.inclBField = true;
  }

  ModuleA(ModuleA&&) = default;

  ModuleA(const ModuleA&) = default;

  ModuleA& operator=(ModuleA&&) = default;

  ModuleA& operator=(const ModuleA&) = default;
  void __clear();

  ~ModuleA();

  int32_t i32Field;
  std::string strField;
  std::vector<int16_t> listField;
  std::map<std::string, int32_t> mapField;
   ::some::ns::IncludedA inclAField;
   ::some::ns::IncludedB inclBField;

  struct __isset {
    bool i32Field;
    bool strField;
    bool listField;
    bool mapField;
    bool inclAField;
    bool inclBField;
  } __isset = {};
  bool operator==(const ModuleA& rhs) const;
  bool operator<(const ModuleA& rhs) const;

  int32_t get_i32Field() const {
    return i32Field;
  }

  int32_t& set_i32Field(int32_t i32Field_) {
    i32Field = i32Field_;
    __isset.i32Field = true;
    return i32Field;
  }

  const std::string& get_strField() const& {
    return strField;
  }

  std::string get_strField() && {
    return std::move(strField);
  }

  template <typename T_ModuleA_strField_struct_setter = std::string>
  std::string& set_strField(T_ModuleA_strField_struct_setter&& strField_) {
    strField = std::forward<T_ModuleA_strField_struct_setter>(strField_);
    __isset.strField = true;
    return strField;
  }
  const std::vector<int16_t>& get_listField() const&;
  std::vector<int16_t> get_listField() &&;

  template <typename T_ModuleA_listField_struct_setter = std::vector<int16_t>>
  std::vector<int16_t>& set_listField(T_ModuleA_listField_struct_setter&& listField_) {
    listField = std::forward<T_ModuleA_listField_struct_setter>(listField_);
    __isset.listField = true;
    return listField;
  }
  const std::map<std::string, int32_t>& get_mapField() const&;
  std::map<std::string, int32_t> get_mapField() &&;

  template <typename T_ModuleA_mapField_struct_setter = std::map<std::string, int32_t>>
  std::map<std::string, int32_t>& set_mapField(T_ModuleA_mapField_struct_setter&& mapField_) {
    mapField = std::forward<T_ModuleA_mapField_struct_setter>(mapField_);
    __isset.mapField = true;
    return mapField;
  }
  const  ::some::ns::IncludedA& get_inclAField() const&;
   ::some::ns::IncludedA get_inclAField() &&;

  template <typename T_ModuleA_inclAField_struct_setter =  ::some::ns::IncludedA>
   ::some::ns::IncludedA& set_inclAField(T_ModuleA_inclAField_struct_setter&& inclAField_) {
    inclAField = std::forward<T_ModuleA_inclAField_struct_setter>(inclAField_);
    __isset.inclAField = true;
    return inclAField;
  }
  const  ::some::ns::IncludedB& get_inclBField() const&;
   ::some::ns::IncludedB get_inclBField() &&;

  template <typename T_ModuleA_inclBField_struct_setter =  ::some::ns::IncludedB>
   ::some::ns::IncludedB& set_inclBField(T_ModuleA_inclBField_struct_setter&& inclBField_) {
    inclBField = std::forward<T_ModuleA_inclBField_struct_setter>(inclBField_);
    __isset.inclBField = true;
    return inclBField;
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

  friend class ::apache::thrift::Cpp2Ops< ModuleA >;
};

void swap(ModuleA& a, ModuleA& b);
extern template void ModuleA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void ModuleA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t ModuleA::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::ModuleA>::clear( ::some::ns::ModuleA* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::ModuleA>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleA>::write(Protocol* proto,  ::some::ns::ModuleA const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::some::ns::ModuleA>::read(Protocol* proto,  ::some::ns::ModuleA* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleA>::serializedSize(Protocol const* proto,  ::some::ns::ModuleA const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleA>::serializedSizeZC(Protocol const* proto,  ::some::ns::ModuleA const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace some { namespace ns {
class ModuleB final : private apache::thrift::detail::st::ComparisonOperators<ModuleB> {
 public:

  ModuleB() :
      i32Field(0),
      inclEnumB(static_cast< ::some::ns::EnumB>(0)) {}
  // FragileConstructor for use in initialization lists only.
  ModuleB(apache::thrift::FragileConstructor, int32_t i32Field__arg,  ::some::ns::EnumB inclEnumB__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    i32Field = arg.extract();
    __isset.i32Field = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    inclEnumB = arg.extract();
    __isset.inclEnumB = true;
  }

  ModuleB(ModuleB&&) = default;

  ModuleB(const ModuleB&) = default;

  ModuleB& operator=(ModuleB&&) = default;

  ModuleB& operator=(const ModuleB&) = default;
  void __clear();
  int32_t i32Field;
   ::some::ns::EnumB inclEnumB;

  struct __isset {
    bool i32Field;
    bool inclEnumB;
  } __isset = {};
  bool operator==(const ModuleB& rhs) const;
  bool operator<(const ModuleB& rhs) const;

  int32_t get_i32Field() const {
    return i32Field;
  }

  int32_t& set_i32Field(int32_t i32Field_) {
    i32Field = i32Field_;
    __isset.i32Field = true;
    return i32Field;
  }

   ::some::ns::EnumB get_inclEnumB() const {
    return inclEnumB;
  }

   ::some::ns::EnumB& set_inclEnumB( ::some::ns::EnumB inclEnumB_) {
    inclEnumB = inclEnumB_;
    __isset.inclEnumB = true;
    return inclEnumB;
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

  friend class ::apache::thrift::Cpp2Ops< ModuleB >;
};

void swap(ModuleB& a, ModuleB& b);
extern template void ModuleB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void ModuleB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t ModuleB::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::ModuleB>::clear( ::some::ns::ModuleB* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::ModuleB>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleB>::write(Protocol* proto,  ::some::ns::ModuleB const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::some::ns::ModuleB>::read(Protocol* proto,  ::some::ns::ModuleB* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleB>::serializedSize(Protocol const* proto,  ::some::ns::ModuleB const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleB>::serializedSizeZC(Protocol const* proto,  ::some::ns::ModuleB const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
