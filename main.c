
#include "main.h"

/**
 * testing
 *
 * Return: Always 0
 */
int main(void)
{
    int length;
    unsigned int unin;
    void *address = (void *)0x7ffe637541f0; // address of length


    length = _printf("Hello World.\n");

    unin = (unsigned int)INT_MAX + 1024;

    _printf("Length:[%d, %i]\n", length, length);

    _printf("Negative:[%d]\n", -762534);

    _printf("Unsigned:[%u]\n", unin);

    _printf("Unsigned octal:[%o]\n", unin);

    _printf("Unsigned hexadecimal:[%x, %X]\n", unin, unin);

    _printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");

    _printf("Address:[%p]\n", address);

    length = _printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", length);

    _printf("Unknown:[%r]\n");


    return (0);
}