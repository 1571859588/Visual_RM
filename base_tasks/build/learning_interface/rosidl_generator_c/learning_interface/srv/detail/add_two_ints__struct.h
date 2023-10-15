// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_interface:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define LEARNING_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package learning_interface.
typedef struct learning_interface__srv__AddTwoInts_Request
{
  int32_t a;
  int32_t b;
} learning_interface__srv__AddTwoInts_Request;

// Struct for a sequence of learning_interface__srv__AddTwoInts_Request.
typedef struct learning_interface__srv__AddTwoInts_Request__Sequence
{
  learning_interface__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package learning_interface.
typedef struct learning_interface__srv__AddTwoInts_Response
{
  int32_t sum;
} learning_interface__srv__AddTwoInts_Response;

// Struct for a sequence of learning_interface__srv__AddTwoInts_Response.
typedef struct learning_interface__srv__AddTwoInts_Response__Sequence
{
  learning_interface__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
