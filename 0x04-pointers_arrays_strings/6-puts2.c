#include "holberton.h"

/**
 * puts2 - Prints every other character in a string
 * @str: The string to be printed
 */

void puts2(char *str)
{
	int number = 0;
	int length = 0;

	while (str[number++])
		length++;

	number = 0;
	_putchar(str[number]);
	while (str[number += 2] && number <= length)
	{
		_putchar(str[number]);
	}
	_putchar('\n');
}
