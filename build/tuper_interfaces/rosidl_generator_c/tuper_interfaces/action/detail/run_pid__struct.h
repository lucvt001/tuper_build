// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tuper_interfaces:action/RunPid.idl
// generated code does not contain a copyright notice

#ifndef TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__STRUCT_H_
#define TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_Goal
{
  float setpoint;
} tuper_interfaces__action__RunPid_Goal;

// Struct for a sequence of tuper_interfaces__action__RunPid_Goal.
typedef struct tuper_interfaces__action__RunPid_Goal__Sequence
{
  tuper_interfaces__action__RunPid_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_Result
{
  uint8_t structure_needs_at_least_one_member;
} tuper_interfaces__action__RunPid_Result;

// Struct for a sequence of tuper_interfaces__action__RunPid_Result.
typedef struct tuper_interfaces__action__RunPid_Result__Sequence
{
  tuper_interfaces__action__RunPid_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_Feedback
{
  float current;
} tuper_interfaces__action__RunPid_Feedback;

// Struct for a sequence of tuper_interfaces__action__RunPid_Feedback.
typedef struct tuper_interfaces__action__RunPid_Feedback__Sequence
{
  tuper_interfaces__action__RunPid_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tuper_interfaces/action/detail/run_pid__struct.h"

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tuper_interfaces__action__RunPid_Goal goal;
} tuper_interfaces__action__RunPid_SendGoal_Request;

// Struct for a sequence of tuper_interfaces__action__RunPid_SendGoal_Request.
typedef struct tuper_interfaces__action__RunPid_SendGoal_Request__Sequence
{
  tuper_interfaces__action__RunPid_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tuper_interfaces__action__RunPid_SendGoal_Response;

// Struct for a sequence of tuper_interfaces__action__RunPid_SendGoal_Response.
typedef struct tuper_interfaces__action__RunPid_SendGoal_Response__Sequence
{
  tuper_interfaces__action__RunPid_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tuper_interfaces__action__RunPid_GetResult_Request;

// Struct for a sequence of tuper_interfaces__action__RunPid_GetResult_Request.
typedef struct tuper_interfaces__action__RunPid_GetResult_Request__Sequence
{
  tuper_interfaces__action__RunPid_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_GetResult_Response
{
  int8_t status;
  tuper_interfaces__action__RunPid_Result result;
} tuper_interfaces__action__RunPid_GetResult_Response;

// Struct for a sequence of tuper_interfaces__action__RunPid_GetResult_Response.
typedef struct tuper_interfaces__action__RunPid_GetResult_Response__Sequence
{
  tuper_interfaces__action__RunPid_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"

/// Struct defined in action/RunPid in the package tuper_interfaces.
typedef struct tuper_interfaces__action__RunPid_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tuper_interfaces__action__RunPid_Feedback feedback;
} tuper_interfaces__action__RunPid_FeedbackMessage;

// Struct for a sequence of tuper_interfaces__action__RunPid_FeedbackMessage.
typedef struct tuper_interfaces__action__RunPid_FeedbackMessage__Sequence
{
  tuper_interfaces__action__RunPid_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuper_interfaces__action__RunPid_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__STRUCT_H_
