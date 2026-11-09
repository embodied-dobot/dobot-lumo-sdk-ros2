// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/ClearErrors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/clear_errors.hpp"


#ifndef DOBOT__MSG__DETAIL__CLEAR_ERRORS__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__CLEAR_ERRORS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/clear_errors__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClearErrors & msg,
  std::ostream & out)
{
  out << "{";
  // member: msg_id
  {
    out << "msg_id: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearErrors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msg_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_id: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearErrors & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::ClearErrors>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).msg_id);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::ClearErrors>()
{
  return "dobot::msg::ClearErrors";
}

template<>
constexpr const char * name<dobot::msg::ClearErrors>()
{
  return "dobot/msg/ClearErrors";
}

template<>
struct has_fixed_size<dobot::msg::ClearErrors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::msg::ClearErrors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::msg::ClearErrors>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::ClearErrors>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "msg_id",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__CLEAR_ERRORS__TRAITS_HPP_
