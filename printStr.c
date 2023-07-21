#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */

int _strLen(char *s)
{
    int c;

    for (c = 0; s[c] != 0; c++)
        ;
    return (c);

}

/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */

int _strLenc(const char *s)
{
    int c;

    for (c = 0; s[c] != 0; c++)
        ;
    return (c);
}

void _printStr(const char *str)
{
    while (*str)
    {
        _putChar(*str);
        str++;
    }
}