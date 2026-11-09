// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:msg/SetCalibrationFlag.idl
// generated code does not contain a copyright notice
#include "dobot/msg/detail/set_calibration_flag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dobot__msg__SetCalibrationFlag__init(dobot__msg__SetCalibrationFlag * msg)
{
  if (!msg) {
    return false;
  }
  // flag
  return true;
}

void
dobot__msg__SetCalibrationFlag__fini(dobot__msg__SetCalibrationFlag * msg)
{
  if (!msg) {
    return;
  }
  // flag
}

bool
dobot__msg__SetCalibrationFlag__are_equal(const dobot__msg__SetCalibrationFlag * lhs, const dobot__msg__SetCalibrationFlag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // flag
  for (size_t i = 0; i < 30; ++i) {
    if (lhs->flag[i] != rhs->flag[i]) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__SetCalibrationFlag__copy(
  const dobot__msg__SetCalibrationFlag * input,
  dobot__msg__SetCalibrationFlag * output)
{
  if (!input || !output) {
    return false;
  }
  // flag
  for (size_t i = 0; i < 30; ++i) {
    output->flag[i] = input->flag[i];
  }
  return true;
}

dobot__msg__SetCalibrationFlag *
dobot__msg__SetCalibrationFlag__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__SetCalibrationFlag * msg = (dobot__msg__SetCalibrationFlag *)allocator.allocate(sizeof(dobot__msg__SetCalibrationFlag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__msg__SetCalibrationFlag));
  bool success = dobot__msg__SetCalibrationFlag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__msg__SetCalibrationFlag__destroy(dobot__msg__SetCalibrationFlag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__msg__SetCalibrationFlag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__msg__SetCalibrationFlag__Sequence__init(dobot__msg__SetCalibrationFlag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__SetCalibrationFlag * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__msg__SetCalibrationFlag)) {
      return false;
    }
    data = (dobot__msg__SetCalibrationFlag *)allocator.zero_allocate(size, sizeof(dobot__msg__SetCalibrationFlag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__msg__SetCalibrationFlag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__msg__SetCalibrationFlag__fini(&data[i - 1]);
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
dobot__msg__SetCalibrationFlag__Sequence__fini(dobot__msg__SetCalibrationFlag__Sequence * array)
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
      dobot__msg__SetCalibrationFlag__fini(&array->data[i]);
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

dobot__msg__SetCalibrationFlag__Sequence *
dobot__msg__SetCalibrationFlag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__SetCalibrationFlag__Sequence * array = (dobot__msg__SetCalibrationFlag__Sequence *)allocator.allocate(sizeof(dobot__msg__SetCalibrationFlag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__msg__SetCalibrationFlag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__msg__SetCalibrationFlag__Sequence__destroy(dobot__msg__SetCalibrationFlag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__msg__SetCalibrationFlag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__msg__SetCalibrationFlag__Sequence__are_equal(const dobot__msg__SetCalibrationFlag__Sequence * lhs, const dobot__msg__SetCalibrationFlag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__msg__SetCalibrationFlag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__SetCalibrationFlag__Sequence__copy(
  const dobot__msg__SetCalibrationFlag__Sequence * input,
  dobot__msg__SetCalibrationFlag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__msg__SetCalibrationFlag)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__msg__SetCalibrationFlag);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__msg__SetCalibrationFlag * data =
      (dobot__msg__SetCalibrationFlag *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__msg__SetCalibrationFlag__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__msg__SetCalibrationFlag__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__msg__SetCalibrationFlag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
