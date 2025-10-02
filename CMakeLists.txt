cmake_minimum_required(VERSION 3.12)
project(genie-cmake-link)

option(FIND_GENIE_OPTION "which script to run to find GENIE")
if (${FIND_GENIE_OPTION} EQUAL OFF)
  message(FATAL_ERROR "Need to pick one of the options to find GENIE")
endif()

include("Option${FIND_GENIE_OPTION}.cmake")

add_executable(main main.cxx)
if (${FIND_GENIE_OPTION} LESS 2)
  target_include_directories(main PRIVATE "/usr/local/include/GENIE")
  target_link_libraries(main PRIVATE ${GENIE_LIBS})
else()
  target_link_libraries(main PRIVATE GENIE::GENIE)
endif()
