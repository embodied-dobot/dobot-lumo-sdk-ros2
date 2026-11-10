// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:srv/CallRpc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/call_rpc.hpp"


#ifndef DOBOT__SRV__DETAIL__CALL_RPC__BUILDER_HPP_
#define DOBOT__SRV__DETAIL__CALL_RPC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/srv/detail/call_rpc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_CallRpc_Request_timeout_ms
{
public:
  explicit Init_CallRpc_Request_timeout_ms(::dobot::srv::CallRpc_Request & msg)
  : msg_(msg)
  {}
  ::dobot::srv::CallRpc_Request timeout_ms(::dobot::srv::CallRpc_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::CallRpc_Request msg_;
};

class Init_CallRpc_Request_params_json
{
public:
  explicit Init_CallRpc_Request_params_json(::dobot::srv::CallRpc_Request & msg)
  : msg_(msg)
  {}
  Init_CallRpc_Request_timeout_ms params_json(::dobot::srv::CallRpc_Request::_params_json_type arg)
  {
    msg_.params_json = std::move(arg);
    return Init_CallRpc_Request_timeout_ms(msg_);
  }

private:
  ::dobot::srv::CallRpc_Request msg_;
};

class Init_CallRpc_Request_method
{
public:
  Init_CallRpc_Request_method()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CallRpc_Request_params_json method(::dobot::srv::CallRpc_Request::_method_type arg)
  {
    msg_.method = std::move(arg);
    return Init_CallRpc_Request_params_json(msg_);
  }

private:
  ::dobot::srv::CallRpc_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::CallRpc_Request>()
{
  return dobot::srv::builder::Init_CallRpc_Request_method();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_CallRpc_Response_response_json
{
public:
  explicit Init_CallRpc_Response_response_json(::dobot::srv::CallRpc_Response & msg)
  : msg_(msg)
  {}
  ::dobot::srv::CallRpc_Response response_json(::dobot::srv::CallRpc_Response::_response_json_type arg)
  {
    msg_.response_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::CallRpc_Response msg_;
};

class Init_CallRpc_Response_message
{
public:
  explicit Init_CallRpc_Response_message(::dobot::srv::CallRpc_Response & msg)
  : msg_(msg)
  {}
  Init_CallRpc_Response_response_json message(::dobot::srv::CallRpc_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CallRpc_Response_response_json(msg_);
  }

private:
  ::dobot::srv::CallRpc_Response msg_;
};

class Init_CallRpc_Response_code
{
public:
  Init_CallRpc_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CallRpc_Response_message code(::dobot::srv::CallRpc_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_CallRpc_Response_message(msg_);
  }

private:
  ::dobot::srv::CallRpc_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::CallRpc_Response>()
{
  return dobot::srv::builder::Init_CallRpc_Response_code();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_CallRpc_Event_response
{
public:
  explicit Init_CallRpc_Event_response(::dobot::srv::CallRpc_Event & msg)
  : msg_(msg)
  {}
  ::dobot::srv::CallRpc_Event response(::dobot::srv::CallRpc_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::CallRpc_Event msg_;
};

class Init_CallRpc_Event_request
{
public:
  explicit Init_CallRpc_Event_request(::dobot::srv::CallRpc_Event & msg)
  : msg_(msg)
  {}
  Init_CallRpc_Event_response request(::dobot::srv::CallRpc_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CallRpc_Event_response(msg_);
  }

private:
  ::dobot::srv::CallRpc_Event msg_;
};

class Init_CallRpc_Event_info
{
public:
  Init_CallRpc_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CallRpc_Event_request info(::dobot::srv::CallRpc_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CallRpc_Event_request(msg_);
  }

private:
  ::dobot::srv::CallRpc_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::CallRpc_Event>()
{
  return dobot::srv::builder::Init_CallRpc_Event_info();
}

}  // namespace dobot

#endif  // DOBOT__SRV__DETAIL__CALL_RPC__BUILDER_HPP_
