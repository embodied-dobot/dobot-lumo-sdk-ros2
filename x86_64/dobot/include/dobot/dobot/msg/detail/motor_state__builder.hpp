// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/motor_state.hpp"


#ifndef DOBOT__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_MotorState_bus_voltage
{
public:
  explicit Init_MotorState_bus_voltage(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::dobot::msg::MotorState bus_voltage(::dobot::msg::MotorState::_bus_voltage_type arg)
  {
    msg_.bus_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_motor_temp
{
public:
  explicit Init_MotorState_motor_temp(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_bus_voltage motor_temp(::dobot::msg::MotorState::_motor_temp_type arg)
  {
    msg_.motor_temp = std::move(arg);
    return Init_MotorState_bus_voltage(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_mos_temp
{
public:
  explicit Init_MotorState_mos_temp(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_motor_temp mos_temp(::dobot::msg::MotorState::_mos_temp_type arg)
  {
    msg_.mos_temp = std::move(arg);
    return Init_MotorState_motor_temp(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_mcu_temp
{
public:
  explicit Init_MotorState_mcu_temp(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_mos_temp mcu_temp(::dobot::msg::MotorState::_mcu_temp_type arg)
  {
    msg_.mcu_temp = std::move(arg);
    return Init_MotorState_mos_temp(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_tau_raw
{
public:
  explicit Init_MotorState_tau_raw(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_mcu_temp tau_raw(::dobot::msg::MotorState::_tau_raw_type arg)
  {
    msg_.tau_raw = std::move(arg);
    return Init_MotorState_mcu_temp(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_ddq_raw
{
public:
  explicit Init_MotorState_ddq_raw(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_tau_raw ddq_raw(::dobot::msg::MotorState::_ddq_raw_type arg)
  {
    msg_.ddq_raw = std::move(arg);
    return Init_MotorState_tau_raw(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_dq_raw
{
public:
  explicit Init_MotorState_dq_raw(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq_raw dq_raw(::dobot::msg::MotorState::_dq_raw_type arg)
  {
    msg_.dq_raw = std::move(arg);
    return Init_MotorState_ddq_raw(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_q_raw
{
public:
  explicit Init_MotorState_q_raw(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq_raw q_raw(::dobot::msg::MotorState::_q_raw_type arg)
  {
    msg_.q_raw = std::move(arg);
    return Init_MotorState_dq_raw(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_current_cmd
{
public:
  explicit Init_MotorState_current_cmd(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_q_raw current_cmd(::dobot::msg::MotorState::_current_cmd_type arg)
  {
    msg_.current_cmd = std::move(arg);
    return Init_MotorState_q_raw(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_current_feedback
{
public:
  explicit Init_MotorState_current_feedback(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_current_cmd current_feedback(::dobot::msg::MotorState::_current_feedback_type arg)
  {
    msg_.current_feedback = std::move(arg);
    return Init_MotorState_current_cmd(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_tau_cmd
{
public:
  explicit Init_MotorState_tau_cmd(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_current_feedback tau_cmd(::dobot::msg::MotorState::_tau_cmd_type arg)
  {
    msg_.tau_cmd = std::move(arg);
    return Init_MotorState_current_feedback(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_tau_est
{
public:
  explicit Init_MotorState_tau_est(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_tau_cmd tau_est(::dobot::msg::MotorState::_tau_est_type arg)
  {
    msg_.tau_est = std::move(arg);
    return Init_MotorState_tau_cmd(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_ddq
{
public:
  explicit Init_MotorState_ddq(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_tau_est ddq(::dobot::msg::MotorState::_ddq_type arg)
  {
    msg_.ddq = std::move(arg);
    return Init_MotorState_tau_est(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_dq
{
public:
  explicit Init_MotorState_dq(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq dq(::dobot::msg::MotorState::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorState_ddq(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_q
{
public:
  explicit Init_MotorState_q(::dobot::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq q(::dobot::msg::MotorState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorState_dq(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

class Init_MotorState_mode
{
public:
  Init_MotorState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_q mode(::dobot::msg::MotorState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorState_q(msg_);
  }

private:
  ::dobot::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::MotorState>()
{
  return dobot::msg::builder::Init_MotorState_mode();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
