// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/JoystickValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/joystick_value.hpp"


#ifndef DOBOT__MSG__DETAIL__JOYSTICK_VALUE__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__JOYSTICK_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/joystick_value__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const JoystickValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JoystickValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JoystickValue & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::JoystickValue>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).x,
    std::forward<T>(msg).y);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::JoystickValue>()
{
  return "dobot::msg::JoystickValue";
}

template<>
constexpr const char * name<dobot::msg::JoystickValue>()
{
  return "dobot/msg/JoystickValue";
}

template<>
struct has_fixed_size<dobot::msg::JoystickValue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::msg::JoystickValue>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::msg::JoystickValue>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::JoystickValue>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "x",
    "y",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__JOYSTICK_VALUE__TRAITS_HPP_
