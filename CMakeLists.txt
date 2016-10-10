cmake_minimum_required(VERSION 3.3)
project(Lab1BaseGeometry)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        Geometry/Geometry.h
        Geometry/Point.h
        Geometry/Vector.h Geometry/Line.h)
add_executable(Lab1BaseGeometry ${SOURCE_FILES})