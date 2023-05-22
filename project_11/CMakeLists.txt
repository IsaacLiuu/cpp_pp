cmake_minimum_required(VERSION 3.0.0)
project(project_11_1 VERSION 0.1.0)

include(CTest)
enable_testing()

# add_executable(project_11_1 main.cpp)
# add_executable(project_11_1
#                 mytime0.cpp
#                 usetime0.cpp)       
# add_executable(project_11_2
#                 mytime1.cpp
#                 usetime1.cpp)
# add_executable(project_11_2
#                 mytime2.cpp
#                 usetime2.cpp)
add_executable(project_11_3
                mytime3.cpp
                usetime3.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
