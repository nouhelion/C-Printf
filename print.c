#include "main.h"


int _print(const char* format, ...) {


    convert_match m[] = {
            {"%s", printString}, {"%c", printChar},
            //{"%%", printf_37},
            //{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
            //{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
            //{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
           // {"%S", printf_exclusive_string}, {"%p", printf_pointer}
    };
    va_list args;
    int i = 0, length = 0;
    va_start(args, format);

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return -1;

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            int j = 0;
            while (j < sizeof(m) / sizeof(m[0]))
            {
                if (m[j].id[0] == '%' && m[j].id[1] == format[i + 1])
                {
                    length += m[j].f(args);
                    i = i + 2;
                    break;
                }
                j++;
            }
            // If no match found, print the character after '%'
            if (j == sizeof(m) / sizeof(m[0]))
            {
                _putChar('%');
                _putChar(format[i + 1]);
                length += 2;
                i = i + 2;
            }
        }
        else
        {
            _putChar(format[i]);
            length++;
            i++;
        }
    }
    va_end(args);
    return (length); // Return the number of characters printed
}
