// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tuper_interfaces:action/RunPid.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tuper_interfaces/action/detail/run_pid__struct.h"
#include "tuper_interfaces/action/detail/run_pid__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_Goal_type_support_ids_t;

static const _RunPid_Goal_type_support_ids_t _RunPid_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_Goal_type_support_symbol_names_t _RunPid_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_Goal)),
  }
};

typedef struct _RunPid_Goal_type_support_data_t
{
  void * data[2];
} _RunPid_Goal_type_support_data_t;

static _RunPid_Goal_type_support_data_t _RunPid_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_Goal_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_Goal)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_Result_type_support_ids_t;

static const _RunPid_Result_type_support_ids_t _RunPid_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_Result_type_support_symbol_names_t _RunPid_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_Result)),
  }
};

typedef struct _RunPid_Result_type_support_data_t
{
  void * data[2];
} _RunPid_Result_type_support_data_t;

static _RunPid_Result_type_support_data_t _RunPid_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_Result_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_Result)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_Feedback_type_support_ids_t;

static const _RunPid_Feedback_type_support_ids_t _RunPid_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_Feedback_type_support_symbol_names_t _RunPid_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_Feedback)),
  }
};

typedef struct _RunPid_Feedback_type_support_data_t
{
  void * data[2];
} _RunPid_Feedback_type_support_data_t;

static _RunPid_Feedback_type_support_data_t _RunPid_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_Feedback_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_Feedback)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_SendGoal_Request_type_support_ids_t;

static const _RunPid_SendGoal_Request_type_support_ids_t _RunPid_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_SendGoal_Request_type_support_symbol_names_t _RunPid_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_SendGoal_Request)),
  }
};

typedef struct _RunPid_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RunPid_SendGoal_Request_type_support_data_t;

static _RunPid_SendGoal_Request_type_support_data_t _RunPid_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_SendGoal_Request_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_SendGoal_Request)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_SendGoal_Response_type_support_ids_t;

static const _RunPid_SendGoal_Response_type_support_ids_t _RunPid_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_SendGoal_Response_type_support_symbol_names_t _RunPid_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_SendGoal_Response)),
  }
};

typedef struct _RunPid_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RunPid_SendGoal_Response_type_support_data_t;

static _RunPid_SendGoal_Response_type_support_data_t _RunPid_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_SendGoal_Response_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_SendGoal_Response)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_SendGoal_type_support_ids_t;

static const _RunPid_SendGoal_type_support_ids_t _RunPid_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_SendGoal_type_support_symbol_names_t _RunPid_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_SendGoal)),
  }
};

typedef struct _RunPid_SendGoal_type_support_data_t
{
  void * data[2];
} _RunPid_SendGoal_type_support_data_t;

static _RunPid_SendGoal_type_support_data_t _RunPid_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_SendGoal_service_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RunPid_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RunPid_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunPid_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_SendGoal)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_GetResult_Request_type_support_ids_t;

static const _RunPid_GetResult_Request_type_support_ids_t _RunPid_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_GetResult_Request_type_support_symbol_names_t _RunPid_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_GetResult_Request)),
  }
};

typedef struct _RunPid_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RunPid_GetResult_Request_type_support_data_t;

static _RunPid_GetResult_Request_type_support_data_t _RunPid_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_GetResult_Request_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_GetResult_Request)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_GetResult_Response_type_support_ids_t;

static const _RunPid_GetResult_Response_type_support_ids_t _RunPid_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_GetResult_Response_type_support_symbol_names_t _RunPid_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_GetResult_Response)),
  }
};

typedef struct _RunPid_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RunPid_GetResult_Response_type_support_data_t;

static _RunPid_GetResult_Response_type_support_data_t _RunPid_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_GetResult_Response_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_GetResult_Response)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_GetResult_type_support_ids_t;

static const _RunPid_GetResult_type_support_ids_t _RunPid_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_GetResult_type_support_symbol_names_t _RunPid_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_GetResult)),
  }
};

typedef struct _RunPid_GetResult_type_support_data_t
{
  void * data[2];
} _RunPid_GetResult_type_support_data_t;

static _RunPid_GetResult_type_support_data_t _RunPid_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_GetResult_service_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RunPid_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RunPid_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunPid_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_GetResult)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__struct.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuper_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _RunPid_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPid_FeedbackMessage_type_support_ids_t;

static const _RunPid_FeedbackMessage_type_support_ids_t _RunPid_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RunPid_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPid_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPid_FeedbackMessage_type_support_symbol_names_t _RunPid_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tuper_interfaces, action, RunPid_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tuper_interfaces, action, RunPid_FeedbackMessage)),
  }
};

typedef struct _RunPid_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RunPid_FeedbackMessage_type_support_data_t;

static _RunPid_FeedbackMessage_type_support_data_t _RunPid_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPid_FeedbackMessage_message_typesupport_map = {
  2,
  "tuper_interfaces",
  &_RunPid_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RunPid_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RunPid_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPid_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPid_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tuper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tuper_interfaces, action, RunPid_FeedbackMessage)() {
  return &::tuper_interfaces::action::rosidl_typesupport_c::RunPid_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "tuper_interfaces/action/run_pid.h"
// already included above
// #include "tuper_interfaces/action/detail/run_pid__type_support.h"

static rosidl_action_type_support_t _tuper_interfaces__action__RunPid__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, tuper_interfaces, action, RunPid)()
{
  // Thread-safe by always writing the same values to the static struct
  _tuper_interfaces__action__RunPid__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, tuper_interfaces, action, RunPid_SendGoal)();
  _tuper_interfaces__action__RunPid__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, tuper_interfaces, action, RunPid_GetResult)();
  _tuper_interfaces__action__RunPid__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _tuper_interfaces__action__RunPid__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, tuper_interfaces, action, RunPid_FeedbackMessage)();
  _tuper_interfaces__action__RunPid__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_tuper_interfaces__action__RunPid__typesupport_c;
}

#ifdef __cplusplus
}
#endif
