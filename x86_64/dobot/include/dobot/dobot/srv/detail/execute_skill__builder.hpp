// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:srv/ExecuteSkill.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/execute_skill.hpp"


#ifndef DOBOT__SRV__DETAIL__EXECUTE_SKILL__BUILDER_HPP_
#define DOBOT__SRV__DETAIL__EXECUTE_SKILL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/srv/detail/execute_skill__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_ExecuteSkill_Request_timeout_ms
{
public:
  explicit Init_ExecuteSkill_Request_timeout_ms(::dobot::srv::ExecuteSkill_Request & msg)
  : msg_(msg)
  {}
  ::dobot::srv::ExecuteSkill_Request timeout_ms(::dobot::srv::ExecuteSkill_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::ExecuteSkill_Request msg_;
};

class Init_ExecuteSkill_Request_file_path
{
public:
  Init_ExecuteSkill_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSkill_Request_timeout_ms file_path(::dobot::srv::ExecuteSkill_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return Init_ExecuteSkill_Request_timeout_ms(msg_);
  }

private:
  ::dobot::srv::ExecuteSkill_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::ExecuteSkill_Request>()
{
  return dobot::srv::builder::Init_ExecuteSkill_Request_file_path();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_ExecuteSkill_Response_message
{
public:
  explicit Init_ExecuteSkill_Response_message(::dobot::srv::ExecuteSkill_Response & msg)
  : msg_(msg)
  {}
  ::dobot::srv::ExecuteSkill_Response message(::dobot::srv::ExecuteSkill_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::ExecuteSkill_Response msg_;
};

class Init_ExecuteSkill_Response_code
{
public:
  Init_ExecuteSkill_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSkill_Response_message code(::dobot::srv::ExecuteSkill_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ExecuteSkill_Response_message(msg_);
  }

private:
  ::dobot::srv::ExecuteSkill_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::ExecuteSkill_Response>()
{
  return dobot::srv::builder::Init_ExecuteSkill_Response_code();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_ExecuteSkill_Event_response
{
public:
  explicit Init_ExecuteSkill_Event_response(::dobot::srv::ExecuteSkill_Event & msg)
  : msg_(msg)
  {}
  ::dobot::srv::ExecuteSkill_Event response(::dobot::srv::ExecuteSkill_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::ExecuteSkill_Event msg_;
};

class Init_ExecuteSkill_Event_request
{
public:
  explicit Init_ExecuteSkill_Event_request(::dobot::srv::ExecuteSkill_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteSkill_Event_response request(::dobot::srv::ExecuteSkill_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteSkill_Event_response(msg_);
  }

private:
  ::dobot::srv::ExecuteSkill_Event msg_;
};

class Init_ExecuteSkill_Event_info
{
public:
  Init_ExecuteSkill_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSkill_Event_request info(::dobot::srv::ExecuteSkill_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteSkill_Event_request(msg_);
  }

private:
  ::dobot::srv::ExecuteSkill_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::ExecuteSkill_Event>()
{
  return dobot::srv::builder::Init_ExecuteSkill_Event_info();
}

}  // namespace dobot

#endif  // DOBOT__SRV__DETAIL__EXECUTE_SKILL__BUILDER_HPP_
