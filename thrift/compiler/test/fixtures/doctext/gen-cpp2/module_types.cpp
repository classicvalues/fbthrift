/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::B>::size;
folly::Range<::cpp2::B const*> const TEnumTraits<::cpp2::B>::values = folly::range(::cpp2::_BEnumDataStorage::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::B>::names = folly::range(::cpp2::_BEnumDataStorage::names);

char const* TEnumTraits<::cpp2::B>::findName(type value) {
  using factory = ::cpp2::_B_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::B>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_B_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {

const _B_EnumMapFactory::ValuesToNamesMapType _B_VALUES_TO_NAMES = _B_EnumMapFactory::makeValuesToNamesMap();
const _B_EnumMapFactory::NamesToValuesMapType _B_NAMES_TO_VALUES = _B_EnumMapFactory::makeNamesToValuesMap();

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::A>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "useless_field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

A::A(apache::thrift::FragileConstructor, int32_t useless_field__arg) :
    useless_field(std::move(useless_field__arg)) {
  __isset.useless_field = true;
}

void A::__clear() {
  // clear all fields
  useless_field = 0;
  __isset = {};
}

bool A::operator==(const A& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.useless_field == rhs.useless_field)) {
    return false;
  }
  return true;
}

bool A::operator<(const A& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.useless_field == rhs.useless_field)) {
    return lhs.useless_field < rhs.useless_field;
  }
  return false;
}


void swap(A& a, A& b) {
  using ::std::swap;
  swap(a.useless_field, b.useless_field);
  swap(a.__isset, b.__isset);
}

template void A::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t A::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void A::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t A::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
