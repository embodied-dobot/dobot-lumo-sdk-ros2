#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dobot::dobot__rosidl_generator_c" for configuration ""
set_property(TARGET dobot::dobot__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dobot::dobot__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdobot__rosidl_generator_c.so"
  IMPORTED_SONAME_NOCONFIG "libdobot__rosidl_generator_c.so"
  )

list(APPEND _cmake_import_check_targets dobot::dobot__rosidl_generator_c )
list(APPEND _cmake_import_check_files_for_dobot::dobot__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libdobot__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
