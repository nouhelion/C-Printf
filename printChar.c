#include "main.h"

/**
 * printChar - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printChar(va_list val)
{
    char s;

    s = va_arg(val, int);
    _putChar(s);
    return (1);
}