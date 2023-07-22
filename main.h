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




#endif // MAIN_H
