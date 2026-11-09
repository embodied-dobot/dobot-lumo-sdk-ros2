// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/UpperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/upper_state.hpp"


#ifndef DOBOT__MSG__DETAIL__UPPER_STATE__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__UPPER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/upper_state__struct.hpp"
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
  const UpperState & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_type
  {
    if (msg.robot_type.size() == 0) {
      out << "robot_type: []";
    } else {
      out << "robot_type: [";
      size_t pending_items = msg.robot_type.size();
      for (auto item : msg.robot_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_upper_control
  {
    out << "is_upper_control: ";
    rosidl_generator_traits::value_to_yaml(msg.is_upper_control, out);
    out << ", ";
  }

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
  const UpperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_type.size() == 0) {
      out << "robot_type: []\n";
    } else {
      out << "robot_type:\n";
      for (auto item : msg.robot_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_upper_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_upper_control: ";
    rosidl_generator_traits::value_to_yaml(msg.is_upper_control, out);
    out << "\n";
  }

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

inline std::string to_yaml(const UpperState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::UpperState>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).robot_type,
    std::forward<T>(msg).is_upper_control,
    std::forward<T>(msg).motor_state,
    std::forward<T>(msg).timestamp_us);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::UpperState>()
{
  return "dobot::msg::UpperState";
}

template<>
constexpr const char * name<dobot::msg::UpperState>()
{
  return "dobot/msg/UpperState";
}

template<>
struct has_fixed_size<dobot::msg::UpperState>
  : std::integral_constant<bool, has_fixed_size<dobot::msg::MotorState>::value> {};

template<>
struct has_bounded_size<dobot::msg::UpperState>
  : std::integral_constant<bool, has_bounded_size<dobot::msg::MotorState>::value> {};

template<>
struct is_message<dobot::msg::UpperState>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::UpperState>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "robot_type",
    "is_upper_control",
    "motor_state",
    "timestamp_us",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__UPPER_STATE__TRAITS_HPP_
