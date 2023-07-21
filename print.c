#include "main.h"


int _print(const char* format, ...) {
    va_list args;
    va_start(args, format);

    // Your implementation here...

    va_end(args);
    return 0; // Return the number of characters printed
}
