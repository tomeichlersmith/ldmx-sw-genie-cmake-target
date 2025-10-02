cmake_minimum_required(VERSION 3.12)
project(genie-cmake-link)

option(FIND_GENIE_OPTION "which script to run to find GENIE")

include("Option${FIND_GENIE_OPTION}.cmake")

add_executable(main main.cxx)
target_include_directories(main PRIVATE "/usr/local/include/GENIE")
target_link_libraries(main PRIVATE ${GENIE_LIBRARIES})
