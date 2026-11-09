// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:action/ExecuteMotion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/action/execute_motion.hpp"


#ifndef DOBOT__ACTION__DETAIL__EXECUTE_MOTION__TRAITS_HPP_
#define DOBOT__ACTION__DETAIL__EXECUTE_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/action/detail/execute_motion__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

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

  // member: fsm_id
  {
    out << "fsm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_id, out);
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
  const ExecuteMotion_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

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

  // member: fsm_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_id, out);
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

inline std::string to_yaml(const ExecuteMotion_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_Goal>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).command,
    std::forward<T>(msg).mode,
    std::forward<T>(msg).vx,
    std::forward<T>(msg).vy,
    std::forward<T>(msg).vyaw,
    std::forward<T>(msg).duration,
    std::forward<T>(msg).fsm_id,
    std::forward<T>(msg).timeout_ms);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_Goal>()
{
  return "dobot::action::ExecuteMotion_Goal";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_Goal>()
{
  return "dobot/action/ExecuteMotion_Goal";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::action::ExecuteMotion_Goal>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_Goal>
{
  static constexpr std::size_t member_count = 8;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "command",
    "mode",
    "vx",
    "vy",
    "vyaw",
    "duration",
    "fsm_id",
    "timeout_ms",
  };
};

}  // namespace rosidl_generator_traits

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_Result & msg,
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
  const ExecuteMotion_Result & msg,
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

