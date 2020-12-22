cmake_minimum_required(VERSION 3.8)

set(This minHeap)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    minHeap.hpp
)

set(Sources
    minHeap.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)