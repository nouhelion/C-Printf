#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character character to stdout
 * Return: On success 1.
 */
int _putchar(char character)
{
	static char buffer[1024];
	static int i;

	if (character == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (character != -1)
	{
        buffer[i] = character;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
