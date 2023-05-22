cmake_minimum_required(VERSION 3.0.0)
project(leftover VERSION 0.1.0)

include(CTest)
enable_testing()

# add_executable(leftover main.cpp)
# add_executable(leftover leftover.cpp)
# add_executable(funtemp funtemp.cpp)\
# add_executable(twotemps twotemps.cpp)
# 8.13
add_executable(twoswap twoswap.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
