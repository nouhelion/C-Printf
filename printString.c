#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */
int printString(va_list val)
{
    char *s = va_arg(val, char *);
    if (s == NULL)
        s = "(null)";

    int len = _strLen(s);
    /* Use a single _putChar to print the entire string */
    _printStr(s);

    return len;
}
