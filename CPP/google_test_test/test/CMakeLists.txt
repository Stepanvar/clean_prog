cmake_minimum_required(VERSION 3.22)
set(This ExampleTests)
set(srcs
	ExampleTests.cpp
)
add_executable(${This} ${srcs})
target_link_libraries(${This} PUBLIC
	gtest_main
	Example
)
add_test(
	NAME ${This}
	COMMAND ${This}
)