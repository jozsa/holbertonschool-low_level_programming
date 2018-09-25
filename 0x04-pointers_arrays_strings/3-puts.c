#include <stdio.h>
#include "holberton.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 */

void _puts(char *str)
{
	while (*str)
	{
		if (_putchar(*str++) == '0')
			_putchar('0');
	}
	if (_putchar('\n') == '0')
		_putchar('0');
}
