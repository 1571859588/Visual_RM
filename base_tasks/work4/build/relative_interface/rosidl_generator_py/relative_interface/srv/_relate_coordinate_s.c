// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from relative_interface:srv/RelateCoordinate.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "relative_interface/srv/detail/relate_coordinate__struct.h"
#include "relative_interface/srv/detail/relate_coordinate__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool relative_interface__srv__relate_coordinate__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("relative_interface.srv._relate_coordinate.RelateCoordinate_Request", full_classname_dest, 66) == 0);
  }
  relative_interface__srv__RelateCoordinate_Request * ros_message = _ros_message;
  {  // offset_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * relative_interface__srv__relate_coordinate__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RelateCoordinate_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("relative_interface.srv._relate_coordinate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RelateCoordinate_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  relative_interface__srv__RelateCoordinate_Request * ros_message = (relative_interface__srv__RelateCoordinate_Request *)raw_ros_message;
  {  // offset_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__struct.h"
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool relative_interface__srv__relate_coordinate__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("relative_interface.srv._relate_coordinate.RelateCoordinate_Response", full_classname_dest, 67) == 0);
  }
  relative_interface__srv__RelateCoordinate_Response * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * relative_interface__srv__relate_coordinate__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RelateCoordinate_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("relative_interface.srv._relate_coordinate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RelateCoordinate_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  relative_interface__srv__RelateCoordinate_Response * ros_message = (relative_interface__srv__RelateCoordinate_Response *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
