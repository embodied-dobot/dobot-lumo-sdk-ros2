// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/FsmInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/fsm_info.hpp"


#ifndef DOBOT__MSG__DETAIL__FSM_INFO__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__FSM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/fsm_info__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const FsmInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: fsm_id
  {
    out << "fsm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_id, out);
    out << ", ";
  }

  // member: is_dance
  {
    out << "is_dance: ";
    rosidl_generator_traits::value_to_yaml(msg.is_dance, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: dance_name
  {
    out << "dance_name: ";
    rosidl_generator_traits::value_to_yaml(msg.dance_name, out);
    out << ", ";
  }

  // member: model_file
  {
    out << "model_file: ";
    rosidl_generator_traits::value_to_yaml(msg.model_file, out);
    out << ", ";
  }

  // member: motion_loop_length
  {
    out << "motion_loop_length: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_loop_length, out);
    out << ", ";
  }

  // member: motion_hold_back_steps
  {
    out << "motion_hold_back_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_hold_back_steps, out);
    out << ", ";
  }

  // member: motion_start_step
  {
    out << "motion_start_step: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_start_step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FsmInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fsm_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_id, out);
    out << "\n";
  }

  // member: is_dance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_dance: ";
    rosidl_generator_traits::value_to_yaml(msg.is_dance, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: dance_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dance_name: ";
    rosidl_generator_traits::value_to_yaml(msg.dance_name, out);
    out << "\n";
  }

  // member: model_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_file: ";
    rosidl_generator_traits::value_to_yaml(msg.model_file, out);
    out << "\n";
  }

  // member: motion_loop_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_loop_length: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_loop_length, out);
    out << "\n";
  }

  // member: motion_hold_back_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_hold_back_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_hold_back_steps, out);
    out << "\n";
  }

  // member: motion_start_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_start_step: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_start_step, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FsmInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::FsmInfo>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).fsm_id,
    std::forward<T>(msg).is_dance,
    std::forward<T>(msg).name,
    std::forward<T>(msg).dance_name,
    std::forward<T>(msg).model_file,
    std::forward<T>(msg).motion_loop_length,
    std::forward<T>(msg).motion_hold_back_steps,
    std::forward<T>(msg).motion_start_step);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::FsmInfo>()
{
  return "dobot::msg::FsmInfo";
}

template<>
constexpr const char * name<dobot::msg::FsmInfo>()
{
  return "dobot/msg/FsmInfo";
}

template<>
struct has_fixed_size<dobot::msg::FsmInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::msg::FsmInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::msg::FsmInfo>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::FsmInfo>
{
  static constexpr std::size_t member_count = 8;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "fsm_id",
    "is_dance",
    "name",
    "dance_name",
    "model_file",
    "motion_loop_length",
    "motion_hold_back_steps",
    "motion_start_step",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__FSM_INFO__TRAITS_HPP_
