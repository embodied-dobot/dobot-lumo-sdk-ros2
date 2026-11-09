// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/EnableMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/enable_motors.hpp"


#ifndef DOBOT__MSG__DETAIL__ENABLE_MOTORS__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__ENABLE_MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/enable_motors__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnableMotors & msg,
  std::ostream & out)
{
  out << "{";
  // member: flag
  {
    if (msg.flag.size() == 0) {
      out << "flag: []";
    } else {
      out << "flag: [";
      size_t pending_items = msg.flag.size();
      for (auto item : msg.flag) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnableMotors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flag.size() == 0) {
      out << "flag: []\n";
    } else {
      out << "flag:\n";
      for (auto item : msg.flag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnableMotors & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::EnableMotors>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).flag);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::EnableMotors>()
{
  return "dobot::msg::EnableMotors";
}

template<>
constexpr const char * name<dobot::msg::EnableMotors>()
{
  return "dobot/msg/EnableMotors";
}

template<>
struct has_fixed_size<dobot::msg::EnableMotors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::msg::EnableMotors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::msg::EnableMotors>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::EnableMotors>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "flag",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__ENABLE_MOTORS__TRAITS_HPP_
