// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coordinate:srv/Relate.idl
// generated code does not contain a copyright notice

#ifndef COORDINATE__SRV__DETAIL__RELATE__STRUCT_H_
#define COORDINATE__SRV__DETAIL__RELATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Relate in the package coordinate.
typedef struct coordinate__srv__Relate_Request
{
  double x;
  double y;
  /// offset radians
  double theta;
  double offset_x;
  double offset_y;
} coordinate__srv__Relate_Request;

// Struct for a sequence of coordinate__srv__Relate_Request.
typedef struct coordinate__srv__Relate_Request__Sequence
{
  coordinate__srv__Relate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coordinate__srv__Relate_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Relate in the package coordinate.
typedef struct coordinate__srv__Relate_Response
{
  double x;
  double y;
} coordinate__srv__Relate_Response;

// Struct for a sequence of coordinate__srv__Relate_Response.
typedef struct coordinate__srv__Relate_Response__Sequence
{
  coordinate__srv__Relate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coordinate__srv__Relate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COORDINATE__SRV__DETAIL__RELATE__STRUCT_H_
