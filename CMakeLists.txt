cmake_minimum_required(VERSION 3.15)
project(how_to_extend_sdk_classes)

set(CMAKE_CXX_STANDARD 14)

add_executable(how_to_extend_sdk_classes main.cpp src/user_interface.cpp src/user_interface_origin.cpp)