#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Adding the diagonals of a square matrix
 * @a: The square matrix
 * @size: The size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int row, column = 0, sum1, sum2;

	for (row = 0; row < size; row++)
	{
			sum1 += *(a + row * size + column);
			sum2 += *(a + row * size + (size - 1 - column));
			column++;
	}
	printf("%d, %d\n", sum1, sum2);
}
