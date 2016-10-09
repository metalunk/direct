cmake_minimum_required(VERSION 3.6)
project(direct)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Rectangle.cpp Rectangle.h ObjectiveFunctionBase.cpp ObjectiveFunctionBase.h ObjectiveFunctions/AbsX.cpp ObjectiveFunctions/AbsX.h Point.cpp Point.h Edge.cpp Edge.h RectangleSet.cpp RectangleSet.h)
add_executable(direct ${SOURCE_FILES})
