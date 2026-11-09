// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/LowerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_state.hpp"


#ifndef DOBOT__MSG__DETAIL__LOWER_STATE__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__LOWER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/lower_state__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motor_state'
#include "dobot/msg/detail/motor_state__traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const LowerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_state
  {
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []";
    } else {
      out << "motor_state: [";
      size_t pending_items = msg.motor_state.size();
      for (auto item : msg.motor_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const LowerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []\n";
    } else {
      out << "motor_state:\n";
      for (auto item : msg.motor_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const LowerState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::LowerState>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).motor_state,
    std::forward<T>(msg).timestamp_us);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::LowerState>()
{
  return "dobot::msg::LowerState";
}

template<>
constexpr const char * name<dobot::msg::LowerState>()
{
  return "dobot/msg/LowerState";
}

template<>
struct has_fixed_size<dobot::msg::LowerState>
  : std::integral_constant<bool, has_fixed_size<dobot::msg::MotorState>::value> {};

template<>
struct has_bounded_size<dobot::msg::LowerState>
  : std::integral_constant<bool, has_bounded_size<dobot::msg::MotorState>::value> {};

template<>
struct is_message<dobot::msg::LowerState>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::LowerState>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "motor_state",
    "timestamp_us",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__LOWER_STATE__TRAITS_HPP_
