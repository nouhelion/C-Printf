#include "main.h"

/**
 * testing - testing function
 */

int main (){
    int len;
    
    unsigned int ui;
    void *addr;

    len = _print("Let's try to printf a simple sentence.\n");

    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _print("Length:[%d, %i]\n", len, len);

    _print("Negative:[%d]\n", -762534);

    _print("Unsigned:[%u]\n", ui);

    _print("Unsigned octal:[%o]\n", ui);

    _print("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _print("Character:[%c]\n", 'H');

    _print("String:[%s]\n", "I am a string !");

    _print("Address:[%p]\n", addr);

    len = _print("Percent:[%%]\n");

    _print("Len:[%d]\n", len);

    _print("Unknown:[%r]\n");

    return (0);
}