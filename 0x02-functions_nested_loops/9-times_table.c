#include <stdio.h>
#include "holberton.h"

/**
 * times_table - Prints the 9 times table
 *
 */

void times_table(void)
{
	int column = 0;
	int row = 0;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			if ((column * row) >= 10)
			{
				_putchar((column * row) / 10 + '0');
			}
			else if (row == 0)
				;
			else
				_putchar(' ');
			_putchar((column * row) % 10 + '0');
			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
