#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "relative_interface::relative_interface__rosidl_typesupport_introspection_c" for configuration ""
set_property(TARGET relative_interface::relative_interface__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(relative_interface::relative_interface__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librelative_interface__rosidl_typesupport_introspection_c.so"
  IMPORTED_SONAME_NOCONFIG "librelative_interface__rosidl_typesupport_introspection_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS relative_interface::relative_interface__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_relative_interface::relative_interface__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/librelative_interface__rosidl_typesupport_introspection_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)