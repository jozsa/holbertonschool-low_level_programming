#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - Swap the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int storage;

	storage = *a;
	*a = *b;
	*b = storage;
}
