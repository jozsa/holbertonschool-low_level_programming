#include <stdio.h>
#include "holberton.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 */

void _puts(char *str)
{
	while(*str)
	{
		if(_putchar(*str++) == EOF) _putchar(EOF);
	}
	if(_putchar('\n') == EOF) _putchar(EOF);
}
