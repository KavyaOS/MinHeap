cmake_minimum_required(VERSION 3.8)

set(This minHeapTests)

set(Sources
    minHeapTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    minHeap
)

add_test(
    NAME ${This}
    COMMAND ${This}
)