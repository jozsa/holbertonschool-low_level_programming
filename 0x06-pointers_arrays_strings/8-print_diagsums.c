#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Adding the diagonals of a square matrix
 * @a: The square matrix
 * @size: The size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int row, column, sum1 = 0, sum2 = 0;

	for (row = 0, column = 0; row < size; row++, column++)
	{
		sum1 += *(a + row * size + column);
		sum2 += *(a + row * size + (size - 1 - column));
	}
	printf("%d, %d\n", sum1, sum2);
}
