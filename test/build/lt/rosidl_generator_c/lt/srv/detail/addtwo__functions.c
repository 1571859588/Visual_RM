// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lt:srv/Addtwo.idl
// generated code does not contain a copyright notice
#include "lt/srv/detail/addtwo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
lt__srv__Addtwo_Request__init(lt__srv__Addtwo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
lt__srv__Addtwo_Request__fini(lt__srv__Addtwo_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
lt__srv__Addtwo_Request__are_equal(const lt__srv__Addtwo_Request * lhs, const lt__srv__Addtwo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
lt__srv__Addtwo_Request__copy(
  const lt__srv__Addtwo_Request * input,
  lt__srv__Addtwo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

lt__srv__Addtwo_Request *
lt__srv__Addtwo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lt__srv__Addtwo_Request * msg = (lt__srv__Addtwo_Request *)allocator.allocate(sizeof(lt__srv__Addtwo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lt__srv__Addtwo_Request));
  bool success = lt__srv__Addtwo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lt__srv__Addtwo_Request__destroy(lt__srv__Addtwo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lt__srv__Addtwo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lt__srv__Addtwo_Request__Sequence__init(lt__srv__Addtwo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lt__srv__Addtwo_Request * data = NULL;

  if (size) {
    data = (lt__srv__Addtwo_Request *)allocator.zero_allocate(size, sizeof(lt__srv__Addtwo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lt__srv__Addtwo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lt__srv__Addtwo_Request__fini(&data[i - 1]);
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
lt__srv__Addtwo_Request__Sequence__fini(lt__srv__Addtwo_Request__Sequence * array)
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
      lt__srv__Addtwo_Request__fini(&array->data[i]);
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

lt__srv__Addtwo_Request__Sequence *
lt__srv__Addtwo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lt__srv__Addtwo_Request__Sequence * array = (lt__srv__Addtwo_Request__Sequence *)allocator.allocate(sizeof(lt__srv__Addtwo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lt__srv__Addtwo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lt__srv__Addtwo_Request__Sequence__destroy(lt__srv__Addtwo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lt__srv__Addtwo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lt__srv__Addtwo_Request__Sequence__are_equal(const lt__srv__Addtwo_Request__Sequence * lhs, const lt__srv__Addtwo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lt__srv__Addtwo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lt__srv__Addtwo_Request__Sequence__copy(
  const lt__srv__Addtwo_Request__Sequence * input,
  lt__srv__Addtwo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lt__srv__Addtwo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lt__srv__Addtwo_Request * data =
      (lt__srv__Addtwo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lt__srv__Addtwo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lt__srv__Addtwo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lt__srv__Addtwo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lt__srv__Addtwo_Response__init(lt__srv__Addtwo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
lt__srv__Addtwo_Response__fini(lt__srv__Addtwo_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
lt__srv__Addtwo_Response__are_equal(const lt__srv__Addtwo_Response * lhs, const lt__srv__Addtwo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
lt__srv__Addtwo_Response__copy(
  const lt__srv__Addtwo_Response * input,
  lt__srv__Addtwo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

lt__srv__Addtwo_Response *
lt__srv__Addtwo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lt__srv__Addtwo_Response * msg = (lt__srv__Addtwo_Response *)allocator.allocate(sizeof(lt__srv__Addtwo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lt__srv__Addtwo_Response));
  bool success = lt__srv__Addtwo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lt__srv__Addtwo_Response__destroy(lt__srv__Addtwo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lt__srv__Addtwo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lt__srv__Addtwo_Response__Sequence__init(lt__srv__Addtwo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lt__srv__Addtwo_Response * data = NULL;

  if (size) {
    data = (lt__srv__Addtwo_Response *)allocator.zero_allocate(size, sizeof(lt__srv__Addtwo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lt__srv__Addtwo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lt__srv__Addtwo_Response__fini(&data[i - 1]);
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
lt__srv__Addtwo_Response__Sequence__fini(lt__srv__Addtwo_Response__Sequence * array)
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
      lt__srv__Addtwo_Response__fini(&array->data[i]);
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

lt__srv__Addtwo_Response__Sequence *
lt__srv__Addtwo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lt__srv__Addtwo_Response__Sequence * array = (lt__srv__Addtwo_Response__Sequence *)allocator.allocate(sizeof(lt__srv__Addtwo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lt__srv__Addtwo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lt__srv__Addtwo_Response__Sequence__destroy(lt__srv__Addtwo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lt__srv__Addtwo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lt__srv__Addtwo_Response__Sequence__are_equal(const lt__srv__Addtwo_Response__Sequence * lhs, const lt__srv__Addtwo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lt__srv__Addtwo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lt__srv__Addtwo_Response__Sequence__copy(
  const lt__srv__Addtwo_Response__Sequence * input,
  lt__srv__Addtwo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lt__srv__Addtwo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lt__srv__Addtwo_Response * data =
      (lt__srv__Addtwo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lt__srv__Addtwo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lt__srv__Addtwo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lt__srv__Addtwo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
