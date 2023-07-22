#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putChar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putChar('0');
	_putChar('x');
	b = print_hex_aux(a);
	return (b + 2);
}
