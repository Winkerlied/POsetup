cmake_minimum_required(VERSION 3.12) # version can be different

project(stack) #name of your project

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(tests Tstack.cpp) # add this executable

target_link_libraries(tests PRIVATE gtest) # link google test to this executable