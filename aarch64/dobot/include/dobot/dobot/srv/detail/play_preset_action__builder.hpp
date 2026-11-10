// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:srv/PlayPresetAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/play_preset_action.hpp"


#ifndef DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__BUILDER_HPP_
#define DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/srv/detail/play_preset_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_PlayPresetAction_Request_timeout_ms
{
public:
  explicit Init_PlayPresetAction_Request_timeout_ms(::dobot::srv::PlayPresetAction_Request & msg)
  : msg_(msg)
  {}
  ::dobot::srv::PlayPresetAction_Request timeout_ms(::dobot::srv::PlayPresetAction_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Request msg_;
};

class Init_PlayPresetAction_Request_action
{
public:
  Init_PlayPresetAction_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayPresetAction_Request_timeout_ms action(::dobot::srv::PlayPresetAction_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_PlayPresetAction_Request_timeout_ms(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::PlayPresetAction_Request>()
{
  return dobot::srv::builder::Init_PlayPresetAction_Request_action();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_PlayPresetAction_Response_fsm_id
{
public:
  explicit Init_PlayPresetAction_Response_fsm_id(::dobot::srv::PlayPresetAction_Response & msg)
  : msg_(msg)
  {}
  ::dobot::srv::PlayPresetAction_Response fsm_id(::dobot::srv::PlayPresetAction_Response::_fsm_id_type arg)
  {
    msg_.fsm_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Response msg_;
};

class Init_PlayPresetAction_Response_message
{
public:
  explicit Init_PlayPresetAction_Response_message(::dobot::srv::PlayPresetAction_Response & msg)
  : msg_(msg)
  {}
  Init_PlayPresetAction_Response_fsm_id message(::dobot::srv::PlayPresetAction_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PlayPresetAction_Response_fsm_id(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Response msg_;
};

class Init_PlayPresetAction_Response_code
{
public:
  Init_PlayPresetAction_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayPresetAction_Response_message code(::dobot::srv::PlayPresetAction_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_PlayPresetAction_Response_message(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::PlayPresetAction_Response>()
{
  return dobot::srv::builder::Init_PlayPresetAction_Response_code();
}

}  // namespace dobot


namespace dobot
{

namespace srv
{

namespace builder
{

class Init_PlayPresetAction_Event_response
{
public:
  explicit Init_PlayPresetAction_Event_response(::dobot::srv::PlayPresetAction_Event & msg)
  : msg_(msg)
  {}
  ::dobot::srv::PlayPresetAction_Event response(::dobot::srv::PlayPresetAction_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Event msg_;
};

class Init_PlayPresetAction_Event_request
{
public:
  explicit Init_PlayPresetAction_Event_request(::dobot::srv::PlayPresetAction_Event & msg)
  : msg_(msg)
  {}
  Init_PlayPresetAction_Event_response request(::dobot::srv::PlayPresetAction_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PlayPresetAction_Event_response(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Event msg_;
};

class Init_PlayPresetAction_Event_info
{
public:
  Init_PlayPresetAction_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayPresetAction_Event_request info(::dobot::srv::PlayPresetAction_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PlayPresetAction_Event_request(msg_);
  }

private:
  ::dobot::srv::PlayPresetAction_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::srv::PlayPresetAction_Event>()
{
  return dobot::srv::builder::Init_PlayPresetAction_Event_info();
}

}  // namespace dobot

#endif  // DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__BUILDER_HPP_
