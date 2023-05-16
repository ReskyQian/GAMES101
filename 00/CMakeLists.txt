cmake_minimum_required (VERSION 3.9 FATAL_ERROR)
project (Transformation)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})

add_executable (Transformation main.cpp)
