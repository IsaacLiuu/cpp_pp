cmake_minimum_required(VERSION 3.0.0)
project(project_12_1 VERSION 0.1.0)

include(CTest)
enable_testing()

# add_executable(project_12_1 vegnews.cpp stringbad.cpp)
# add_executable(project_12_2 sayings1.cpp string1.cpp)
# add_executable(project_12_5 sayings2.cpp string1.cpp)
# add_executable(project_12_5 placenew1.cpp)
add_executable(project_12_5 placenew2.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
