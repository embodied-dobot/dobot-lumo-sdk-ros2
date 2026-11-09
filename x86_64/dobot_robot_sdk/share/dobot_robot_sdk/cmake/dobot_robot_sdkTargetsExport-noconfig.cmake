#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dobot_robot_sdk::dobot_robot_sdk" for configuration ""
set_property(TARGET dobot_robot_sdk::dobot_robot_sdk APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(dobot_robot_sdk::dobot_robot_sdk PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "yaml-cpp::yaml-cpp"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdobot_robot_sdk.so"
  IMPORTED_SONAME_NOCONFIG "libdobot_robot_sdk.so"
  )

list(APPEND _cmake_import_check_targets dobot_robot_sdk::dobot_robot_sdk )
list(APPEND _cmake_import_check_files_for_dobot_robot_sdk::dobot_robot_sdk "${_IMPORT_PREFIX}/lib/libdobot_robot_sdk.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
