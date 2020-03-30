cmake_minimum_required(VERSION 3.10.2)

project(zz VERSION 0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)
add_subdirectory(test)
enable_testing()
add_test(NAME TestBuild COMMAND Test)