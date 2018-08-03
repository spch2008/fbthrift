/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/Optional.h>
#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/gen/module_types_h.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums
namespace cpp2 {

enum class Animal {
  DOG = 1,
  CAT = 2,
  TARANTULA = 3
};

using _Animal_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Animal, Animal>;
extern const _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES;
extern const _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES;



} // cpp2
namespace std {


template<> struct hash<typename  ::cpp2::Animal> : public apache::thrift::detail::enum_hash<typename  ::cpp2::Animal> {};
template<> struct equal_to<typename  ::cpp2::Animal> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::Animal> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::cpp2::Animal>;
#ifndef _MSC_VER
template <> const std::size_t TEnumTraits< ::cpp2::Animal>::size;
template <> const folly::Range<const  ::cpp2::Animal*> TEnumTraits< ::cpp2::Animal>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::cpp2::Animal>::names;
#endif
template <> const char* TEnumTraits< ::cpp2::Animal>::findName( ::cpp2::Animal value);
template <> bool TEnumTraits< ::cpp2::Animal>::findValue(const char* name,  ::cpp2::Animal* outValue);

template <> inline constexpr  ::cpp2::Animal TEnumTraits< ::cpp2::Animal>::min() {
  return  ::cpp2::Animal::DOG;
}

template <> inline constexpr  ::cpp2::Animal TEnumTraits< ::cpp2::Animal>::max() {
  return  ::cpp2::Animal::TARANTULA;
}


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Color;
class Vehicle;
class Person;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef int64_t PersonID;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Color final : private apache::thrift::detail::st::ComparisonOperators<Color> {
 public:

  Color() :
      red(0),
      green(0),
      blue(0),
      alpha(0) {}
  // FragileConstructor for use in initialization lists only.
  Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    red = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    green = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    blue = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    alpha = arg.extract();
  }

  Color(Color&&) = default;

  Color(const Color&) = default;

  Color& operator=(Color&&) = default;

  Color& operator=(const Color&) = default;
  void __clear();
  double red;
  double green;
  double blue;
  double alpha;
  bool operator==(const Color& rhs) const;
  bool operator<(const Color& rhs) const;

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

  friend class ::apache::thrift::Cpp2Ops< Color >;
};

void swap(Color& a, Color& b);
extern template void Color::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Color::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t Color::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Color>::clear( ::cpp2::Color* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Color>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Color>::write(Protocol* proto,  ::cpp2::Color const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::Color>::read(Protocol* proto,  ::cpp2::Color* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Color>::serializedSize(Protocol const* proto,  ::cpp2::Color const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Color>::serializedSizeZC(Protocol const* proto,  ::cpp2::Color const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {
class Vehicle final : private apache::thrift::detail::st::ComparisonOperators<Vehicle> {
 public:

  Vehicle();

  // FragileConstructor for use in initialization lists only.
  Vehicle(apache::thrift::FragileConstructor,  ::cpp2::Color color__arg, std::string licensePlate__arg, std::string description__arg, std::string name__arg, bool hasAC__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    color = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    licensePlate = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    description = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    name = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<5, _T> arg) {
    hasAC = arg.extract();
  }

  Vehicle(Vehicle&&) = default;

  Vehicle(const Vehicle&) = default;

  Vehicle& operator=(Vehicle&&) = default;

  Vehicle& operator=(const Vehicle&) = default;
  void __clear();

  ~Vehicle();

   ::cpp2::Color color;
  folly::Optional<std::string> licensePlate;
  folly::Optional<std::string> description;
  folly::Optional<std::string> name;
  folly::Optional<bool> hasAC;
  bool operator==(const Vehicle& rhs) const;
  bool operator<(const Vehicle& rhs) const;

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

  friend class ::apache::thrift::Cpp2Ops< Vehicle >;
};

void swap(Vehicle& a, Vehicle& b);
extern template void Vehicle::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Vehicle::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t Vehicle::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Vehicle>::clear( ::cpp2::Vehicle* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Vehicle>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Vehicle>::write(Protocol* proto,  ::cpp2::Vehicle const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::Vehicle>::read(Protocol* proto,  ::cpp2::Vehicle* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Vehicle>::serializedSize(Protocol const* proto,  ::cpp2::Vehicle const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Vehicle>::serializedSizeZC(Protocol const* proto,  ::cpp2::Vehicle const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {
class Person final : private apache::thrift::detail::st::ComparisonOperators<Person> {
 public:

  Person();

  // FragileConstructor for use in initialization lists only.
  Person(apache::thrift::FragileConstructor,  ::cpp2::PersonID id__arg, std::string name__arg, int16_t age__arg, std::string address__arg,  ::cpp2::Color favoriteColor__arg, std::set< ::cpp2::PersonID> friends__arg,  ::cpp2::PersonID bestFriend__arg, std::map< ::cpp2::Animal, std::string> petNames__arg,  ::cpp2::Animal afraidOfAnimal__arg, std::vector< ::cpp2::Vehicle> vehicles__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    id = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    name = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    age = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    address = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<5, _T> arg) {
    favoriteColor = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<6, _T> arg) {
    friends = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<7, _T> arg) {
    bestFriend = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<8, _T> arg) {
    petNames = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<9, _T> arg) {
    afraidOfAnimal = arg.extract();
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<10, _T> arg) {
    vehicles = arg.extract();
  }

  Person(Person&&) = default;

  Person(const Person&) = default;

  Person& operator=(Person&&) = default;

  Person& operator=(const Person&) = default;
  void __clear();

  ~Person();

   ::cpp2::PersonID id;
  std::string name;
  folly::Optional<int16_t> age;
  folly::Optional<std::string> address;
  folly::Optional< ::cpp2::Color> favoriteColor;
  folly::Optional<std::set< ::cpp2::PersonID>> friends;
  folly::Optional< ::cpp2::PersonID> bestFriend;
  folly::Optional<std::map< ::cpp2::Animal, std::string>> petNames;
  folly::Optional< ::cpp2::Animal> afraidOfAnimal;
  folly::Optional<std::vector< ::cpp2::Vehicle>> vehicles;
  bool operator==(const Person& rhs) const;
  bool operator<(const Person& rhs) const;

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

  friend class ::apache::thrift::Cpp2Ops< Person >;
};

void swap(Person& a, Person& b);
extern template void Person::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Person::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t Person::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Person>::clear( ::cpp2::Person* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Person>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Person>::write(Protocol* proto,  ::cpp2::Person const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::Person>::read(Protocol* proto,  ::cpp2::Person* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Person>::serializedSize(Protocol const* proto,  ::cpp2::Person const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Person>::serializedSizeZC(Protocol const* proto,  ::cpp2::Person const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
