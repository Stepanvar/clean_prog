cmake_minimum_required(VERSION 3.22)
set(This Example)
project(${This} C CXX)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
enable_testing()
add_subdirectory(googletest)
set(srcs
	Example.cpp
)
set(hdrs
	Example.hpp
)
add_library(${This} STATIC ${srcs} ${hdrs})
add_subdirectory(test)