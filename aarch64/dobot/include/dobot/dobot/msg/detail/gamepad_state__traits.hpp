// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/GamepadState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/gamepad_state.hpp"


#ifndef DOBOT__MSG__DETAIL__GAMEPAD_STATE__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__GAMEPAD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/gamepad_state__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const GamepadState & msg,
  std::ostream & out)
{
  out << "{";
  // member: head
  {
    out << "head: ";
    rosidl_generator_traits::value_to_yaml(msg.head, out);
    out << ", ";
  }

  // member: btn_state
  {
    out << "btn_state: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_state, out);
    out << ", ";
  }

  // member: lx
  {
    out << "lx: ";
    rosidl_generator_traits::value_to_yaml(msg.lx, out);
    out << ", ";
  }

  // member: ly
  {
    out << "ly: ";
    rosidl_generator_traits::value_to_yaml(msg.ly, out);
    out << ", ";
  }

  // member: rx
  {
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << ", ";
  }

  // member: ry
  {
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << ", ";
  }

  // member: timestamp_us
  {
    out << "timestamp_us: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_us, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GamepadState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head: ";
    rosidl_generator_traits::value_to_yaml(msg.head, out);
    out << "\n";
  }

  // member: btn_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_state: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_state, out);
    out << "\n";
  }

  // member: lx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lx: ";
    rosidl_generator_traits::value_to_yaml(msg.lx, out);
    out << "\n";
  }

  // member: ly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ly: ";
    rosidl_generator_traits::value_to_yaml(msg.ly, out);
    out << "\n";
  }

  // member: rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << "\n";
  }

  // member: ry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ry: ";
    rosidl_generator_traits::value_to_yaml(msg.ry, out);
    out << "\n";
  }

  // member: timestamp_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_us: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_us, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GamepadState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::GamepadState>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).head,
    std::forward<T>(msg).btn_state,
    std::forward<T>(msg).lx,
    std::forward<T>(msg).ly,
    std::forward<T>(msg).rx,
    std::forward<T>(msg).ry,
    std::forward<T>(msg).timestamp_us);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::GamepadState>()
{
  return "dobot::msg::GamepadState";
}

template<>
constexpr const char * name<dobot::msg::GamepadState>()
{
  return "dobot/msg/GamepadState";
}

template<>
struct has_fixed_size<dobot::msg::GamepadState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::msg::GamepadState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::msg::GamepadState>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::GamepadState>
{
  static constexpr std::size_t member_count = 7;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "head",
    "btn_state",
    "lx",
    "ly",
    "rx",
    "ry",
    "timestamp_us",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__GAMEPAD_STATE__TRAITS_HPP_
