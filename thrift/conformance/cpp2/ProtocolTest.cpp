/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/conformance/cpp2/Protocol.h>

#include <folly/portability/GTest.h>
#include <thrift/conformance/cpp2/Testing.h>

namespace apache::thrift::conformance {

namespace {

template <StandardProtocol StdProtocol>
void testStandardProtocol(std::string_view expectedName) {
  SCOPED_TRACE(expectedName);

  // 3 ways to get the protocol all return the same value.
  const auto& protocol = getStandardProtocol<StdProtocol>();
  EXPECT_EQ(Protocol(StdProtocol), protocol);
  const auto asCustom = Protocol(std::string(expectedName));
  EXPECT_NE(asCustom, protocol);
  EXPECT_THROW(validateProtocol(asCustom), std::invalid_argument);

  // We get the expected name.
  EXPECT_EQ(protocol.name(), expectedName);
}

TEST(ProtocolTest, ProtocolStruct) {}

TEST(ProtocolTest, Standard) {
  testStandardProtocol<StandardProtocol::None>("None");
  testStandardProtocol<StandardProtocol::Binary>("Binary");
  testStandardProtocol<StandardProtocol::Compact>("Compact");
  testStandardProtocol<StandardProtocol::Json>("Json");
  testStandardProtocol<StandardProtocol::SimpleJson>("SimpleJson");
}

TEST(Protocol, Empty) {
  Protocol empty;
  validateProtocol(empty);
  EXPECT_EQ(empty.name(), "None");
  EXPECT_EQ(empty.standard(), StandardProtocol::None);
  EXPECT_EQ(empty.custom(), "");

  EXPECT_EQ(empty, kNoProtocol);
  EXPECT_EQ(empty, Protocol(""));
  EXPECT_EQ(empty, getStandardProtocol<StandardProtocol::None>());

  EXPECT_NE(empty, Protocol("None"));
  EXPECT_THROW(validateProtocol(Protocol{"None"}), std::invalid_argument);
}

TEST(Protocol, Unknown) {
  EXPECT_EQ(UnknownProtocol().name(), "");
}

TEST(ProtocolTest, Custom) {
  Protocol protocol("hi");
  EXPECT_EQ(protocol.name(), "hi");
  EXPECT_EQ(protocol.standard(), StandardProtocol::None);
  EXPECT_EQ(protocol.custom(), "hi");
  EXPECT_EQ(Protocol("hi"), protocol);
  EXPECT_NE(Protocol("bye"), protocol);
}

TEST(AnyTest, ValidateProtocol) {
  const auto good = "foo.com/my/protocol";
  const auto bad = "foo.com:42/my/protocol";
  EXPECT_THROW(validateProtocol(Protocol{bad}), std::invalid_argument);
  validateProtocol(Protocol{good});
}

} // namespace
} // namespace apache::thrift::conformance
