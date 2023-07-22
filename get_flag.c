#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char character, flags_t *flag)
{
	int i = 0;

	switch (character)
	{
		case '+':
            flag->plus = 1;
			i = 1;
			break;
		case ' ':
            flag->space = 1;
			i = 1;
			break;
		case '#':
            flag->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
