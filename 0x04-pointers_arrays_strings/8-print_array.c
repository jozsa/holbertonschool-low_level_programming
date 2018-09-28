#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Print n elements of an array
 * @a: The array to be printed
 * @n: The number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{
		printf("%d", a[length]);
		if (length == (n - 1))
			printf("\n");
		else
			printf(", ");
	}
}
