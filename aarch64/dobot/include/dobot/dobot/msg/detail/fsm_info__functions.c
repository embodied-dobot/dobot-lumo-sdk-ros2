// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:msg/FsmInfo.idl
// generated code does not contain a copyright notice
#include "dobot/msg/detail/fsm_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `dance_name`
// Member `model_file`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot__msg__FsmInfo__init(dobot__msg__FsmInfo * msg)
{
  if (!msg) {
    return false;
  }
  // fsm_id
  // is_dance
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    dobot__msg__FsmInfo__fini(msg);
    return false;
  }
  // dance_name
  if (!rosidl_runtime_c__String__init(&msg->dance_name)) {
    dobot__msg__FsmInfo__fini(msg);
    return false;
  }
  // model_file
  if (!rosidl_runtime_c__String__init(&msg->model_file)) {
    dobot__msg__FsmInfo__fini(msg);
    return false;
  }
  // motion_loop_length
  // motion_hold_back_steps
  // motion_start_step
  return true;
}

void
dobot__msg__FsmInfo__fini(dobot__msg__FsmInfo * msg)
{
  if (!msg) {
    return;
  }
  // fsm_id
  // is_dance
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // dance_name
  rosidl_runtime_c__String__fini(&msg->dance_name);
  // model_file
  rosidl_runtime_c__String__fini(&msg->model_file);
  // motion_loop_length
  // motion_hold_back_steps
  // motion_start_step
}

bool
dobot__msg__FsmInfo__are_equal(const dobot__msg__FsmInfo * lhs, const dobot__msg__FsmInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fsm_id
  if (lhs->fsm_id != rhs->fsm_id) {
    return false;
  }
  // is_dance
  if (lhs->is_dance != rhs->is_dance) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // dance_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dance_name), &(rhs->dance_name)))
  {
    return false;
  }
  // model_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_file), &(rhs->model_file)))
  {
    return false;
  }
  // motion_loop_length
  if (lhs->motion_loop_length != rhs->motion_loop_length) {
    return false;
  }
  // motion_hold_back_steps
  if (lhs->motion_hold_back_steps != rhs->motion_hold_back_steps) {
    return false;
  }
  // motion_start_step
  if (lhs->motion_start_step != rhs->motion_start_step) {
    return false;
  }
  return true;
}

bool
dobot__msg__FsmInfo__copy(
  const dobot__msg__FsmInfo * input,
  dobot__msg__FsmInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // fsm_id
  output->fsm_id = input->fsm_id;
  // is_dance
  output->is_dance = input->is_dance;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // dance_name
  if (!rosidl_runtime_c__String__copy(
      &(input->dance_name), &(output->dance_name)))
  {
    return false;
  }
  // model_file
  if (!rosidl_runtime_c__String__copy(
      &(input->model_file), &(output->model_file)))
  {
    return false;
  }
  // motion_loop_length
  output->motion_loop_length = input->motion_loop_length;
  // motion_hold_back_steps
  output->motion_hold_back_steps = input->motion_hold_back_steps;
  // motion_start_step
  output->motion_start_step = input->motion_start_step;
  return true;
}

dobot__msg__FsmInfo *
dobot__msg__FsmInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__FsmInfo * msg = (dobot__msg__FsmInfo *)allocator.allocate(sizeof(dobot__msg__FsmInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__msg__FsmInfo));
  bool success = dobot__msg__FsmInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__msg__FsmInfo__destroy(dobot__msg__FsmInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__msg__FsmInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__msg__FsmInfo__Sequence__init(dobot__msg__FsmInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__FsmInfo * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__msg__FsmInfo)) {
      return false;
    }
    data = (dobot__msg__FsmInfo *)allocator.zero_allocate(size, sizeof(dobot__msg__FsmInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__msg__FsmInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__msg__FsmInfo__fini(&data[i - 1]);
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
dobot__msg__FsmInfo__Sequence__fini(dobot__msg__FsmInfo__Sequence * array)
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
      dobot__msg__FsmInfo__fini(&array->data[i]);
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

dobot__msg__FsmInfo__Sequence *
dobot__msg__FsmInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__FsmInfo__Sequence * array = (dobot__msg__FsmInfo__Sequence *)allocator.allocate(sizeof(dobot__msg__FsmInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__msg__FsmInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__msg__FsmInfo__Sequence__destroy(dobot__msg__FsmInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__msg__FsmInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__msg__FsmInfo__Sequence__are_equal(const dobot__msg__FsmInfo__Sequence * lhs, const dobot__msg__FsmInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__msg__FsmInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__FsmInfo__Sequence__copy(
  const dobot__msg__FsmInfo__Sequence * input,
  dobot__msg__FsmInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__msg__FsmInfo)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__msg__FsmInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__msg__FsmInfo * data =
      (dobot__msg__FsmInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__msg__FsmInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__msg__FsmInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__msg__FsmInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
