# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\hospitalSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\hospitalSystem_autogen.dir\\ParseCache.txt"
  "hospitalSystem_autogen"
  )
endif()
