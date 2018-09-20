#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - Prints numbers 0-14 10 times
 */

void more_numbers(void)
{
	int number = 0;
	int count = 0;

	while (number <= 14 && count <= 9)
	{
		if (number >= 10)
			_putchar(number / 10 + '0');
		_putchar(number % 10 + '0');
		number++;
		while (number == 15)
		{
			_putchar('\n');
			count++;
			number = 0;
		}
	}
}
