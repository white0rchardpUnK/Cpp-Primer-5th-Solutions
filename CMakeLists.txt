cmake_minimum_required(VERSION 2.8)
project(cpplv1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

add_executable(cpplv1 Sales_item.h Sales_data.h main.cpp Chapter6.h fact.cpp factMain.cpp)