// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:action/ExecuteMotion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/action/execute_motion.hpp"


#ifndef DOBOT__ACTION__DETAIL__EXECUTE_MOTION__BUILDER_HPP_
#define DOBOT__ACTION__DETAIL__EXECUTE_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/action/detail/execute_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_Goal_timeout_ms
{
public:
  explicit Init_ExecuteMotion_Goal_timeout_ms(::dobot::action::ExecuteMotion_Goal & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_Goal timeout_ms(::dobot::action::ExecuteMotion_Goal::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

class Init_ExecuteMotion_Goal_fsm_id
{
public:
  explicit Init_ExecuteMotion_Goal_fsm_id(::dobot::action::ExecuteMotion_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_Goal_timeout_ms fsm_id(::dobot::action::ExecuteMotion_Goal::_fsm_id_type arg)
  {
    msg_.fsm_id = std::move(arg);
    return Init_ExecuteMotion_Goal_timeout_ms(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

class Init_ExecuteMotion_Goal_duration
{
public:
  explicit Init_ExecuteMotion_Goal_duration(::dobot::action::ExecuteMotion_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_Goal_fsm_id duration(::dobot::action::ExecuteMotion_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ExecuteMotion_Goal_fsm_id(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

class Init_ExecuteMotion_Goal_vyaw
{
public:
  explicit Init_ExecuteMotion_Goal_vyaw(::dobot::action::ExecuteMotion_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_Goal_duration vyaw(::dobot::action::ExecuteMotion_Goal::_vyaw_type arg)
  {
    msg_.vyaw = std::move(arg);
    return Init_ExecuteMotion_Goal_duration(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

class Init_ExecuteMotion_Goal_vy
{
public:
  explicit Init_ExecuteMotion_Goal_vy(::dobot::action::ExecuteMotion_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_Goal_vyaw vy(::dobot::action::ExecuteMotion_Goal::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_ExecuteMotion_Goal_vyaw(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

class Init_ExecuteMotion_Goal_vx
{
public:
  explicit Init_ExecuteMotion_Goal_vx(::dobot::action::ExecuteMotion_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_Goal_vy vx(::dobot::action::ExecuteMotion_Goal::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_ExecuteMotion_Goal_vy(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

class Init_ExecuteMotion_Goal_mode
{
public:
  explicit Init_ExecuteMotion_Goal_mode(::dobot::action::ExecuteMotion_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_Goal_vx mode(::dobot::action::ExecuteMotion_Goal::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ExecuteMotion_Goal_vx(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

class Init_ExecuteMotion_Goal_command
{
public:
  Init_ExecuteMotion_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_Goal_mode command(::dobot::action::ExecuteMotion_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ExecuteMotion_Goal_mode(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_Goal>()
{
  return dobot::action::builder::Init_ExecuteMotion_Goal_command();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_Result_fsm_id
{
public:
  explicit Init_ExecuteMotion_Result_fsm_id(::dobot::action::ExecuteMotion_Result & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_Result fsm_id(::dobot::action::ExecuteMotion_Result::_fsm_id_type arg)
  {
    msg_.fsm_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Result msg_;
};

class Init_ExecuteMotion_Result_message
{
public:
  explicit Init_ExecuteMotion_Result_message(::dobot::action::ExecuteMotion_Result & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_Result_fsm_id message(::dobot::action::ExecuteMotion_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteMotion_Result_fsm_id(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Result msg_;
};

class Init_ExecuteMotion_Result_code
{
public:
  Init_ExecuteMotion_Result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_Result_message code(::dobot::action::ExecuteMotion_Result::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ExecuteMotion_Result_message(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_Result>()
{
  return dobot::action::builder::Init_ExecuteMotion_Result_code();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_Feedback_fsm_id
{
public:
  explicit Init_ExecuteMotion_Feedback_fsm_id(::dobot::action::ExecuteMotion_Feedback & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_Feedback fsm_id(::dobot::action::ExecuteMotion_Feedback::_fsm_id_type arg)
  {
    msg_.fsm_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Feedback msg_;
};

class Init_ExecuteMotion_Feedback_stage
{
public:
  Init_ExecuteMotion_Feedback_stage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_Feedback_fsm_id stage(::dobot::action::ExecuteMotion_Feedback::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_ExecuteMotion_Feedback_fsm_id(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_Feedback>()
{
  return dobot::action::builder::Init_ExecuteMotion_Feedback_stage();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteMotion_SendGoal_Request_goal(::dobot::action::ExecuteMotion_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_SendGoal_Request goal(::dobot::action::ExecuteMotion_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_SendGoal_Request msg_;
};

class Init_ExecuteMotion_SendGoal_Request_goal_id
{
public:
  Init_ExecuteMotion_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_SendGoal_Request_goal goal_id(::dobot::action::ExecuteMotion_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMotion_SendGoal_Request_goal(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_SendGoal_Request>()
{
  return dobot::action::builder::Init_ExecuteMotion_SendGoal_Request_goal_id();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteMotion_SendGoal_Response_stamp(::dobot::action::ExecuteMotion_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_SendGoal_Response stamp(::dobot::action::ExecuteMotion_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_SendGoal_Response msg_;
};

class Init_ExecuteMotion_SendGoal_Response_accepted
{
public:
  Init_ExecuteMotion_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_SendGoal_Response_stamp accepted(::dobot::action::ExecuteMotion_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteMotion_SendGoal_Response_stamp(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_SendGoal_Response>()
{
  return dobot::action::builder::Init_ExecuteMotion_SendGoal_Response_accepted();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_SendGoal_Event_response
{
public:
  explicit Init_ExecuteMotion_SendGoal_Event_response(::dobot::action::ExecuteMotion_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_SendGoal_Event response(::dobot::action::ExecuteMotion_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_SendGoal_Event msg_;
};

class Init_ExecuteMotion_SendGoal_Event_request
{
public:
  explicit Init_ExecuteMotion_SendGoal_Event_request(::dobot::action::ExecuteMotion_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_SendGoal_Event_response request(::dobot::action::ExecuteMotion_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteMotion_SendGoal_Event_response(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_SendGoal_Event msg_;
};

class Init_ExecuteMotion_SendGoal_Event_info
{
public:
  Init_ExecuteMotion_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_SendGoal_Event_request info(::dobot::action::ExecuteMotion_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteMotion_SendGoal_Event_request(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_SendGoal_Event>()
{
  return dobot::action::builder::Init_ExecuteMotion_SendGoal_Event_info();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_GetResult_Request_goal_id
{
public:
  Init_ExecuteMotion_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::action::ExecuteMotion_GetResult_Request goal_id(::dobot::action::ExecuteMotion_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_GetResult_Request>()
{
  return dobot::action::builder::Init_ExecuteMotion_GetResult_Request_goal_id();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_GetResult_Response_result
{
public:
  explicit Init_ExecuteMotion_GetResult_Response_result(::dobot::action::ExecuteMotion_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_GetResult_Response result(::dobot::action::ExecuteMotion_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_GetResult_Response msg_;
};

class Init_ExecuteMotion_GetResult_Response_status
{
public:
  Init_ExecuteMotion_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_GetResult_Response_result status(::dobot::action::ExecuteMotion_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteMotion_GetResult_Response_result(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_GetResult_Response>()
{
  return dobot::action::builder::Init_ExecuteMotion_GetResult_Response_status();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_GetResult_Event_response
{
public:
  explicit Init_ExecuteMotion_GetResult_Event_response(::dobot::action::ExecuteMotion_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_GetResult_Event response(::dobot::action::ExecuteMotion_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_GetResult_Event msg_;
};

class Init_ExecuteMotion_GetResult_Event_request
{
public:
  explicit Init_ExecuteMotion_GetResult_Event_request(::dobot::action::ExecuteMotion_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteMotion_GetResult_Event_response request(::dobot::action::ExecuteMotion_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteMotion_GetResult_Event_response(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_GetResult_Event msg_;
};

class Init_ExecuteMotion_GetResult_Event_info
{
public:
  Init_ExecuteMotion_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_GetResult_Event_request info(::dobot::action::ExecuteMotion_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteMotion_GetResult_Event_request(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_GetResult_Event>()
{
  return dobot::action::builder::Init_ExecuteMotion_GetResult_Event_info();
}

}  // namespace dobot


namespace dobot
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteMotion_FeedbackMessage_feedback(::dobot::action::ExecuteMotion_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dobot::action::ExecuteMotion_FeedbackMessage feedback(::dobot::action::ExecuteMotion_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_FeedbackMessage msg_;
};

class Init_ExecuteMotion_FeedbackMessage_goal_id
{
public:
  Init_ExecuteMotion_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_FeedbackMessage_feedback goal_id(::dobot::action::ExecuteMotion_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMotion_FeedbackMessage_feedback(msg_);
  }

private:
  ::dobot::action::ExecuteMotion_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::action::ExecuteMotion_FeedbackMessage>()
{
  return dobot::action::builder::Init_ExecuteMotion_FeedbackMessage_goal_id();
}

}  // namespace dobot

#endif  // DOBOT__ACTION__DETAIL__EXECUTE_MOTION__BUILDER_HPP_
