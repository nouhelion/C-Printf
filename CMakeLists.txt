cmake_minimum_required(VERSION 3.25)
project(Printf C)

set(CMAKE_C_STANDARD 11)

add_executable(Printf test.c main.h print.c _putchar.c printChar.c printString.c printStr.c print_HEX.c print_exclusive_string.c print_bin.c printf_HEX_aux.c printf_int.c printf_oct.c printf_pointer.c printf_rot13.c printf_srev.c printf_unsigned.c print_37.c )
