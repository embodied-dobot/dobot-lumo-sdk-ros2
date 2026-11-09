// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:srv/SetVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/set_velocity.hpp"


#ifndef DOBOT__SRV__DETAIL__SET_VELOCITY__TRAITS_HPP_
#define DOBOT__SRV__DETAIL__SET_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/srv/detail/set_velocity__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetVelocity_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vyaw
  {
    out << "vyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.vyaw, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: timeout_ms
  {
    out << "timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetVelocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vyaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.vyaw, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: timeout_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetVelocity_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::SetVelocity_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).vx,
    std::forward<T>(msg).vy,
    std::forward<T>(msg).vyaw,
    std::forward<T>(msg).duration,
    std::forward<T>(msg).timeout_ms);
}

}  // namespace srv

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::SetVelocity_Request>()
{
  return "dobot::srv::SetVelocity_Request";
}

template<>
constexpr const char * name<dobot::srv::SetVelocity_Request>()
{
  return "dobot/srv/SetVelocity_Request";
}

template<>
struct has_fixed_size<dobot::srv::SetVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::srv::SetVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::srv::SetVelocity_Request>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::SetVelocity_Request>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "vx",
    "vy",
    "vyaw",
    "duration",
    "timeout_ms",
  };
};

}  // namespace rosidl_generator_traits

namespace dobot
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetVelocity_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetVelocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetVelocity_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::SetVelocity_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).code,
    std::forward<T>(msg).message);
}

}  // namespace srv

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::SetVelocity_Response>()
{
  return "dobot::srv::SetVelocity_Response";
}

template<>
constexpr const char * name<dobot::srv::SetVelocity_Response>()
{
  return "dobot/srv/SetVelocity_Response";
}

template<>
struct has_fixed_size<dobot::srv::SetVelocity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::srv::SetVelocity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::srv::SetVelocity_Response>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::SetVelocity_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "code",
    "message",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dobot
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetVelocity_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const SetVelocity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetVelocity_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::SetVelocity_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::SetVelocity_Event>()
{
  return "dobot::srv::SetVelocity_Event";
}

template<>
constexpr const char * name<dobot::srv::SetVelocity_Event>()
{
  return "dobot/srv/SetVelocity_Event";
}

template<>
struct has_fixed_size<dobot::srv::SetVelocity_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::srv::SetVelocity_Event>
  : std::integral_constant<bool, has_bounded_size<dobot::srv::SetVelocity_Request>::value && has_bounded_size<dobot::srv::SetVelocity_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dobot::srv::SetVelocity_Event>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::SetVelocity_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::SetVelocity>()
{
  return "dobot::srv::SetVelocity";
}

template<>
constexpr const char * name<dobot::srv::SetVelocity>()
{
  return "dobot/srv/SetVelocity";
}

template<>
struct has_fixed_size<dobot::srv::SetVelocity>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot::srv::SetVelocity_Request>::value &&
    has_fixed_size<dobot::srv::SetVelocity_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot::srv::SetVelocity>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot::srv::SetVelocity_Request>::value &&
    has_bounded_size<dobot::srv::SetVelocity_Response>::value
  >
{
};

template<>
struct is_service<dobot::srv::SetVelocity>
  : std::true_type
{
};

template<>
struct is_service_request<dobot::srv::SetVelocity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot::srv::SetVelocity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__SRV__DETAIL__SET_VELOCITY__TRAITS_HPP_
