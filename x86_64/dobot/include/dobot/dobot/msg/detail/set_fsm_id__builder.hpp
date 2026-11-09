// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/set_fsm_id.hpp"


#ifndef DOBOT__MSG__DETAIL__SET_FSM_ID__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__SET_FSM_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/set_fsm_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_SetFsmId_current_action
{
public:
  explicit Init_SetFsmId_current_action(::dobot::msg::SetFsmId & msg)
  : msg_(msg)
  {}
  ::dobot::msg::SetFsmId current_action(::dobot::msg::SetFsmId::_current_action_type arg)
  {
    msg_.current_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::SetFsmId msg_;
};

class Init_SetFsmId_id
{
public:
  Init_SetFsmId_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFsmId_current_action id(::dobot::msg::SetFsmId::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SetFsmId_current_action(msg_);
  }

private:
  ::dobot::msg::SetFsmId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::SetFsmId>()
{
  return dobot::msg::builder::Init_SetFsmId_id();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__SET_FSM_ID__BUILDER_HPP_
