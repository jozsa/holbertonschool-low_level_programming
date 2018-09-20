#include <stdio.h>
#include "holberton.h"

/**
 * print_square - Print a square
 * @size: The size of the square printed
 */

void print_square(int size)
{
	int column;
	int row;

	for (column = 0; column < size; column++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
