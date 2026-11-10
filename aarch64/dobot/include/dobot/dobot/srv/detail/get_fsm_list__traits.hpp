// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot:srv/GetFsmList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/get_fsm_list.hpp"


#ifndef DOBOT__SRV__DETAIL__GET_FSM_LIST__TRAITS_HPP_
#define DOBOT__SRV__DETAIL__GET_FSM_LIST__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "dobot/srv/detail/get_fsm_list__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFsmList_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: timeout_ms
  {
    out << "timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFsmList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const GetFsmList_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::GetFsmList_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).timeout_ms);
}

}  // namespace srv

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::GetFsmList_Request>()
{
  return "dobot::srv::GetFsmList_Request";
}

template<>
constexpr const char * name<dobot::srv::GetFsmList_Request>()
{
  return "dobot/srv/GetFsmList_Request";
}

template<>
struct has_fixed_size<dobot::srv::GetFsmList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot::srv::GetFsmList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot::srv::GetFsmList_Request>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::GetFsmList_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "timeout_ms",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'fsm_list'
#include "dobot/msg/detail/fsm_info__traits.hpp"

namespace dobot
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFsmList_Response & msg,
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

  // member: fsm_list
  {
    if (msg.fsm_list.size() == 0) {
      out << "fsm_list: []";
    } else {
      out << "fsm_list: [";
      size_t pending_items = msg.fsm_list.size();
      for (auto item : msg.fsm_list) {
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
  const GetFsmList_Response & msg,
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

  // member: fsm_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fsm_list.size() == 0) {
      out << "fsm_list: []\n";
    } else {
      out << "fsm_list:\n";
      for (auto item : msg.fsm_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFsmList_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::GetFsmList_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).code,
    std::forward<T>(msg).message,
    std::forward<T>(msg).fsm_list);
}

}  // namespace srv

}  // namespace dobot

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<dobot::srv::GetFsmList_Response>()
{
  return "dobot::srv::GetFsmList_Response";
}

template<>
constexpr const char * name<dobot::srv::GetFsmList_Response>()
{
  return "dobot/srv/GetFsmList_Response";
}

template<>
struct has_fixed_size<dobot::srv::GetFsmList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::srv::GetFsmList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot::srv::GetFsmList_Response>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::GetFsmList_Response>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "code",
    "message",
    "fsm_list",
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
  const GetFsmList_Event & msg,
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
  const GetFsmList_Event & msg,
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

inline std::string to_yaml(const GetFsmList_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, dobot::srv::GetFsmList_Event>, int> = 0>
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
constexpr const char * data_type<dobot::srv::GetFsmList_Event>()
{
  return "dobot::srv::GetFsmList_Event";
}

template<>
constexpr const char * name<dobot::srv::GetFsmList_Event>()
{
  return "dobot/srv/GetFsmList_Event";
}

template<>
struct has_fixed_size<dobot::srv::GetFsmList_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot::srv::GetFsmList_Event>
  : std::integral_constant<bool, has_bounded_size<dobot::srv::GetFsmList_Request>::value && has_bounded_size<dobot::srv::GetFsmList_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dobot::srv::GetFsmList_Event>
  : std::true_type {};

template<>
struct MessageTraits<dobot::srv::GetFsmList_Event>
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
constexpr const char * data_type<dobot::srv::GetFsmList>()
{
  return "dobot::srv::GetFsmList";
}

template<>
constexpr const char * name<dobot::srv::GetFsmList>()
{
  return "dobot/srv/GetFsmList";
}

template<>
struct has_fixed_size<dobot::srv::GetFsmList>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot::srv::GetFsmList_Request>::value &&
    has_fixed_size<dobot::srv::GetFsmList_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot::srv::GetFsmList>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot::srv::GetFsmList_Request>::value &&
    has_bounded_size<dobot::srv::GetFsmList_Response>::value
  >
{
};

template<>
struct is_service<dobot::srv::GetFsmList>
  : std::true_type
{
};

template<>
struct is_service_request<dobot::srv::GetFsmList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot::srv::GetFsmList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT__SRV__DETAIL__GET_FSM_LIST__TRAITS_HPP_
