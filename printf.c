#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    // Your implementation here...

    va_end(args);
    return 0; // Return the number of characters printed
}
