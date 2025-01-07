cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(HEADER_FILES ${PROJECT_SOURCE_DIR}/test/test.hpp)

# add the executable
add_executable(Tutorial main.cpp ${HEADER_FILES})

target_include_directories(Tutorial PUBLIC "${PROJECT_SOURCE_DIR}")
