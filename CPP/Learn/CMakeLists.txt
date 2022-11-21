cmake_minimum_required(VERSION 3.24)
project(TEST VERSION 1.0 LANGUAGES CXX)
get_directory_property(is_sub PARENT_DIRECTORY)
option(TEST_TESTING "Enable unit tests" ON)
add_compile_options(
	-Wall
	-Wextra
	)
enable_testing()
add_executable(ugtest unittest.cpp)
target_link_libraries(ugtest gtest)
#target_link_libraries(ugtest GTest::gtest_main)
