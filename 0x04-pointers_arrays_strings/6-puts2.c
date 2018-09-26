#include "holberton.h"

/**
 * puts2 - Prints every other character in a string
 * @str: The string to be printed
 */

void puts2(char *str)
{
	_putchar(*str);
	while (*(str += 2))
	{
		_putchar(*str);
	}
	_putchar('\n');
}
