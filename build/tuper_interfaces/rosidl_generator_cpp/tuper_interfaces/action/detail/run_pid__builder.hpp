// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tuper_interfaces:action/RunPid.idl
// generated code does not contain a copyright notice

#ifndef TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__BUILDER_HPP_
#define TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tuper_interfaces/action/detail/run_pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tuper_interfaces
{

namespace action
{

namespace builder
{

class Init_RunPid_Goal_setpoint
{
public:
  Init_RunPid_Goal_setpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tuper_interfaces::action::RunPid_Goal setpoint(::tuper_interfaces::action::RunPid_Goal::_setpoint_type arg)
  {
    msg_.setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_Goal>()
{
  return tuper_interfaces::action::builder::Init_RunPid_Goal_setpoint();
}

}  // namespace tuper_interfaces


namespace tuper_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_Result>()
{
  return ::tuper_interfaces::action::RunPid_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tuper_interfaces


namespace tuper_interfaces
{

namespace action
{

namespace builder
{

class Init_RunPid_Feedback_current
{
public:
  Init_RunPid_Feedback_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tuper_interfaces::action::RunPid_Feedback current(::tuper_interfaces::action::RunPid_Feedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_Feedback>()
{
  return tuper_interfaces::action::builder::Init_RunPid_Feedback_current();
}

}  // namespace tuper_interfaces


namespace tuper_interfaces
{

namespace action
{

namespace builder
{

class Init_RunPid_SendGoal_Request_goal
{
public:
  explicit Init_RunPid_SendGoal_Request_goal(::tuper_interfaces::action::RunPid_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tuper_interfaces::action::RunPid_SendGoal_Request goal(::tuper_interfaces::action::RunPid_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_SendGoal_Request msg_;
};

class Init_RunPid_SendGoal_Request_goal_id
{
public:
  Init_RunPid_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPid_SendGoal_Request_goal goal_id(::tuper_interfaces::action::RunPid_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunPid_SendGoal_Request_goal(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_SendGoal_Request>()
{
  return tuper_interfaces::action::builder::Init_RunPid_SendGoal_Request_goal_id();
}

}  // namespace tuper_interfaces


namespace tuper_interfaces
{

namespace action
{

namespace builder
{

class Init_RunPid_SendGoal_Response_stamp
{
public:
  explicit Init_RunPid_SendGoal_Response_stamp(::tuper_interfaces::action::RunPid_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tuper_interfaces::action::RunPid_SendGoal_Response stamp(::tuper_interfaces::action::RunPid_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_SendGoal_Response msg_;
};

class Init_RunPid_SendGoal_Response_accepted
{
public:
  Init_RunPid_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPid_SendGoal_Response_stamp accepted(::tuper_interfaces::action::RunPid_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RunPid_SendGoal_Response_stamp(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_SendGoal_Response>()
{
  return tuper_interfaces::action::builder::Init_RunPid_SendGoal_Response_accepted();
}

}  // namespace tuper_interfaces


namespace tuper_interfaces
{

namespace action
{

namespace builder
{

class Init_RunPid_GetResult_Request_goal_id
{
public:
  Init_RunPid_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tuper_interfaces::action::RunPid_GetResult_Request goal_id(::tuper_interfaces::action::RunPid_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_GetResult_Request>()
{
  return tuper_interfaces::action::builder::Init_RunPid_GetResult_Request_goal_id();
}

}  // namespace tuper_interfaces


namespace tuper_interfaces
{

namespace action
{

namespace builder
{

class Init_RunPid_GetResult_Response_result
{
public:
  explicit Init_RunPid_GetResult_Response_result(::tuper_interfaces::action::RunPid_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tuper_interfaces::action::RunPid_GetResult_Response result(::tuper_interfaces::action::RunPid_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_GetResult_Response msg_;
};

class Init_RunPid_GetResult_Response_status
{
public:
  Init_RunPid_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPid_GetResult_Response_result status(::tuper_interfaces::action::RunPid_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RunPid_GetResult_Response_result(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_GetResult_Response>()
{
  return tuper_interfaces::action::builder::Init_RunPid_GetResult_Response_status();
}

}  // namespace tuper_interfaces


namespace tuper_interfaces
{

namespace action
{

namespace builder
{

class Init_RunPid_FeedbackMessage_feedback
{
public:
  explicit Init_RunPid_FeedbackMessage_feedback(::tuper_interfaces::action::RunPid_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tuper_interfaces::action::RunPid_FeedbackMessage feedback(::tuper_interfaces::action::RunPid_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_FeedbackMessage msg_;
};

class Init_RunPid_FeedbackMessage_goal_id
{
public:
  Init_RunPid_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPid_FeedbackMessage_feedback goal_id(::tuper_interfaces::action::RunPid_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunPid_FeedbackMessage_feedback(msg_);
  }

private:
  ::tuper_interfaces::action::RunPid_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuper_interfaces::action::RunPid_FeedbackMessage>()
{
  return tuper_interfaces::action::builder::Init_RunPid_FeedbackMessage_goal_id();
}

}  // namespace tuper_interfaces

#endif  // TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__BUILDER_HPP_
