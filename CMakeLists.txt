cmake_minimum_required(VERSION 3.25)
project(Printf C)

set(CMAKE_C_STANDARD 11)

add_executable(Printf test.c main.h print.c _putchar.c printChar.c printString.c printStr.c)
