#include "holberton.h"

/**
 * reverse_array - Reverse the contents of an array
 * @a: The array to be reversed
 * @n: The number of elements in array a
 */

void reverse_array(int *a, int n)
{
	int first = 0;
	int storage;

	while (first < n)
	{
		storage = a[first];
		a[first] = a[n - 1];
		a[n - 1] = storage;
		first++;
		n--;
	}
}
