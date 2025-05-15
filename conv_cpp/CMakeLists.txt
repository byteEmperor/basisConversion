cmake_minimum_required(VERSION 3.31)
project(conv_cpp)

set(CMAKE_CXX_STANDARD 26)

add_executable(conv_cpp main.cpp
        parts/binary_utils.cpp
        parts/binary_utils.h
        parts/basis_conversion.cpp
        parts/basis_conversion.h
)


include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/parts)