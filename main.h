#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

// Structure for format specifiers and corresponding functions
typedef struct format
{
    char *id;
    int (*f)();
} convert_match;


//formatting whatever the user gives us
int _print(const char *format, ...);

//formating one character
int _putChar(char c);

//printing a char
int printChar(va_list val);

//formating a whole string
int printString(va_list val);

//printing a char as a sring
//void _printStr(const char *str);

//get the length of a constant char
int _strLenc(const char *s);

//get the length of a string
int _strLen(char *s);

int print_37(void);

int print_HEX(va_list val);

int print_bin(va_list val);

int print_exclusive_string(va_list val);

int print_hex_aux(unsigned long int num);

int print_int(va_list args);

int print_dec(va_list args);

int print_oct(va_list val);

int print_pointer(va_list val);

int print_pointer(va_list val);

int print_rot13(va_list args);

int print_srev(va_list args);

int print_unsigned(va_list args);

#endif // MAIN_H
