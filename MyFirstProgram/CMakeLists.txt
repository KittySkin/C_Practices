cmake_minimum_required(VERSION 3.27)
project(MyFirstProgram C)

set(CMAKE_C_STANDARD 23)

add_executable(MyFirstProgram main.c
        test.c
        test.h)
