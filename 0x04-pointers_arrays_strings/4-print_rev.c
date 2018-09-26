#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be reversed
 */

void print_rev(char *s)
{
	while (*s != '\0')
		s++;
	s--;
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}	
