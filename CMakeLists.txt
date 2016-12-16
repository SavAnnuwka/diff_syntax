cmake_minimum_required(VERSION 3.6)
project(different_cpp_syntax)
# see https://cmake.org/cmake/help/latest/module/FindBoost.html
find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIR})
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp classes.cpp namespaces.cpp functions.cpp variable.cpp)
add_executable(untitled16 ${SOURCE_FILES})