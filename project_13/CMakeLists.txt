cmake_minimum_required(VERSION 3.0.0)
project(project_13 VERSION 0.1.0)

include(CTest)
enable_testing()

# add_executable(project_13 main.cpp)
# add_executable(project_13_1 usett0.cpp tabtenn0.cpp)
# add_executable(project_13_1 usett1.cpp tabtenn1.cpp)
add_executable(project_13_3 usebrass1.cpp brass.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
