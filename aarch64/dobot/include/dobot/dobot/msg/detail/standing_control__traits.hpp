// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/StandingControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/standing_control.hpp"


#ifndef DOBOT__MSG__DETAIL__STANDING_CONTROL__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__STANDING_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/standing_control__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const StandingControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: head_yaw
  {
    out << "head_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.head_yaw, out);
    out << ", ";
  }

  // member: waist_yaw
  {
    out << "waist_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_yaw, out);
    out << ", ";
  }

  // member: body_height
  {
    out << "body_height: ";
    rosidl_generator_traits::value_to_yaml(msg.body_height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StandingControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: head_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.head_yaw, out);
    out << "\n";
  }

  // member: waist_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_yaw, out);
    out << "\n";
  }

  // member: body_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_height: ";
    rosidl_generator_traits::value_to_yaml(msg.body_height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StandingControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::StandingControl>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).head_yaw,
    std::forward<T>(msg).waist_yaw,
    std::forward<T>(msg).body_height);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::StandingControl>()
{
  return "dobot::msg::StandingControl";
}

template<>
constexpr const char * name<dobot::msg::StandingControl>()
{
  return "dobot/msg/StandingControl";
}

template<>
struct has_fixed_size<dobot::msg::StandingControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::msg::StandingControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::msg::StandingControl>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::StandingControl>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "head_yaw",
    "waist_yaw",
    "body_height",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__STANDING_CONTROL__TRAITS_HPP_
