#include "../include/main.h"
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printString(va_list val)
{
    char *s;
    int i, len;

    s = va_arg(val, char *);
    if (s == NULL)
    {
        s = "(null)";
        len = _strLen(s);
        for (i = 0; i < len; i++)
            _putChar(s[i]);
        return (len);
    }
    else
    {
        len = _strLen(s);
        for (i = 0; i < len; i++)
            _putChar(s[i]);
        return (len);
    }
}
