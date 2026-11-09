// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/motor_state.hpp"


#ifndef DOBOT__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: q
  {
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << ", ";
  }

  // member: dq
  {
    out << "dq: ";
    rosidl_generator_traits::value_to_yaml(msg.dq, out);
    out << ", ";
  }

  // member: ddq
  {
    out << "ddq: ";
    rosidl_generator_traits::value_to_yaml(msg.ddq, out);
    out << ", ";
  }

  // member: tau_est
  {
    out << "tau_est: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_est, out);
    out << ", ";
  }

  // member: tau_cmd
  {
    out << "tau_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_cmd, out);
    out << ", ";
  }

  // member: current_feedback
  {
    out << "current_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.current_feedback, out);
    out << ", ";
  }

  // member: current_cmd
  {
    out << "current_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cmd, out);
    out << ", ";
  }

  // member: q_raw
  {
    out << "q_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.q_raw, out);
    out << ", ";
  }

  // member: dq_raw
  {
    out << "dq_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.dq_raw, out);
    out << ", ";
  }

  // member: ddq_raw
  {
    out << "ddq_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.ddq_raw, out);
    out << ", ";
  }

  // member: tau_raw
  {
    out << "tau_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_raw, out);
    out << ", ";
  }

  // member: mcu_temp
  {
    out << "mcu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.mcu_temp, out);
    out << ", ";
  }

  // member: mos_temp
  {
    out << "mos_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_temp, out);
    out << ", ";
  }

  // member: motor_temp
  {
    out << "motor_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temp, out);
    out << ", ";
  }

  // member: bus_voltage
  {
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << "\n";
  }

  // member: dq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dq: ";
    rosidl_generator_traits::value_to_yaml(msg.dq, out);
    out << "\n";
  }

  // member: ddq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddq: ";
    rosidl_generator_traits::value_to_yaml(msg.ddq, out);
    out << "\n";
  }

  // member: tau_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tau_est: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_est, out);
    out << "\n";
  }

  // member: tau_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tau_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_cmd, out);
    out << "\n";
  }

  // member: current_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.current_feedback, out);
    out << "\n";
  }

  // member: current_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cmd, out);
    out << "\n";
  }

  // member: q_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.q_raw, out);
    out << "\n";
  }

  // member: dq_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dq_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.dq_raw, out);
    out << "\n";
  }

  // member: ddq_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddq_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.ddq_raw, out);
    out << "\n";
  }

  // member: tau_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tau_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_raw, out);
    out << "\n";
  }

  // member: mcu_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.mcu_temp, out);
    out << "\n";
  }

  // member: mos_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mos_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_temp, out);
    out << "\n";
  }

  // member: motor_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temp, out);
    out << "\n";
  }

  // member: bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::MotorState>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).mode,
    std::forward<T>(msg).q,
    std::forward<T>(msg).dq,
    std::forward<T>(msg).ddq,
    std::forward<T>(msg).tau_est,
    std::forward<T>(msg).tau_cmd,
    std::forward<T>(msg).current_feedback,
    std::forward<T>(msg).current_cmd,
    std::forward<T>(msg).q_raw,
    std::forward<T>(msg).dq_raw,
    std::forward<T>(msg).ddq_raw,
    std::forward<T>(msg).tau_raw,
    std::forward<T>(msg).mcu_temp,
    std::forward<T>(msg).mos_temp,
    std::forward<T>(msg).motor_temp,
    std::forward<T>(msg).bus_voltage);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::MotorState>()
{
  return "dobot::msg::MotorState";
}

template<>
constexpr const char * name<dobot::msg::MotorState>()
{
  return "dobot/msg/MotorState";
}

template<>
struct has_fixed_size<dobot::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::msg::MotorState>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::MotorState>
{
  static constexpr std::size_t member_count = 16;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "mode",
    "q",
    "dq",
    "ddq",
    "tau_est",
    "tau_cmd",
    "current_feedback",
    "current_cmd",
    "q_raw",
    "dq_raw",
    "ddq_raw",
    "tau_raw",
    "mcu_temp",
    "mos_temp",
    "motor_temp",
    "bus_voltage",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
