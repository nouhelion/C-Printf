#include "main.h"

/**
 * print_int - prints an integer
 * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int result = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
        result += _putchar(' ');
	if (f->plus == 1 && n >= 0)
        result += _putchar('+');
	if (n <= 0)
		result++;
	print_number(n);
	return (result);
}

/**
 * print_unsigned - prints an unsigned integer
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - helper function that loops through
 */
void print_number(int number)
{
	unsigned int num1;

	if (number < 0)
	{
		_putchar('-');
		num1 = -number;
	}
	else
		num1 = number;

	if (num1 / 10)
		print_number(num1 / 10);
	_putchar((num1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int digits= 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		digits++;
	}
	return (digits);
}
