cmake_minimum_required(VERSION 3.0.0)
project(Workspace VERSION 0.1.0)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_library(ex_01_01_library "workspace.cpp" "workspace.h")
add_executable(ex_01_01_exe "main_workspace.cpp" "workspace.cpp")

