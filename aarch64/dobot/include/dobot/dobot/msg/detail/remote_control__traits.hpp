// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/remote_control.hpp"


#ifndef DOBOT__MSG__DETAIL__REMOTE_CONTROL__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__REMOTE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/remote_control__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'btn_move'
// Member 'btn_turn'
#include "dobot/msg/detail/joystick_value__traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const RemoteControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: btn_move
  {
    out << "btn_move: ";
    to_flow_style_yaml(msg.btn_move, out);
    out << ", ";
  }

  // member: btn_turn
  {
    out << "btn_turn: ";
    to_flow_style_yaml(msg.btn_turn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemoteControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: btn_move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_move:\n";
    to_block_style_yaml(msg.btn_move, out, indentation + 2);
  }

  // member: btn_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_turn:\n";
    to_block_style_yaml(msg.btn_turn, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemoteControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::RemoteControl>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).btn_move,
    std::forward<T>(msg).btn_turn);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::RemoteControl>()
{
  return "dobot::msg::RemoteControl";
}

template<>
constexpr const char * name<dobot::msg::RemoteControl>()
{
  return "dobot/msg/RemoteControl";
}

template<>
struct has_fixed_size<dobot::msg::RemoteControl>
  : std::integral_constant<bool, has_fixed_size<dobot::msg::JoystickValue>::value> {};

template<>
struct has_bounded_size<dobot::msg::RemoteControl>
  : std::integral_constant<bool, has_bounded_size<dobot::msg::JoystickValue>::value> {};

template<>
struct is_message<dobot::msg::RemoteControl>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::RemoteControl>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "btn_move",
    "btn_turn",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__REMOTE_CONTROL__TRAITS_HPP_
