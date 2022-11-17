cmake_minimum_required(VERSION 3.24.0)
project(TESTQ)
FIND_PACKAGE(OpenCV 4.6.0 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIR})
link_directories(${OpenCV_LIB_DIR})
#log
option(WITH_LOG "Build with output logs and images in tmp" OFF)
if(WITH_LOG)
				add_definitions(-DLOG)
endif(WITH_LOG)
file(GLOB PROJ_SRC CONFIGURE_DEPENDS 
				src/*.h 
				src/*.cpp)
add_executable(${PROJECT_NAME} main.cpp)
#add_library(LIBS SHARED ${PROJ_SRC})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
