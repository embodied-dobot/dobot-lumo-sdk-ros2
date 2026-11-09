// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:srv/GetFsmId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/get_fsm_id.hpp"


#ifndef DOBOT__SRV__DETAIL__GET_FSM_ID__BUILDER_HPP_
#define DOBOT__SRV__DETAIL__GET_FSM_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/srv/detail/get_fsm_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_GetFsmId_Request_timeout_ms
{
public:
  Init_GetFsmId_Request_timeout_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::srv::GetFsmId_Request timeout_ms(::dobot::srv::GetFsmId_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::GetFsmId_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::GetFsmId_Request>()
{
  return dobot::srv::builder::Init_GetFsmId_Request_timeout_ms();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_GetFsmId_Response_fsm_id
{
public:
  explicit Init_GetFsmId_Response_fsm_id(::dobot::srv::GetFsmId_Response & msg)
  : msg_(msg)
  {}
  ::dobot::srv::GetFsmId_Response fsm_id(::dobot::srv::GetFsmId_Response::_fsm_id_type arg)
  {
    msg_.fsm_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::GetFsmId_Response msg_;
};

class Init_GetFsmId_Response_message
{
public:
  explicit Init_GetFsmId_Response_message(::dobot::srv::GetFsmId_Response & msg)
  : msg_(msg)
  {}
  Init_GetFsmId_Response_fsm_id message(::dobot::srv::GetFsmId_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetFsmId_Response_fsm_id(msg_);
  }

private:
  ::dobot::srv::GetFsmId_Response msg_;
};

class Init_GetFsmId_Response_code
{
public:
  Init_GetFsmId_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFsmId_Response_message code(::dobot::srv::GetFsmId_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_GetFsmId_Response_message(msg_);
  }

private:
  ::dobot::srv::GetFsmId_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::GetFsmId_Response>()
{
  return dobot::srv::builder::Init_GetFsmId_Response_code();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_GetFsmId_Event_response
{
public:
  explicit Init_GetFsmId_Event_response(::dobot::srv::GetFsmId_Event & msg)
  : msg_(msg)
  {}
  ::dobot::srv::GetFsmId_Event response(::dobot::srv::GetFsmId_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::GetFsmId_Event msg_;
};

class Init_GetFsmId_Event_request
{
public:
  explicit Init_GetFsmId_Event_request(::dobot::srv::GetFsmId_Event & msg)
  : msg_(msg)
  {}
  Init_GetFsmId_Event_response request(::dobot::srv::GetFsmId_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetFsmId_Event_response(msg_);
  }

private:
  ::dobot::srv::GetFsmId_Event msg_;
};

class Init_GetFsmId_Event_info
{
public:
  Init_GetFsmId_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFsmId_Event_request info(::dobot::srv::GetFsmId_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetFsmId_Event_request(msg_);
  }

private:
  ::dobot::srv::GetFsmId_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::GetFsmId_Event>()
{
  return dobot::srv::builder::Init_GetFsmId_Event_info();
}

}  // namespace dobot

#endif  // DOBOT__SRV__DETAIL__GET_FSM_ID__BUILDER_HPP_
