#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


typedef struct format
{
    char *id;
    int (*f)();
} convert_match;

//formatting whatever the user gives us
int _print(const char *format, ...);

//formating one character
int _putChar(char c);

//formating a whole string
int printfString(va_list val);

int _strLenc(const char *s);
void _printStr(const char *str);
int _strLen(char *s);

#endif // MAIN_H
