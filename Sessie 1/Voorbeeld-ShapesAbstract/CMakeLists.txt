cmake_minimum_required(VERSION 3.12)
project(Example_Shapes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Example_Shapes main.cpp Shape.cpp Shape.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h)