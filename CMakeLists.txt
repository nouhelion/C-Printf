cmake_minimum_required(VERSION 3.25)
project(Printf C)

set(CMAKE_C_STANDARD 11)

add_executable(Printf src/main.c include/main.h include/main.h)
