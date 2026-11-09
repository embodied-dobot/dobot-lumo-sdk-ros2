// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/LowerCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_cmd.hpp"


#ifndef DOBOT__MSG__DETAIL__LOWER_CMD__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__LOWER_CMD__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/lower_cmd__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motor_cmd'
#include "dobot/msg/detail/motor_cmd__traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const LowerCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_cmd
  {
    if (msg.motor_cmd.size() == 0) {
      out << "motor_cmd: []";
    } else {
      out << "motor_cmd: [";
      size_t pending_items = msg.motor_cmd.size();
      for (auto item : msg.motor_cmd) {
        to_flow_style_yaml(item, out);
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
  const LowerCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_cmd.size() == 0) {
      out << "motor_cmd: []\n";
    } else {
      out << "motor_cmd:\n";
      for (auto item : msg.motor_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LowerCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::LowerCmd>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).motor_cmd);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::LowerCmd>()
{
  return "dobot::msg::LowerCmd";
}

template<>
constexpr const char * name<dobot::msg::LowerCmd>()
{
  return "dobot/msg/LowerCmd";
}

template<>
struct has_fixed_size<dobot::msg::LowerCmd>
  : std::integral_constant<bool, has_fixed_size<dobot::msg::MotorCmd>::value> {};

template<>
struct has_bounded_size<dobot::msg::LowerCmd>
  : std::integral_constant<bool, has_bounded_size<dobot::msg::MotorCmd>::value> {};

template<>
struct is_message<dobot::msg::LowerCmd>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::LowerCmd>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "motor_cmd",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__LOWER_CMD__TRAITS_HPP_
