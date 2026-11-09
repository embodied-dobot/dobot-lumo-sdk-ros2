// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/set_fsm_id.hpp"


#ifndef DOBOT__MSG__DETAIL__SET_FSM_ID__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__SET_FSM_ID__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/set_fsm_id__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetFsmId & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: current_action
  {
    out << "current_action: ";
    rosidl_generator_traits::value_to_yaml(msg.current_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetFsmId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: current_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_action: ";
    rosidl_generator_traits::value_to_yaml(msg.current_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetFsmId & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::SetFsmId>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).id,
    std::forward<T>(msg).current_action);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::SetFsmId>()
{
  return "dobot::msg::SetFsmId";
}

template<>
constexpr const char * name<dobot::msg::SetFsmId>()
{
  return "dobot/msg/SetFsmId";
}

template<>
struct has_fixed_size<dobot::msg::SetFsmId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::msg::SetFsmId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::msg::SetFsmId>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::SetFsmId>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "id",
    "current_action",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__SET_FSM_ID__TRAITS_HPP_
