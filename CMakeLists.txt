cmake_minimum_required(VERSION 3.25)
project(Printf C)

set(CMAKE_C_STANDARD 11)

add_executable(Printf _printf.c src/print_bases.c src/print_alpha.c src/print_custom.c src/print_nums.c src/write_funcs.c src/get_flag.c src/converter.c src/get_print.c src/print_address.c)
