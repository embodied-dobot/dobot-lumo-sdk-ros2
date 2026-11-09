// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:srv/SetVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/set_velocity.hpp"


#ifndef DOBOT__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_
#define DOBOT__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/srv/detail/set_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Request_timeout_ms
{
public:
  explicit Init_SetVelocity_Request_timeout_ms(::dobot::srv::SetVelocity_Request & msg)
  : msg_(msg)
  {}
  ::dobot::srv::SetVelocity_Request timeout_ms(::dobot::srv::SetVelocity_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Request msg_;
};

class Init_SetVelocity_Request_duration
{
public:
  explicit Init_SetVelocity_Request_duration(::dobot::srv::SetVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_SetVelocity_Request_timeout_ms duration(::dobot::srv::SetVelocity_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_SetVelocity_Request_timeout_ms(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Request msg_;
};

class Init_SetVelocity_Request_vyaw
{
public:
  explicit Init_SetVelocity_Request_vyaw(::dobot::srv::SetVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_SetVelocity_Request_duration vyaw(::dobot::srv::SetVelocity_Request::_vyaw_type arg)
  {
    msg_.vyaw = std::move(arg);
    return Init_SetVelocity_Request_duration(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Request msg_;
};

class Init_SetVelocity_Request_vy
{
public:
  explicit Init_SetVelocity_Request_vy(::dobot::srv::SetVelocity_Request & msg)
  : msg_(msg)
  {}
  Init_SetVelocity_Request_vyaw vy(::dobot::srv::SetVelocity_Request::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_SetVelocity_Request_vyaw(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Request msg_;
};

class Init_SetVelocity_Request_vx
{
public:
  Init_SetVelocity_Request_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVelocity_Request_vy vx(::dobot::srv::SetVelocity_Request::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_SetVelocity_Request_vy(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::SetVelocity_Request>()
{
  return dobot::srv::builder::Init_SetVelocity_Request_vx();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Response_message
{
public:
  explicit Init_SetVelocity_Response_message(::dobot::srv::SetVelocity_Response & msg)
  : msg_(msg)
  {}
  ::dobot::srv::SetVelocity_Response message(::dobot::srv::SetVelocity_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Response msg_;
};

class Init_SetVelocity_Response_code
{
public:
  Init_SetVelocity_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVelocity_Response_message code(::dobot::srv::SetVelocity_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_SetVelocity_Response_message(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::SetVelocity_Response>()
{
  return dobot::srv::builder::Init_SetVelocity_Response_code();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Event_response
{
public:
  explicit Init_SetVelocity_Event_response(::dobot::srv::SetVelocity_Event & msg)
  : msg_(msg)
  {}
  ::dobot::srv::SetVelocity_Event response(::dobot::srv::SetVelocity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Event msg_;
};

class Init_SetVelocity_Event_request
{
public:
  explicit Init_SetVelocity_Event_request(::dobot::srv::SetVelocity_Event & msg)
  : msg_(msg)
  {}
  Init_SetVelocity_Event_response request(::dobot::srv::SetVelocity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetVelocity_Event_response(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Event msg_;
};

class Init_SetVelocity_Event_info
{
public:
  Init_SetVelocity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVelocity_Event_request info(::dobot::srv::SetVelocity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetVelocity_Event_request(msg_);
  }

private:
  ::dobot::srv::SetVelocity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::SetVelocity_Event>()
{
  return dobot::srv::builder::Init_SetVelocity_Event_info();
}

}  // namespace dobot

#endif  // DOBOT__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_
