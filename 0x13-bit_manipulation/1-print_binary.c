#include "holberton.h"

/**
 * print_binary - Converts a decimal number to binary
 * @n: The decimal number to be converted
 */

void print_binary(unsigned long int n)
{
	int shift, bin;

	if (n < 2)
		_putchar(n + '0');
	else
	{
		for (shift = 31; shift >= 0; shift--)
		{
			bin = n >> shift;
			if (bin != 0)
			{
				if (bin & 1)
					_putchar('1');
				else
					_putchar('0');
			}
		}
	}
}
