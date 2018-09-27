#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - Prints every other character in a string
 * @str: The string to be printed
 */

void puts2(char *str)
{
	int length = 0;
	int num = 0;

	while (str[num++])
	{
		length++;
	}

	num = 0;

	while (*str && num <= length)
	{
		_putchar(str[num]);
		num += 2;
	}
	_putchar('\n');
}
