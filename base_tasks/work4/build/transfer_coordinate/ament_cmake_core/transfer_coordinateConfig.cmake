# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_transfer_coordinate_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED transfer_coordinate_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(transfer_coordinate_FOUND FALSE)
  elseif(NOT transfer_coordinate_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(transfer_coordinate_FOUND FALSE)
  endif()
  return()
endif()
set(_transfer_coordinate_CONFIG_INCLUDED TRUE)

# output package information
if(NOT transfer_coordinate_FIND_QUIETLY)
  message(STATUS "Found transfer_coordinate: 0.0.0 (${transfer_coordinate_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'transfer_coordinate' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${transfer_coordinate_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(transfer_coordinate_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${transfer_coordinate_DIR}/${_extra}")
endforeach()
