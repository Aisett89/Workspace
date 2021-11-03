cmake_minimum_required(VERSION 3.0.0)
project(Workspace VERSION 0.1.0)

include(CTest)
enable_testing()


add_library(ex_01_01_library "workspace.cpp" "workspace.h")
add_executable(ex_01_01_exe "main_workspace.cpp" "workspace.cpp")