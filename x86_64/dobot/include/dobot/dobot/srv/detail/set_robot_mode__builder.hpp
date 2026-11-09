// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:srv/SetRobotMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/set_robot_mode.hpp"


#ifndef DOBOT__SRV__DETAIL__SET_ROBOT_MODE__BUILDER_HPP_
#define DOBOT__SRV__DETAIL__SET_ROBOT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/srv/detail/set_robot_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_SetRobotMode_Request_timeout_ms
{
public:
  explicit Init_SetRobotMode_Request_timeout_ms(::dobot::srv::SetRobotMode_Request & msg)
  : msg_(msg)
  {}
  ::dobot::srv::SetRobotMode_Request timeout_ms(::dobot::srv::SetRobotMode_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Request msg_;
};

class Init_SetRobotMode_Request_mode
{
public:
  Init_SetRobotMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotMode_Request_timeout_ms mode(::dobot::srv::SetRobotMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_SetRobotMode_Request_timeout_ms(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::SetRobotMode_Request>()
{
  return dobot::srv::builder::Init_SetRobotMode_Request_mode();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_SetRobotMode_Response_fsm_id
{
public:
  explicit Init_SetRobotMode_Response_fsm_id(::dobot::srv::SetRobotMode_Response & msg)
  : msg_(msg)
  {}
  ::dobot::srv::SetRobotMode_Response fsm_id(::dobot::srv::SetRobotMode_Response::_fsm_id_type arg)
  {
    msg_.fsm_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Response msg_;
};

class Init_SetRobotMode_Response_message
{
public:
  explicit Init_SetRobotMode_Response_message(::dobot::srv::SetRobotMode_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotMode_Response_fsm_id message(::dobot::srv::SetRobotMode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetRobotMode_Response_fsm_id(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Response msg_;
};

class Init_SetRobotMode_Response_code
{
public:
  Init_SetRobotMode_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotMode_Response_message code(::dobot::srv::SetRobotMode_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_SetRobotMode_Response_message(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::SetRobotMode_Response>()
{
  return dobot::srv::builder::Init_SetRobotMode_Response_code();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_SetRobotMode_Event_response
{
public:
  explicit Init_SetRobotMode_Event_response(::dobot::srv::SetRobotMode_Event & msg)
  : msg_(msg)
  {}
  ::dobot::srv::SetRobotMode_Event response(::dobot::srv::SetRobotMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Event msg_;
};

class Init_SetRobotMode_Event_request
{
public:
  explicit Init_SetRobotMode_Event_request(::dobot::srv::SetRobotMode_Event & msg)
  : msg_(msg)
  {}
  Init_SetRobotMode_Event_response request(::dobot::srv::SetRobotMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetRobotMode_Event_response(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Event msg_;
};

class Init_SetRobotMode_Event_info
{
public:
  Init_SetRobotMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotMode_Event_request info(::dobot::srv::SetRobotMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetRobotMode_Event_request(msg_);
  }

private:
  ::dobot::srv::SetRobotMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::SetRobotMode_Event>()
{
  return dobot::srv::builder::Init_SetRobotMode_Event_info();
}

}  // namespace dobot

#endif  // DOBOT__SRV__DETAIL__SET_ROBOT_MODE__BUILDER_HPP_
