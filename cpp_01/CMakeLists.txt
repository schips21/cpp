cmake_minimum_required(VERSION 3.17)
project(cpp_01)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)

add_executable(cpp_01
        ex00/main.cpp
        ex00/Pony.cpp
        ex00/Pony.hpp)
