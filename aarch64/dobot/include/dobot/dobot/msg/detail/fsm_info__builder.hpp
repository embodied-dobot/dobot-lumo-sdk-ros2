// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/FsmInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/fsm_info.hpp"


#ifndef DOBOT__MSG__DETAIL__FSM_INFO__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__FSM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/fsm_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_FsmInfo_motion_start_step
{
public:
  explicit Init_FsmInfo_motion_start_step(::dobot::msg::FsmInfo & msg)
  : msg_(msg)
  {}
  ::dobot::msg::FsmInfo motion_start_step(::dobot::msg::FsmInfo::_motion_start_step_type arg)
  {
    msg_.motion_start_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

class Init_FsmInfo_motion_hold_back_steps
{
public:
  explicit Init_FsmInfo_motion_hold_back_steps(::dobot::msg::FsmInfo & msg)
  : msg_(msg)
  {}
  Init_FsmInfo_motion_start_step motion_hold_back_steps(::dobot::msg::FsmInfo::_motion_hold_back_steps_type arg)
  {
    msg_.motion_hold_back_steps = std::move(arg);
    return Init_FsmInfo_motion_start_step(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

class Init_FsmInfo_motion_loop_length
{
public:
  explicit Init_FsmInfo_motion_loop_length(::dobot::msg::FsmInfo & msg)
  : msg_(msg)
  {}
  Init_FsmInfo_motion_hold_back_steps motion_loop_length(::dobot::msg::FsmInfo::_motion_loop_length_type arg)
  {
    msg_.motion_loop_length = std::move(arg);
    return Init_FsmInfo_motion_hold_back_steps(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

class Init_FsmInfo_model_file
{
public:
  explicit Init_FsmInfo_model_file(::dobot::msg::FsmInfo & msg)
  : msg_(msg)
  {}
  Init_FsmInfo_motion_loop_length model_file(::dobot::msg::FsmInfo::_model_file_type arg)
  {
    msg_.model_file = std::move(arg);
    return Init_FsmInfo_motion_loop_length(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

class Init_FsmInfo_dance_name
{
public:
  explicit Init_FsmInfo_dance_name(::dobot::msg::FsmInfo & msg)
  : msg_(msg)
  {}
  Init_FsmInfo_model_file dance_name(::dobot::msg::FsmInfo::_dance_name_type arg)
  {
    msg_.dance_name = std::move(arg);
    return Init_FsmInfo_model_file(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

class Init_FsmInfo_name
{
public:
  explicit Init_FsmInfo_name(::dobot::msg::FsmInfo & msg)
  : msg_(msg)
  {}
  Init_FsmInfo_dance_name name(::dobot::msg::FsmInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FsmInfo_dance_name(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

class Init_FsmInfo_is_dance
{
public:
  explicit Init_FsmInfo_is_dance(::dobot::msg::FsmInfo & msg)
  : msg_(msg)
  {}
  Init_FsmInfo_name is_dance(::dobot::msg::FsmInfo::_is_dance_type arg)
  {
    msg_.is_dance = std::move(arg);
    return Init_FsmInfo_name(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

class Init_FsmInfo_fsm_id
{
public:
  Init_FsmInfo_fsm_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsmInfo_is_dance fsm_id(::dobot::msg::FsmInfo::_fsm_id_type arg)
  {
    msg_.fsm_id = std::move(arg);
    return Init_FsmInfo_is_dance(msg_);
  }

private:
  ::dobot::msg::FsmInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::FsmInfo>()
{
  return dobot::msg::builder::Init_FsmInfo_fsm_id();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__FSM_INFO__BUILDER_HPP_
