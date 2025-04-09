// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tuper_interfaces:action/RunPid.idl
// generated code does not contain a copyright notice

#ifndef TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__FUNCTIONS_H_
#define TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tuper_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tuper_interfaces/action/detail/run_pid__struct.h"

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_Goal
 * )) before or use
 * tuper_interfaces__action__RunPid_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Goal__init(tuper_interfaces__action__RunPid_Goal * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Goal__fini(tuper_interfaces__action__RunPid_Goal * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_Goal *
tuper_interfaces__action__RunPid_Goal__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Goal__destroy(tuper_interfaces__action__RunPid_Goal * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Goal__are_equal(const tuper_interfaces__action__RunPid_Goal * lhs, const tuper_interfaces__action__RunPid_Goal * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Goal__copy(
  const tuper_interfaces__action__RunPid_Goal * input,
  tuper_interfaces__action__RunPid_Goal * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Goal__Sequence__init(tuper_interfaces__action__RunPid_Goal__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Goal__Sequence__fini(tuper_interfaces__action__RunPid_Goal__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_Goal__Sequence *
tuper_interfaces__action__RunPid_Goal__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Goal__Sequence__destroy(tuper_interfaces__action__RunPid_Goal__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Goal__Sequence__are_equal(const tuper_interfaces__action__RunPid_Goal__Sequence * lhs, const tuper_interfaces__action__RunPid_Goal__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Goal__Sequence__copy(
  const tuper_interfaces__action__RunPid_Goal__Sequence * input,
  tuper_interfaces__action__RunPid_Goal__Sequence * output);

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_Result
 * )) before or use
 * tuper_interfaces__action__RunPid_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Result__init(tuper_interfaces__action__RunPid_Result * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Result__fini(tuper_interfaces__action__RunPid_Result * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_Result *
tuper_interfaces__action__RunPid_Result__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Result__destroy(tuper_interfaces__action__RunPid_Result * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Result__are_equal(const tuper_interfaces__action__RunPid_Result * lhs, const tuper_interfaces__action__RunPid_Result * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Result__copy(
  const tuper_interfaces__action__RunPid_Result * input,
  tuper_interfaces__action__RunPid_Result * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Result__Sequence__init(tuper_interfaces__action__RunPid_Result__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Result__Sequence__fini(tuper_interfaces__action__RunPid_Result__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_Result__Sequence *
tuper_interfaces__action__RunPid_Result__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Result__Sequence__destroy(tuper_interfaces__action__RunPid_Result__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Result__Sequence__are_equal(const tuper_interfaces__action__RunPid_Result__Sequence * lhs, const tuper_interfaces__action__RunPid_Result__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Result__Sequence__copy(
  const tuper_interfaces__action__RunPid_Result__Sequence * input,
  tuper_interfaces__action__RunPid_Result__Sequence * output);

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_Feedback
 * )) before or use
 * tuper_interfaces__action__RunPid_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Feedback__init(tuper_interfaces__action__RunPid_Feedback * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Feedback__fini(tuper_interfaces__action__RunPid_Feedback * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_Feedback *
tuper_interfaces__action__RunPid_Feedback__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Feedback__destroy(tuper_interfaces__action__RunPid_Feedback * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Feedback__are_equal(const tuper_interfaces__action__RunPid_Feedback * lhs, const tuper_interfaces__action__RunPid_Feedback * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Feedback__copy(
  const tuper_interfaces__action__RunPid_Feedback * input,
  tuper_interfaces__action__RunPid_Feedback * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Feedback__Sequence__init(tuper_interfaces__action__RunPid_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Feedback__Sequence__fini(tuper_interfaces__action__RunPid_Feedback__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_Feedback__Sequence *
tuper_interfaces__action__RunPid_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_Feedback__Sequence__destroy(tuper_interfaces__action__RunPid_Feedback__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Feedback__Sequence__are_equal(const tuper_interfaces__action__RunPid_Feedback__Sequence * lhs, const tuper_interfaces__action__RunPid_Feedback__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_Feedback__Sequence__copy(
  const tuper_interfaces__action__RunPid_Feedback__Sequence * input,
  tuper_interfaces__action__RunPid_Feedback__Sequence * output);

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_SendGoal_Request
 * )) before or use
 * tuper_interfaces__action__RunPid_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Request__init(tuper_interfaces__action__RunPid_SendGoal_Request * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Request__fini(tuper_interfaces__action__RunPid_SendGoal_Request * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_SendGoal_Request *
tuper_interfaces__action__RunPid_SendGoal_Request__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Request__destroy(tuper_interfaces__action__RunPid_SendGoal_Request * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Request__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Request * lhs, const tuper_interfaces__action__RunPid_SendGoal_Request * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Request__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Request * input,
  tuper_interfaces__action__RunPid_SendGoal_Request * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__init(tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__fini(tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence *
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__destroy(tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * lhs, const tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Request__Sequence__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * input,
  tuper_interfaces__action__RunPid_SendGoal_Request__Sequence * output);

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_SendGoal_Response
 * )) before or use
 * tuper_interfaces__action__RunPid_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Response__init(tuper_interfaces__action__RunPid_SendGoal_Response * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Response__fini(tuper_interfaces__action__RunPid_SendGoal_Response * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_SendGoal_Response *
tuper_interfaces__action__RunPid_SendGoal_Response__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Response__destroy(tuper_interfaces__action__RunPid_SendGoal_Response * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Response__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Response * lhs, const tuper_interfaces__action__RunPid_SendGoal_Response * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Response__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Response * input,
  tuper_interfaces__action__RunPid_SendGoal_Response * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__init(tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__fini(tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence *
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__destroy(tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__are_equal(const tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * lhs, const tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_SendGoal_Response__Sequence__copy(
  const tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * input,
  tuper_interfaces__action__RunPid_SendGoal_Response__Sequence * output);

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_GetResult_Request
 * )) before or use
 * tuper_interfaces__action__RunPid_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Request__init(tuper_interfaces__action__RunPid_GetResult_Request * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Request__fini(tuper_interfaces__action__RunPid_GetResult_Request * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_GetResult_Request *
tuper_interfaces__action__RunPid_GetResult_Request__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Request__destroy(tuper_interfaces__action__RunPid_GetResult_Request * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Request__are_equal(const tuper_interfaces__action__RunPid_GetResult_Request * lhs, const tuper_interfaces__action__RunPid_GetResult_Request * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Request__copy(
  const tuper_interfaces__action__RunPid_GetResult_Request * input,
  tuper_interfaces__action__RunPid_GetResult_Request * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__init(tuper_interfaces__action__RunPid_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__fini(tuper_interfaces__action__RunPid_GetResult_Request__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_GetResult_Request__Sequence *
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__destroy(tuper_interfaces__action__RunPid_GetResult_Request__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__are_equal(const tuper_interfaces__action__RunPid_GetResult_Request__Sequence * lhs, const tuper_interfaces__action__RunPid_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Request__Sequence__copy(
  const tuper_interfaces__action__RunPid_GetResult_Request__Sequence * input,
  tuper_interfaces__action__RunPid_GetResult_Request__Sequence * output);

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_GetResult_Response
 * )) before or use
 * tuper_interfaces__action__RunPid_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Response__init(tuper_interfaces__action__RunPid_GetResult_Response * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Response__fini(tuper_interfaces__action__RunPid_GetResult_Response * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_GetResult_Response *
tuper_interfaces__action__RunPid_GetResult_Response__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Response__destroy(tuper_interfaces__action__RunPid_GetResult_Response * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Response__are_equal(const tuper_interfaces__action__RunPid_GetResult_Response * lhs, const tuper_interfaces__action__RunPid_GetResult_Response * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Response__copy(
  const tuper_interfaces__action__RunPid_GetResult_Response * input,
  tuper_interfaces__action__RunPid_GetResult_Response * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__init(tuper_interfaces__action__RunPid_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__fini(tuper_interfaces__action__RunPid_GetResult_Response__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_GetResult_Response__Sequence *
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__destroy(tuper_interfaces__action__RunPid_GetResult_Response__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__are_equal(const tuper_interfaces__action__RunPid_GetResult_Response__Sequence * lhs, const tuper_interfaces__action__RunPid_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_GetResult_Response__Sequence__copy(
  const tuper_interfaces__action__RunPid_GetResult_Response__Sequence * input,
  tuper_interfaces__action__RunPid_GetResult_Response__Sequence * output);

/// Initialize action/RunPid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuper_interfaces__action__RunPid_FeedbackMessage
 * )) before or use
 * tuper_interfaces__action__RunPid_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_FeedbackMessage__init(tuper_interfaces__action__RunPid_FeedbackMessage * msg);

/// Finalize action/RunPid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_FeedbackMessage__fini(tuper_interfaces__action__RunPid_FeedbackMessage * msg);

/// Create action/RunPid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuper_interfaces__action__RunPid_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_FeedbackMessage *
tuper_interfaces__action__RunPid_FeedbackMessage__create();

/// Destroy action/RunPid message.
/**
 * It calls
 * tuper_interfaces__action__RunPid_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_FeedbackMessage__destroy(tuper_interfaces__action__RunPid_FeedbackMessage * msg);

/// Check for action/RunPid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_FeedbackMessage__are_equal(const tuper_interfaces__action__RunPid_FeedbackMessage * lhs, const tuper_interfaces__action__RunPid_FeedbackMessage * rhs);

/// Copy a action/RunPid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_FeedbackMessage__copy(
  const tuper_interfaces__action__RunPid_FeedbackMessage * input,
  tuper_interfaces__action__RunPid_FeedbackMessage * output);

/// Initialize array of action/RunPid messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuper_interfaces__action__RunPid_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__init(tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__fini(tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * array);

/// Create array of action/RunPid messages.
/**
 * It allocates the memory for the array and calls
 * tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence *
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RunPid messages.
/**
 * It calls
 * tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
void
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__destroy(tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * array);

/// Check for action/RunPid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__are_equal(const tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * lhs, const tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RunPid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuper_interfaces
bool
tuper_interfaces__action__RunPid_FeedbackMessage__Sequence__copy(
  const tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * input,
  tuper_interfaces__action__RunPid_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TUPER_INTERFACES__ACTION__DETAIL__RUN_PID__FUNCTIONS_H_
