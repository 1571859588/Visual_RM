# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_show_images_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED show_images_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(show_images_FOUND FALSE)
  elseif(NOT show_images_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(show_images_FOUND FALSE)
  endif()
  return()
endif()
set(_show_images_CONFIG_INCLUDED TRUE)

# output package information
if(NOT show_images_FIND_QUIETLY)
  message(STATUS "Found show_images: 0.0.0 (${show_images_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'show_images' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${show_images_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(show_images_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${show_images_DIR}/${_extra}")
endforeach()
