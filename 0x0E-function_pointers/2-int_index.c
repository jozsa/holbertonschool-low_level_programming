#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Search for an integer specified by another function
 * @array: The array to be searched
 * @size: The array size
 * @cmp: The function pointer to the integer searchers
 *
 * Return: Index of first element where cmp succeeds, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (0);
}
