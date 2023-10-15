// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lt:srv/Addtwo.idl
// generated code does not contain a copyright notice

#ifndef LT__SRV__DETAIL__ADDTWO__STRUCT_H_
#define LT__SRV__DETAIL__ADDTWO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Addtwo in the package lt.
typedef struct lt__srv__Addtwo_Request
{
  int32_t a;
  int32_t b;
} lt__srv__Addtwo_Request;

// Struct for a sequence of lt__srv__Addtwo_Request.
typedef struct lt__srv__Addtwo_Request__Sequence
{
  lt__srv__Addtwo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lt__srv__Addtwo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Addtwo in the package lt.
typedef struct lt__srv__Addtwo_Response
{
  int32_t sum;
} lt__srv__Addtwo_Response;

// Struct for a sequence of lt__srv__Addtwo_Response.
typedef struct lt__srv__Addtwo_Response__Sequence
{
  lt__srv__Addtwo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lt__srv__Addtwo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LT__SRV__DETAIL__ADDTWO__STRUCT_H_
