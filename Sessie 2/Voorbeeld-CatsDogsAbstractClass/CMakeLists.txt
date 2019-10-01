cmake_minimum_required(VERSION 3.8)
project(CatsDogsAbstract)

set(CMAKE_CXX_STANDARD 11)

add_executable(CatsDogsAbstract main.cpp Animal.cpp Animal.h Dog.cpp Dog.h Cat.cpp Cat.h)
