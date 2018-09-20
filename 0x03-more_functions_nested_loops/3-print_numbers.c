#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 */

void print_numbers(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		_putchar(digit + '0');
		digit++;
	}
	_putchar('\n');
}
