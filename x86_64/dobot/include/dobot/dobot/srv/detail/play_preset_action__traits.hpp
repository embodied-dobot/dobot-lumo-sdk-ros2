// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:srv/PlayPresetAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/play_preset_action.hpp"


#ifndef DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__TRAITS_HPP_
#define DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/srv/detail/play_preset_action__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayPresetAction_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
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
  const PlayPresetAction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
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

inline std::string to_yaml(const PlayPresetAction_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::PlayPresetAction_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).action,
    std::forward<T>(msg).timeout_ms);
}

}  // namespace srv

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::PlayPresetAction_Request>()
{
  return "dobot::srv::PlayPresetAction_Request";
}

template<>
constexpr const char * name<dobot::srv::PlayPresetAction_Request>()
{
  return "dobot/srv/PlayPresetAction_Request";
}

template<>
struct has_fixed_size<dobot::srv::PlayPresetAction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::srv::PlayPresetAction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::srv::PlayPresetAction_Request>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::PlayPresetAction_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "action",
    "timeout_ms",
  };
};

}  // namespace rosidl_generator_traits

namespace dobot
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayPresetAction_Response & msg,
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
    out << ", ";
  }

  // member: fsm_id
  {
    out << "fsm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayPresetAction_Response & msg,
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

  // member: fsm_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayPresetAction_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::PlayPresetAction_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).code,
    std::forward<T>(msg).message,
    std::forward<T>(msg).fsm_id);
}

}  // namespace srv

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::PlayPresetAction_Response>()
{
  return "dobot::srv::PlayPresetAction_Response";
}

template<>
constexpr const char * name<dobot::srv::PlayPresetAction_Response>()
{
  return "dobot/srv/PlayPresetAction_Response";
}

template<>
struct has_fixed_size<dobot::srv::PlayPresetAction_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::srv::PlayPresetAction_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::srv::PlayPresetAction_Response>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::PlayPresetAction_Response>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "code",
    "message",
    "fsm_id",
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
  const PlayPresetAction_Event & msg,
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
  const PlayPresetAction_Event & msg,
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

inline std::string to_yaml(const PlayPresetAction_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::PlayPresetAction_Event>, int> = 0>
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
constexpr const char * data_type<dobot::srv::PlayPresetAction_Event>()
{
  return "dobot::srv::PlayPresetAction_Event";
}

template<>
constexpr const char * name<dobot::srv::PlayPresetAction_Event>()
{
  return "dobot/srv/PlayPresetAction_Event";
}

template<>
struct has_fixed_size<dobot::srv::PlayPresetAction_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::srv::PlayPresetAction_Event>
  : std::integral_constant<bool, has_bounded_size<dobot::srv::PlayPresetAction_Request>::value && has_bounded_size<dobot::srv::PlayPresetAction_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dobot::srv::PlayPresetAction_Event>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::PlayPresetAction_Event>
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
constexpr const char * data_type<dobot::srv::PlayPresetAction>()
{
  return "dobot::srv::PlayPresetAction";
}

template<>
constexpr const char * name<dobot::srv::PlayPresetAction>()
{
  return "dobot/srv/PlayPresetAction";
}

template<>
struct has_fixed_size<dobot::srv::PlayPresetAction>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot::srv::PlayPresetAction_Request>::value &&
    has_fixed_size<dobot::srv::PlayPresetAction_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot::srv::PlayPresetAction>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot::srv::PlayPresetAction_Request>::value &&
    has_bounded_size<dobot::srv::PlayPresetAction_Response>::value
  >
{
};

template<>
struct is_service<dobot::srv::PlayPresetAction>
  : std::true_type
{
};

template<>
struct is_service_request<dobot::srv::PlayPresetAction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot::srv::PlayPresetAction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__TRAITS_HPP_
