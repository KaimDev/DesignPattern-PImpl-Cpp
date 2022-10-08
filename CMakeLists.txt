cmake_minimum_required(VERSION 3.23)
project(PImpl)

set(CMAKE_CXX_STANDARD 20)

add_executable(PImpl main.cpp Workers.h Workers.cpp)
