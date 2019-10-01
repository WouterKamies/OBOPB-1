cmake_minimum_required(VERSION 3.15)
project(Voorbeeld_CatsDogsOverriding)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Voorbeeld_CatsDogsOverriding
        Animal.cpp
        Animal.h
        Cat.cpp
        Cat.h
        Dog.cpp
        Dog.h
        main.cpp)
