cmake_minimum_required(VERSION 3.31)
project(conv_cpp)

set(CMAKE_CXX_STANDARD 26)

add_executable(conv_cpp main.cpp
        basis_convertor.cpp
        basis_convertor.h
        binary_convertor.cpp
        binary_convertor.h
        decimal_convertor.cpp
        decimal_convertor.h
)
