// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dobot:msg/LowerCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_cmd.h"


#ifndef DOBOT__MSG__DETAIL__LOWER_CMD__FUNCTIONS_H_
#define DOBOT__MSG__DETAIL__LOWER_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "dobot/msg/rosidl_generator_c__visibility_control.h"

#include "dobot/msg/detail/lower_cmd__struct.h"

/// Initialize msg/LowerCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot__msg__LowerCmd
 * )) before or use
 * dobot__msg__LowerCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
bool
dobot__msg__LowerCmd__init(dobot__msg__LowerCmd * msg);

/// Finalize msg/LowerCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
void
dobot__msg__LowerCmd__fini(dobot__msg__LowerCmd * msg);

/// Create msg/LowerCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot__msg__LowerCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
dobot__msg__LowerCmd *
dobot__msg__LowerCmd__create(void);

/// Destroy msg/LowerCmd message.
/**
 * It calls
 * dobot__msg__LowerCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
void
dobot__msg__LowerCmd__destroy(dobot__msg__LowerCmd * msg);

/// Check for msg/LowerCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
bool
dobot__msg__LowerCmd__are_equal(const dobot__msg__LowerCmd * lhs, const dobot__msg__LowerCmd * rhs);

/// Copy a msg/LowerCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_dobot
bool
dobot__msg__LowerCmd__copy(
  const dobot__msg__LowerCmd * input,
  dobot__msg__LowerCmd * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__LowerCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__LowerCmd__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__LowerCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__LowerCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LowerCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot__msg__LowerCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
bool
dobot__msg__LowerCmd__Sequence__init(dobot__msg__LowerCmd__Sequence * array, size_t size);

/// Finalize array of msg/LowerCmd messages.
/**
 * It calls
 * dobot__msg__LowerCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
void
dobot__msg__LowerCmd__Sequence__fini(dobot__msg__LowerCmd__Sequence * array);

/// Create array of msg/LowerCmd messages.
/**
 * It allocates the memory for the array and calls
 * dobot__msg__LowerCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
dobot__msg__LowerCmd__Sequence *
dobot__msg__LowerCmd__Sequence__create(size_t size);

/// Destroy array of msg/LowerCmd messages.
/**
 * It calls
 * dobot__msg__LowerCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
void
dobot__msg__LowerCmd__Sequence__destroy(dobot__msg__LowerCmd__Sequence * array);

/// Check for msg/LowerCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot
bool
dobot__msg__LowerCmd__Sequence__are_equal(const dobot__msg__LowerCmd__Sequence * lhs, const dobot__msg__LowerCmd__Sequence * rhs);

/// Copy an array of msg/LowerCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_dobot
bool
dobot__msg__LowerCmd__Sequence__copy(
  const dobot__msg__LowerCmd__Sequence * input,
  dobot__msg__LowerCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__LOWER_CMD__FUNCTIONS_H_
