cmake_minimum_required(VERSION 3.22)
project(OrgChart)

set(CMAKE_CXX_STANDARD 20)

add_executable(OrgChart doctest.h OrgChart.cpp OrgChart.hpp main.cpp)
