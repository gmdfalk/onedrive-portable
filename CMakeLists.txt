cmake_minimum_required(VERSION 3.5)
project(onedrive_portable)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(onedrive_portable ${SOURCE_FILES})