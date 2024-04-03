cmake_minimum_required(VERSION 3.27)
project(C_OOP C)

set(CMAKE_C_STANDARD 23)

add_executable(C_OOP main.c
        classes/BaseCar.c
        classes/BaseCar.h)
