// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:msg/IMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/imu_state.hpp"


#ifndef DOBOT__MSG__DETAIL__IMU_STATE__TRAITS_HPP_
#define DOBOT__MSG__DETAIL__IMU_STATE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/msg/detail/imu_state__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMUState & msg,
  std::ostream & out)
{
  out << "{";
  // member: imu_id
  {
    out << "imu_id: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_id, out);
    out << ", ";
  }

  // member: quaternion
  {
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []";
    } else {
      out << "quaternion: [";
      size_t pending_items = msg.quaternion.size();
      for (auto item : msg.quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyroscope
  {
    if (msg.gyroscope.size() == 0) {
      out << "gyroscope: []";
    } else {
      out << "gyroscope: [";
      size_t pending_items = msg.gyroscope.size();
      for (auto item : msg.gyroscope) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accelerometer
  {
    if (msg.accelerometer.size() == 0) {
      out << "accelerometer: []";
    } else {
      out << "accelerometer: [";
      size_t pending_items = msg.accelerometer.size();
      for (auto item : msg.accelerometer) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rpy
  {
    if (msg.rpy.size() == 0) {
      out << "rpy: []";
    } else {
      out << "rpy: [";
      size_t pending_items = msg.rpy.size();
      for (auto item : msg.rpy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
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
  const IMUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imu_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_id: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_id, out);
    out << "\n";
  }

  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []\n";
    } else {
      out << "quaternion:\n";
      for (auto item : msg.quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyroscope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyroscope.size() == 0) {
      out << "gyroscope: []\n";
    } else {
      out << "gyroscope:\n";
      for (auto item : msg.gyroscope) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accelerometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerometer.size() == 0) {
      out << "accelerometer: []\n";
    } else {
      out << "accelerometer:\n";
      for (auto item : msg.accelerometer) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpy.size() == 0) {
      out << "rpy: []\n";
    } else {
      out << "rpy:\n";
      for (auto item : msg.rpy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
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

inline std::string to_yaml(const IMUState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::msg::IMUState>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).imu_id,
    std::forward<T>(msg).quaternion,
    std::forward<T>(msg).gyroscope,
    std::forward<T>(msg).accelerometer,
    std::forward<T>(msg).rpy,
    std::forward<T>(msg).temperature,
    std::forward<T>(msg).timestamp_us);
}

}  // namespace msg

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::msg::IMUState>()
{
  return "dobot::msg::IMUState";
}

template<>
constexpr const char * name<dobot::msg::IMUState>()
{
  return "dobot/msg/IMUState";
}

template<>
struct has_fixed_size<dobot::msg::IMUState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::msg::IMUState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::msg::IMUState>
  : std::true_type {};

template<>
struct MessageTraits<dobot::msg::IMUState>
{
  static constexpr std::size_t member_count = 7;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "imu_id",
    "quaternion",
    "gyroscope",
    "accelerometer",
    "rpy",
    "temperature",
    "timestamp_us",
  };
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__MSG__DETAIL__IMU_STATE__TRAITS_HPP_
