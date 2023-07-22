cmake_minimum_required(VERSION 3.25)
project(Printf C)

set(CMAKE_C_STANDARD 11)

add_executable(Printf _printf.c print_bases.c print_alpha.c print_custom.c print_nums.c write_funcs.c get_flag.c converter.c get_print.c print_address.c main.c)
