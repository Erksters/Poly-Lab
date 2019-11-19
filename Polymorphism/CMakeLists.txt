cmake_minimum_required(VERSION 3.13)
project(Polymorphism C)

set(CMAKE_C_STANDARD 99)

add_executable(Polymorphism main.c Shape.h Shape.c Square.h Triangle.h)