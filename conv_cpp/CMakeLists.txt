cmake_minimum_required(VERSION 3.31)
project(conv_cpp)

set(CMAKE_CXX_STANDARD 26)

add_executable(conv_cpp main.cpp
        parts/basis_convertor.cpp
        parts/basis_convertor.h
        parts/binary_utils.cpp
        parts/binary_utils.h
        parts/decimal_utils.cpp
        parts/decimal_utils.h
        parts/octal_utils.cpp
        parts/octal_utils.h
)


include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/parts)