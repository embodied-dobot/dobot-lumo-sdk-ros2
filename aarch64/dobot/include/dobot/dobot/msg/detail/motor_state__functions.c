// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:msg/MotorState.idl
// generated code does not contain a copyright notice
#include "dobot/msg/detail/motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dobot__msg__MotorState__init(dobot__msg__MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // q
  // dq
  // ddq
  // tau_est
  // tau_cmd
  // current_feedback
  // current_cmd
  // q_raw
  // dq_raw
  // ddq_raw
  // tau_raw
  // mcu_temp
  // mos_temp
  // motor_temp
  // bus_voltage
  return true;
}

void
dobot__msg__MotorState__fini(dobot__msg__MotorState * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // q
  // dq
  // ddq
  // tau_est
  // tau_cmd
  // current_feedback
  // current_cmd
  // q_raw
  // dq_raw
  // ddq_raw
  // tau_raw
  // mcu_temp
  // mos_temp
  // motor_temp
  // bus_voltage
}

bool
dobot__msg__MotorState__are_equal(const dobot__msg__MotorState * lhs, const dobot__msg__MotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // q
  if (lhs->q != rhs->q) {
    return false;
  }
  // dq
  if (lhs->dq != rhs->dq) {
    return false;
  }
  // ddq
  if (lhs->ddq != rhs->ddq) {
    return false;
  }
  // tau_est
  if (lhs->tau_est != rhs->tau_est) {
    return false;
  }
  // tau_cmd
  if (lhs->tau_cmd != rhs->tau_cmd) {
    return false;
  }
  // current_feedback
  if (lhs->current_feedback != rhs->current_feedback) {
    return false;
  }
  // current_cmd
  if (lhs->current_cmd != rhs->current_cmd) {
    return false;
  }
  // q_raw
  if (lhs->q_raw != rhs->q_raw) {
    return false;
  }
  // dq_raw
  if (lhs->dq_raw != rhs->dq_raw) {
    return false;
  }
  // ddq_raw
  if (lhs->ddq_raw != rhs->ddq_raw) {
    return false;
  }
  // tau_raw
  if (lhs->tau_raw != rhs->tau_raw) {
    return false;
  }
  // mcu_temp
  if (lhs->mcu_temp != rhs->mcu_temp) {
    return false;
  }
  // mos_temp
  if (lhs->mos_temp != rhs->mos_temp) {
    return false;
  }
  // motor_temp
  if (lhs->motor_temp != rhs->motor_temp) {
    return false;
  }
  // bus_voltage
  if (lhs->bus_voltage != rhs->bus_voltage) {
    return false;
  }
  return true;
}

bool
dobot__msg__MotorState__copy(
  const dobot__msg__MotorState * input,
  dobot__msg__MotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // q
  output->q = input->q;
  // dq
  output->dq = input->dq;
  // ddq
  output->ddq = input->ddq;
  // tau_est
  output->tau_est = input->tau_est;
  // tau_cmd
  output->tau_cmd = input->tau_cmd;
  // current_feedback
  output->current_feedback = input->current_feedback;
  // current_cmd
  output->current_cmd = input->current_cmd;
  // q_raw
  output->q_raw = input->q_raw;
  // dq_raw
  output->dq_raw = input->dq_raw;
  // ddq_raw
  output->ddq_raw = input->ddq_raw;
  // tau_raw
  output->tau_raw = input->tau_raw;
  // mcu_temp
  output->mcu_temp = input->mcu_temp;
  // mos_temp
  output->mos_temp = input->mos_temp;
  // motor_temp
  output->motor_temp = input->motor_temp;
  // bus_voltage
  output->bus_voltage = input->bus_voltage;
  return true;
}

dobot__msg__MotorState *
dobot__msg__MotorState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__MotorState * msg = (dobot__msg__MotorState *)allocator.allocate(sizeof(dobot__msg__MotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__msg__MotorState));
  bool success = dobot__msg__MotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__msg__MotorState__destroy(dobot__msg__MotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__msg__MotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__msg__MotorState__Sequence__init(dobot__msg__MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__MotorState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__msg__MotorState)) {
      return false;
    }
    data = (dobot__msg__MotorState *)allocator.zero_allocate(size, sizeof(dobot__msg__MotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__msg__MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__msg__MotorState__fini(&data[i - 1]);
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
dobot__msg__MotorState__Sequence__fini(dobot__msg__MotorState__Sequence * array)
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
      dobot__msg__MotorState__fini(&array->data[i]);
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

dobot__msg__MotorState__Sequence *
dobot__msg__MotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__MotorState__Sequence * array = (dobot__msg__MotorState__Sequence *)allocator.allocate(sizeof(dobot__msg__MotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__msg__MotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__msg__MotorState__Sequence__destroy(dobot__msg__MotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__msg__MotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__msg__MotorState__Sequence__are_equal(const dobot__msg__MotorState__Sequence * lhs, const dobot__msg__MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__msg__MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__MotorState__Sequence__copy(
  const dobot__msg__MotorState__Sequence * input,
  dobot__msg__MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__msg__MotorState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__msg__MotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__msg__MotorState * data =
      (dobot__msg__MotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__msg__MotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__msg__MotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__msg__MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
