#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lt::lt__rosidl_typesupport_fastrtps_cpp" for configuration "Debug"
set_property(TARGET lt::lt__rosidl_typesupport_fastrtps_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(lt::lt__rosidl_typesupport_fastrtps_cpp PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/liblt__rosidl_typesupport_fastrtps_cpp.so"
  IMPORTED_SONAME_DEBUG "liblt__rosidl_typesupport_fastrtps_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS lt::lt__rosidl_typesupport_fastrtps_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_lt::lt__rosidl_typesupport_fastrtps_cpp "${_IMPORT_PREFIX}/lib/liblt__rosidl_typesupport_fastrtps_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
