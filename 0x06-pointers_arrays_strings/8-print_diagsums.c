#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Adding the diagonals of a square matrix
 * @a: The square matrix
 * @size: The size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int row, column, sum1, sum2;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (row == column)
				sum1 += (*(a + row) + *(a + column));
			if ((row + column) == (size - 1))
				sum2 += (*(a + row) + *(a + column));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
