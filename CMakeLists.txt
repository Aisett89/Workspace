cmake_minimum_required(VERSION 3.0.0)
project(Personal_Projects_and_Tutoring VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(Personal_Projects_and_Tutoring Personal_Projects_and_Tutoring.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
