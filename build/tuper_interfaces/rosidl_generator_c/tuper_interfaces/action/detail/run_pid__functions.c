// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tuper_interfaces:action/RunPid.idl
// generated code does not contain a copyright notice
#include "tuper_interfaces/action/detail/run_pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tuper_interfaces__action__RunPid_Goal__init(tuper_interfaces__action__RunPid_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // setpoint
  return true;
}

void
tuper_interfaces__action__RunPid_Goal__fini(tuper_interfaces__action__RunPid_Goal * msg)
{
  if (!msg) {
    return;
  }
  // setpoint
}

bool
tuper_interfaces__action__RunPid_Goal__are_equal(const tuper_interfaces__action__RunPid_Goal * lhs, const tuper_interfaces__action__RunPid_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // setpoint
  if (lhs->setpoint != rhs->setpoint) {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_Goal__copy(
  const tuper_interfaces__action__RunPid_Goal * input,
  tuper_interfaces__action__RunPid_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // setpoint
  output->setpoint = input->setpoint;
  return true;
}

tuper_interfaces__action__RunPid_Goal *
tuper_interfaces__action__RunPid_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Goal * msg = (tuper_interfaces__action__RunPid_Goal *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_Goal));
  bool success = tuper_interfaces__action__RunPid_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_Goal__destroy(tuper_interfaces__action__RunPid_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_Goal__Sequence__init(tuper_interfaces__action__RunPid_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Goal * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_Goal *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_Goal__Sequence__fini(tuper_interfaces__action__RunPid_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_Goal__Sequence *
tuper_interfaces__action__RunPid_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Goal__Sequence * array = (tuper_interfaces__action__RunPid_Goal__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_Goal__Sequence__destroy(tuper_interfaces__action__RunPid_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_Goal__Sequence__are_equal(const tuper_interfaces__action__RunPid_Goal__Sequence * lhs, const tuper_interfaces__action__RunPid_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_Goal__Sequence__copy(
  const tuper_interfaces__action__RunPid_Goal__Sequence * input,
  tuper_interfaces__action__RunPid_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_Goal * data =
      (tuper_interfaces__action__RunPid_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tuper_interfaces__action__RunPid_Result__init(tuper_interfaces__action__RunPid_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tuper_interfaces__action__RunPid_Result__fini(tuper_interfaces__action__RunPid_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tuper_interfaces__action__RunPid_Result__are_equal(const tuper_interfaces__action__RunPid_Result * lhs, const tuper_interfaces__action__RunPid_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_Result__copy(
  const tuper_interfaces__action__RunPid_Result * input,
  tuper_interfaces__action__RunPid_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tuper_interfaces__action__RunPid_Result *
tuper_interfaces__action__RunPid_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Result * msg = (tuper_interfaces__action__RunPid_Result *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_Result));
  bool success = tuper_interfaces__action__RunPid_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_Result__destroy(tuper_interfaces__action__RunPid_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_Result__Sequence__init(tuper_interfaces__action__RunPid_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Result * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_Result *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_Result__Sequence__fini(tuper_interfaces__action__RunPid_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_Result__Sequence *
tuper_interfaces__action__RunPid_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Result__Sequence * array = (tuper_interfaces__action__RunPid_Result__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_Result__Sequence__destroy(tuper_interfaces__action__RunPid_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_Result__Sequence__are_equal(const tuper_interfaces__action__RunPid_Result__Sequence * lhs, const tuper_interfaces__action__RunPid_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_Result__Sequence__copy(
  const tuper_interfaces__action__RunPid_Result__Sequence * input,
  tuper_interfaces__action__RunPid_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_Result * data =
      (tuper_interfaces__action__RunPid_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tuper_interfaces__action__RunPid_Feedback__init(tuper_interfaces__action__RunPid_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current
  return true;
}

void
tuper_interfaces__action__RunPid_Feedback__fini(tuper_interfaces__action__RunPid_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current
}

bool
tuper_interfaces__action__RunPid_Feedback__are_equal(const tuper_interfaces__action__RunPid_Feedback * lhs, const tuper_interfaces__action__RunPid_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_Feedback__copy(
  const tuper_interfaces__action__RunPid_Feedback * input,
  tuper_interfaces__action__RunPid_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current
  output->current = input->current;
  return true;
}

tuper_interfaces__action__RunPid_Feedback *
tuper_interfaces__action__RunPid_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Feedback * msg = (tuper_interfaces__action__RunPid_Feedback *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_Feedback));
  bool success = tuper_interfaces__action__RunPid_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_Feedback__destroy(tuper_interfaces__action__RunPid_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_Feedback__Sequence__init(tuper_interfaces__action__RunPid_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Feedback * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_Feedback *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_Feedback__Sequence__fini(tuper_interfaces__action__RunPid_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_Feedback__Sequence *
tuper_interfaces__action__RunPid_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_Feedback__Sequence * array = (tuper_interfaces__action__RunPid_Feedback__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_Feedback__Sequence__destroy(tuper_interfaces__action__RunPid_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_Feedback__Sequence__are_equal(const tuper_interfaces__action__RunPid_Feedback__Sequence * lhs, const tuper_interfaces__action__RunPid_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_Feedback__Sequence__copy(
  const tuper_interfaces__action__RunPid_Feedback__Sequence * input,
  tuper_interfaces__action__RunPid_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_Feedback * data =
      (tuper_interfaces__action__RunPid_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tuper_interfaces/action/detail/run_pid__functions.h"

bool
tuper_interfaces__action__RunPid_SendGoal_Request__init(tuper_interfaces__action__RunPid_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tuper_interfaces__action__RunPid_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tuper_interfaces__action__RunPid_Goal__init(&msg->goal)) {
    tuper_interfaces__action__RunPid_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tuper_interfaces__action__RunPid_SendGoal_Request__fini(tuper_interfaces__action__RunPid_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tuper_interfaces__action__RunPid_Goal__fini(&msg->goal);
}

bool
tuper_interfaces__action__RunPid_SendGoal_Request__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Request * lhs, const tuper_interfaces__action__RunPid_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tuper_interfaces__action__RunPid_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_SendGoal_Request__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Request * input,
  tuper_interfaces__action__RunPid_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tuper_interfaces__action__RunPid_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tuper_interfaces__action__RunPid_SendGoal_Request *
tuper_interfaces__action__RunPid_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_SendGoal_Request * msg = (tuper_interfaces__action__RunPid_SendGoal_Request *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_SendGoal_Request));
  bool success = tuper_interfaces__action__RunPid_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_SendGoal_Request__destroy(tuper_interfaces__action__RunPid_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__init(tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_SendGoal_Request * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__fini(tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_SendGoal_Request__Sequence *
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * array = (tuper_interfaces__action__RunPid_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__destroy(tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * lhs, const tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * input,
  tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_SendGoal_Request * data =
      (tuper_interfaces__action__RunPid_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tuper_interfaces__action__RunPid_SendGoal_Response__init(tuper_interfaces__action__RunPid_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tuper_interfaces__action__RunPid_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tuper_interfaces__action__RunPid_SendGoal_Response__fini(tuper_interfaces__action__RunPid_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tuper_interfaces__action__RunPid_SendGoal_Response__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Response * lhs, const tuper_interfaces__action__RunPid_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_SendGoal_Response__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Response * input,
  tuper_interfaces__action__RunPid_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tuper_interfaces__action__RunPid_SendGoal_Response *
tuper_interfaces__action__RunPid_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_SendGoal_Response * msg = (tuper_interfaces__action__RunPid_SendGoal_Response *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_SendGoal_Response));
  bool success = tuper_interfaces__action__RunPid_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_SendGoal_Response__destroy(tuper_interfaces__action__RunPid_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__init(tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_SendGoal_Response * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__fini(tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_SendGoal_Response__Sequence *
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * array = (tuper_interfaces__action__RunPid_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__destroy(tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * lhs, const tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * input,
  tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_SendGoal_Response * data =
      (tuper_interfaces__action__RunPid_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tuper_interfaces__action__RunPid_GetResult_Request__init(tuper_interfaces__action__RunPid_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tuper_interfaces__action__RunPid_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tuper_interfaces__action__RunPid_GetResult_Request__fini(tuper_interfaces__action__RunPid_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tuper_interfaces__action__RunPid_GetResult_Request__are_equal(const tuper_interfaces__action__RunPid_GetResult_Request * lhs, const tuper_interfaces__action__RunPid_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_GetResult_Request__copy(
  const tuper_interfaces__action__RunPid_GetResult_Request * input,
  tuper_interfaces__action__RunPid_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tuper_interfaces__action__RunPid_GetResult_Request *
tuper_interfaces__action__RunPid_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_GetResult_Request * msg = (tuper_interfaces__action__RunPid_GetResult_Request *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_GetResult_Request));
  bool success = tuper_interfaces__action__RunPid_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_GetResult_Request__destroy(tuper_interfaces__action__RunPid_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__init(tuper_interfaces__action__RunPid_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_GetResult_Request * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_GetResult_Request *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__fini(tuper_interfaces__action__RunPid_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_GetResult_Request__Sequence *
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_GetResult_Request__Sequence * array = (tuper_interfaces__action__RunPid_GetResult_Request__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__destroy(tuper_interfaces__action__RunPid_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__are_equal(const tuper_interfaces__action__RunPid_GetResult_Request__Sequence * lhs, const tuper_interfaces__action__RunPid_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__copy(
  const tuper_interfaces__action__RunPid_GetResult_Request__Sequence * input,
  tuper_interfaces__action__RunPid_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_GetResult_Request * data =
      (tuper_interfaces__action__RunPid_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tuper_interfaces/action/detail/run_pid__functions.h"

bool
tuper_interfaces__action__RunPid_GetResult_Response__init(tuper_interfaces__action__RunPid_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tuper_interfaces__action__RunPid_Result__init(&msg->result)) {
    tuper_interfaces__action__RunPid_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tuper_interfaces__action__RunPid_GetResult_Response__fini(tuper_interfaces__action__RunPid_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tuper_interfaces__action__RunPid_Result__fini(&msg->result);
}

bool
tuper_interfaces__action__RunPid_GetResult_Response__are_equal(const tuper_interfaces__action__RunPid_GetResult_Response * lhs, const tuper_interfaces__action__RunPid_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tuper_interfaces__action__RunPid_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_GetResult_Response__copy(
  const tuper_interfaces__action__RunPid_GetResult_Response * input,
  tuper_interfaces__action__RunPid_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tuper_interfaces__action__RunPid_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tuper_interfaces__action__RunPid_GetResult_Response *
tuper_interfaces__action__RunPid_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_GetResult_Response * msg = (tuper_interfaces__action__RunPid_GetResult_Response *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_GetResult_Response));
  bool success = tuper_interfaces__action__RunPid_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_GetResult_Response__destroy(tuper_interfaces__action__RunPid_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__init(tuper_interfaces__action__RunPid_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_GetResult_Response * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_GetResult_Response *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__fini(tuper_interfaces__action__RunPid_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_GetResult_Response__Sequence *
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_GetResult_Response__Sequence * array = (tuper_interfaces__action__RunPid_GetResult_Response__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__destroy(tuper_interfaces__action__RunPid_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__are_equal(const tuper_interfaces__action__RunPid_GetResult_Response__Sequence * lhs, const tuper_interfaces__action__RunPid_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__copy(
  const tuper_interfaces__action__RunPid_GetResult_Response__Sequence * input,
  tuper_interfaces__action__RunPid_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_GetResult_Response * data =
      (tuper_interfaces__action__RunPid_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tuper_interfaces/action/detail/run_pid__functions.h"

bool
tuper_interfaces__action__RunPid_FeedbackMessage__init(tuper_interfaces__action__RunPid_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tuper_interfaces__action__RunPid_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tuper_interfaces__action__RunPid_Feedback__init(&msg->feedback)) {
    tuper_interfaces__action__RunPid_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tuper_interfaces__action__RunPid_FeedbackMessage__fini(tuper_interfaces__action__RunPid_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tuper_interfaces__action__RunPid_Feedback__fini(&msg->feedback);
}

bool
tuper_interfaces__action__RunPid_FeedbackMessage__are_equal(const tuper_interfaces__action__RunPid_FeedbackMessage * lhs, const tuper_interfaces__action__RunPid_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tuper_interfaces__action__RunPid_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_FeedbackMessage__copy(
  const tuper_interfaces__action__RunPid_FeedbackMessage * input,
  tuper_interfaces__action__RunPid_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tuper_interfaces__action__RunPid_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tuper_interfaces__action__RunPid_FeedbackMessage *
tuper_interfaces__action__RunPid_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_FeedbackMessage * msg = (tuper_interfaces__action__RunPid_FeedbackMessage *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuper_interfaces__action__RunPid_FeedbackMessage));
  bool success = tuper_interfaces__action__RunPid_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuper_interfaces__action__RunPid_FeedbackMessage__destroy(tuper_interfaces__action__RunPid_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuper_interfaces__action__RunPid_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__init(tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_FeedbackMessage * data = NULL;

  if (size) {
    data = (tuper_interfaces__action__RunPid_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tuper_interfaces__action__RunPid_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuper_interfaces__action__RunPid_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuper_interfaces__action__RunPid_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__fini(tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tuper_interfaces__action__RunPid_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tuper_interfaces__action__RunPid_FeedbackMessage__Sequence *
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * array = (tuper_interfaces__action__RunPid_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tuper_interfaces__action__RunPid_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__destroy(tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__are_equal(const tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * lhs, const tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuper_interfaces__action__RunPid_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__copy(
  const tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * input,
  tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuper_interfaces__action__RunPid_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuper_interfaces__action__RunPid_FeedbackMessage * data =
      (tuper_interfaces__action__RunPid_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuper_interfaces__action__RunPid_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuper_interfaces__action__RunPid_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuper_interfaces__action__RunPid_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
