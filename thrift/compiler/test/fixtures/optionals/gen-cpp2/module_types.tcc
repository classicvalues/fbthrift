/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>

namespace cpp2 {

} // cpp2
namespace std {

} // std


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::Color> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::Vehicle> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::Person> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void Color::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_red:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::floating_point, double>::readWithContext(*iprot, this->red, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.red = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_green:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::floating_point, double>::readWithContext(*iprot, this->green, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.green = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_blue:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::floating_point, double>::readWithContext(*iprot, this->blue, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.blue = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_alpha:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::floating_point, double>::readWithContext(*iprot, this->alpha, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.alpha = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Color>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_red;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_green;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_blue;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_alpha;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Color::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Color");
  xfer += prot_->serializedFieldSize("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->serializedSizeDouble(this->red);
  xfer += prot_->serializedFieldSize("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->green);
  xfer += prot_->serializedFieldSize("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->serializedSizeDouble(this->blue);
  xfer += prot_->serializedFieldSize("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->serializedSizeDouble(this->alpha);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Color::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Color");
  xfer += prot_->serializedFieldSize("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->serializedSizeDouble(this->red);
  xfer += prot_->serializedFieldSize("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->green);
  xfer += prot_->serializedFieldSize("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->serializedSizeDouble(this->blue);
  xfer += prot_->serializedFieldSize("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->serializedSizeDouble(this->alpha);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Color::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Color");
  xfer += prot_->writeFieldBegin("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->writeDouble(this->red);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->writeDouble(this->green);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->writeDouble(this->blue);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->writeDouble(this->alpha);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Color::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Color::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void Vehicle::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_color:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::read(*iprot, this->color);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.color = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_licensePlate:
  {
    
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::read(*iprot, this->licensePlate);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.licensePlate = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_description:
  {
    
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::read(*iprot, this->description);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.description = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::read(*iprot, this->name);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.name = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_hasAC:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, bool>::readWithContext(*iprot, this->hasAC, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.hasAC = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Vehicle>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_color;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_licensePlate;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_description;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_hasAC;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Vehicle::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Vehicle");
  xfer += prot_->serializedFieldSize("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::serializedSize<false>(*prot_, this->color);
  if (this->licensePlate_ref().has_value()) {
    xfer += prot_->serializedFieldSize("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->licensePlate);
  }
  if (this->description_ref().has_value()) {
    xfer += prot_->serializedFieldSize("description", apache::thrift::protocol::T_STRING, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->description);
  }
  if (this->name_ref().has_value()) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->name);
  }
  if (this->hasAC_ref().has_value()) {
    xfer += prot_->serializedFieldSize("hasAC", apache::thrift::protocol::T_BOOL, 5);
    xfer += prot_->serializedSizeBool(this->hasAC);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Vehicle::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Vehicle");
  xfer += prot_->serializedFieldSize("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::serializedSize<true>(*prot_, this->color);
  if (this->licensePlate_ref().has_value()) {
    xfer += prot_->serializedFieldSize("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->licensePlate);
  }
  if (this->description_ref().has_value()) {
    xfer += prot_->serializedFieldSize("description", apache::thrift::protocol::T_STRING, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->description);
  }
  if (this->name_ref().has_value()) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->name);
  }
  if (this->hasAC_ref().has_value()) {
    xfer += prot_->serializedFieldSize("hasAC", apache::thrift::protocol::T_BOOL, 5);
    xfer += prot_->serializedSizeBool(this->hasAC);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Vehicle::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Vehicle");
  xfer += prot_->writeFieldBegin("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::write(*prot_, this->color);
  xfer += prot_->writeFieldEnd();
  if (this->licensePlate_ref().has_value()) {
    xfer += prot_->writeFieldBegin("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->licensePlate);
    xfer += prot_->writeFieldEnd();
  }
  if (this->description_ref().has_value()) {
    xfer += prot_->writeFieldBegin("description", apache::thrift::protocol::T_STRING, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->description);
    xfer += prot_->writeFieldEnd();
  }
  if (this->name_ref().has_value()) {
    xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->name);
    xfer += prot_->writeFieldEnd();
  }
  if (this->hasAC_ref().has_value()) {
    xfer += prot_->writeFieldBegin("hasAC", apache::thrift::protocol::T_BOOL, 5);
    xfer += prot_->writeBool(this->hasAC);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Vehicle::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Vehicle::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void Person::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_id:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::readWithContext(*iprot, this->id, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.id = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::read(*iprot, this->name);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.name = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_age:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::readWithContext(*iprot, this->age, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.age = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_address:
  {
    
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::read(*iprot, this->address);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.address = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_favoriteColor:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::read(*iprot, this->favoriteColor);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.favoriteColor = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_friends:
  {
    _readState.beforeSubobject(iprot);
    
    this->friends = ::std::set< ::cpp2::PersonID>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::read(*iprot, this->friends);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.friends = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          7,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_bestFriend:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::readWithContext(*iprot, this->bestFriend, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.bestFriend = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          7,
          8,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_petNames:
  {
    _readState.beforeSubobject(iprot);
    
    this->petNames = ::std::map< ::cpp2::Animal, ::std::string>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::read(*iprot, this->petNames);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.petNames = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          8,
          9,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_afraidOfAnimal:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::readWithContext(*iprot, this->afraidOfAnimal, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.afraidOfAnimal = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          9,
          10,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_vehicles:
  {
    _readState.beforeSubobject(iprot);
    
    this->vehicles = ::std::vector< ::cpp2::Vehicle>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::read(*iprot, this->vehicles);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.vehicles = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          10,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Person>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_id;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_age;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_address;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_favoriteColor;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_friends;
      } else {
        goto _skip;
      }
    }
    case 7:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_bestFriend;
      } else {
        goto _skip;
      }
    }
    case 8:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_petNames;
      } else {
        goto _skip;
      }
    }
    case 9:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_afraidOfAnimal;
      } else {
        goto _skip;
      }
    }
    case 10:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_vehicles;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Person::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Person");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->id);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->name);
  if (this->age_ref().has_value()) {
    xfer += prot_->serializedFieldSize("age", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->age);
  }
  if (this->address_ref().has_value()) {
    xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->address);
  }
  if (this->favoriteColor_ref().has_value()) {
    xfer += prot_->serializedFieldSize("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::serializedSize<false>(*prot_, this->favoriteColor);
  }
  if (this->friends_ref().has_value()) {
    xfer += prot_->serializedFieldSize("friends", apache::thrift::protocol::T_SET, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::serializedSize<false>(*prot_, this->friends);
  }
  if (this->bestFriend_ref().has_value()) {
    xfer += prot_->serializedFieldSize("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->bestFriend);
  }
  if (this->petNames_ref().has_value()) {
    xfer += prot_->serializedFieldSize("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::serializedSize<false>(*prot_, this->petNames);
  }
  if (this->afraidOfAnimal_ref().has_value()) {
    xfer += prot_->serializedFieldSize("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::serializedSize<false>(*prot_, this->afraidOfAnimal);
  }
  if (this->vehicles_ref().has_value()) {
    xfer += prot_->serializedFieldSize("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::serializedSize<false>(*prot_, this->vehicles);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Person::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Person");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->id);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->name);
  if (this->age_ref().has_value()) {
    xfer += prot_->serializedFieldSize("age", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->age);
  }
  if (this->address_ref().has_value()) {
    xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->address);
  }
  if (this->favoriteColor_ref().has_value()) {
    xfer += prot_->serializedFieldSize("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::serializedSize<true>(*prot_, this->favoriteColor);
  }
  if (this->friends_ref().has_value()) {
    xfer += prot_->serializedFieldSize("friends", apache::thrift::protocol::T_SET, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::serializedSize<false>(*prot_, this->friends);
  }
  if (this->bestFriend_ref().has_value()) {
    xfer += prot_->serializedFieldSize("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->bestFriend);
  }
  if (this->petNames_ref().has_value()) {
    xfer += prot_->serializedFieldSize("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::serializedSize<false>(*prot_, this->petNames);
  }
  if (this->afraidOfAnimal_ref().has_value()) {
    xfer += prot_->serializedFieldSize("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::serializedSize<false>(*prot_, this->afraidOfAnimal);
  }
  if (this->vehicles_ref().has_value()) {
    xfer += prot_->serializedFieldSize("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::serializedSize<false>(*prot_, this->vehicles);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Person::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Person");
  xfer += prot_->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::write(*prot_, this->id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->name);
  xfer += prot_->writeFieldEnd();
  if (this->age_ref().has_value()) {
    xfer += prot_->writeFieldBegin("age", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::write(*prot_, this->age);
    xfer += prot_->writeFieldEnd();
  }
  if (this->address_ref().has_value()) {
    xfer += prot_->writeFieldBegin("address", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->address);
    xfer += prot_->writeFieldEnd();
  }
  if (this->favoriteColor_ref().has_value()) {
    xfer += prot_->writeFieldBegin("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::Color>::write(*prot_, this->favoriteColor);
    xfer += prot_->writeFieldEnd();
  }
  if (this->friends_ref().has_value()) {
    xfer += prot_->writeFieldBegin("friends", apache::thrift::protocol::T_SET, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::write(*prot_, this->friends);
    xfer += prot_->writeFieldEnd();
  }
  if (this->bestFriend_ref().has_value()) {
    xfer += prot_->writeFieldBegin("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::write(*prot_, this->bestFriend);
    xfer += prot_->writeFieldEnd();
  }
  if (this->petNames_ref().has_value()) {
    xfer += prot_->writeFieldBegin("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::write(*prot_, this->petNames);
    xfer += prot_->writeFieldEnd();
  }
  if (this->afraidOfAnimal_ref().has_value()) {
    xfer += prot_->writeFieldBegin("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::write(*prot_, this->afraidOfAnimal);
    xfer += prot_->writeFieldEnd();
  }
  if (this->vehicles_ref().has_value()) {
    xfer += prot_->writeFieldBegin("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::write(*prot_, this->vehicles);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Person::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Person::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
