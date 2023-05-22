cmake_minimum_required(VERSION 3.0.0)
project(project_10 VERSION 0.1.0)

include(CTest)
enable_testing()

# add_executable(project_10 main.cpp)
# add_executable(project_10
#                 usestock0.cpp
#                 stock00.cpp)
add_executable(project_10
               usestock1.cpp
               stock10.cpp)   

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
