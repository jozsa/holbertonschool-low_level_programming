#include <stdio.h>
#include "holberton.h"

/**
 * print_line - Print _ n times
 * @n: The number passed to the function
 */

void print_line(int n)
{
	int underscore = 0;

	while (underscore < n && n > 0)
	{
		_putchar('_');
		underscore++;
	}
	_putchar('\n');
}
