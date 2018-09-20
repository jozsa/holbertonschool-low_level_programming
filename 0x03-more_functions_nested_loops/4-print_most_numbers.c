#include <stdio.h>
#include "holberton.h"

/**
 * print_most_numbers - Prints all numbers 0-9 except 2 & 4
 */

void print_most_numbers(void)
{
	int digit;

	while (digit <= 9)
	{
		_putchar(digit + '0');
		digit++;
		if (digit == 2 || digit == 4)
		{
			digit++;
			continue;
		}
	}
	_putchar('\n');
}