inline std::string to_yaml(const ExecuteMotion_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_Result>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).code,
    std::forward<T>(msg).message,
    std::forward<T>(msg).fsm_id);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_Result>()
{
  return "dobot::action::ExecuteMotion_Result";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_Result>()
{
  return "dobot/action/ExecuteMotion_Result";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::action::ExecuteMotion_Result>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_Result>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "code",
    "message",
    "fsm_id",
  };
};

}  // namespace rosidl_generator_traits

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: stage
  {
    out << "stage: ";
    rosidl_generator_traits::value_to_yaml(msg.stage, out);
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
  const ExecuteMotion_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage: ";
    rosidl_generator_traits::value_to_yaml(msg.stage, out);
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

inline std::string to_yaml(const ExecuteMotion_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_Feedback>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).stage,
    std::forward<T>(msg).fsm_id);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_Feedback>()
{
  return "dobot::action::ExecuteMotion_Feedback";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_Feedback>()
{
  return "dobot/action/ExecuteMotion_Feedback";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::action::ExecuteMotion_Feedback>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_Feedback>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "stage",
    "fsm_id",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "dobot/action/detail/execute_motion__traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMotion_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMotion_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_SendGoal_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).goal);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_SendGoal_Request>()
{
  return "dobot::action::ExecuteMotion_SendGoal_Request";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_SendGoal_Request>()
{
  return "dobot/action/ExecuteMotion_SendGoal_Request";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<dobot::action::ExecuteMotion_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<dobot::action::ExecuteMotion_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dobot::action::ExecuteMotion_SendGoal_Request>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_SendGoal_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "goal",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMotion_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMotion_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_SendGoal_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).accepted,
    std::forward<T>(msg).stamp);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_SendGoal_Response>()
{
  return "dobot::action::ExecuteMotion_SendGoal_Response";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_SendGoal_Response>()
{
  return "dobot/action/ExecuteMotion_SendGoal_Response";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<dobot::action::ExecuteMotion_SendGoal_Response>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_SendGoal_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "accepted",
    "stamp",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_SendGoal_Event & msg,
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
  const ExecuteMotion_SendGoal_Event & msg,
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

inline std::string to_yaml(const ExecuteMotion_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_SendGoal_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_SendGoal_Event>()
{
  return "dobot::action::ExecuteMotion_SendGoal_Event";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_SendGoal_Event>()
{
  return "dobot/action/ExecuteMotion_SendGoal_Event";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<dobot::action::ExecuteMotion_SendGoal_Request>::value && has_bounded_size<dobot::action::ExecuteMotion_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dobot::action::ExecuteMotion_SendGoal_Event>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_SendGoal_Event>
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
constexpr const char * data_type<dobot::action::ExecuteMotion_SendGoal>()
{
  return "dobot::action::ExecuteMotion_SendGoal";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_SendGoal>()
{
  return "dobot/action/ExecuteMotion_SendGoal";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot::action::ExecuteMotion_SendGoal_Request>::value &&
    has_fixed_size<dobot::action::ExecuteMotion_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot::action::ExecuteMotion_SendGoal_Request>::value &&
    has_bounded_size<dobot::action::ExecuteMotion_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<dobot::action::ExecuteMotion_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<dobot::action::ExecuteMotion_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot::action::ExecuteMotion_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMotion_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMotion_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_GetResult_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).goal_id);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_GetResult_Request>()
{
  return "dobot::action::ExecuteMotion_GetResult_Request";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_GetResult_Request>()
{
  return "dobot/action/ExecuteMotion_GetResult_Request";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dobot::action::ExecuteMotion_GetResult_Request>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_GetResult_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "dobot/action/detail/execute_motion__traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMotion_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMotion_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_GetResult_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).status,
    std::forward<T>(msg).result);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_GetResult_Response>()
{
  return "dobot::action::ExecuteMotion_GetResult_Response";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_GetResult_Response>()
{
  return "dobot/action/ExecuteMotion_GetResult_Response";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<dobot::action::ExecuteMotion_Result>::value> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<dobot::action::ExecuteMotion_Result>::value> {};

template<>
struct is_message<dobot::action::ExecuteMotion_GetResult_Response>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_GetResult_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "status",
    "result",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_GetResult_Event & msg,
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
  const ExecuteMotion_GetResult_Event & msg,
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

inline std::string to_yaml(const ExecuteMotion_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_GetResult_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_GetResult_Event>()
{
  return "dobot::action::ExecuteMotion_GetResult_Event";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_GetResult_Event>()
{
  return "dobot/action/ExecuteMotion_GetResult_Event";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<dobot::action::ExecuteMotion_GetResult_Request>::value && has_bounded_size<dobot::action::ExecuteMotion_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dobot::action::ExecuteMotion_GetResult_Event>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_GetResult_Event>
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
constexpr const char * data_type<dobot::action::ExecuteMotion_GetResult>()
{
  return "dobot::action::ExecuteMotion_GetResult";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_GetResult>()
{
  return "dobot/action/ExecuteMotion_GetResult";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot::action::ExecuteMotion_GetResult_Request>::value &&
    has_fixed_size<dobot::action::ExecuteMotion_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot::action::ExecuteMotion_GetResult_Request>::value &&
    has_bounded_size<dobot::action::ExecuteMotion_GetResult_Response>::value
  >
{
};

template<>
struct is_service<dobot::action::ExecuteMotion_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<dobot::action::ExecuteMotion_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot::action::ExecuteMotion_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "dobot/action/detail/execute_motion__traits.hpp"

namespace dobot
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMotion_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMotion_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMotion_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::action::ExecuteMotion_FeedbackMessage>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).feedback);
}

}  // namespace action

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion_FeedbackMessage>()
{
  return "dobot::action::ExecuteMotion_FeedbackMessage";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion_FeedbackMessage>()
{
  return "dobot/action/ExecuteMotion_FeedbackMessage";
}

template<>
struct has_fixed_size<dobot::action::ExecuteMotion_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<dobot::action::ExecuteMotion_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dobot::action::ExecuteMotion_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<dobot::action::ExecuteMotion_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dobot::action::ExecuteMotion_FeedbackMessage>
  : std::true_type {};

template<>
struct MessageTraits<dobot::action::ExecuteMotion_FeedbackMessage>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "feedback",
  };
};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::action::ExecuteMotion>()
{
  return "dobot::action::ExecuteMotion";
}

template<>
constexpr const char * name<dobot::action::ExecuteMotion>()
{
  return "dobot/action/ExecuteMotion";
}

template<>
struct is_action<dobot::action::ExecuteMotion>
  : std::true_type
{
};

template<>
struct is_action_goal<dobot::action::ExecuteMotion_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<dobot::action::ExecuteMotion_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<dobot::action::ExecuteMotion_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DOBOT__ACTION__DETAIL__EXECUTE_MOTION__TRAITS_HPP_
