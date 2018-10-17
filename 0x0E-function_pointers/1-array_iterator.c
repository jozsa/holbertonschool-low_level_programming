#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute functions on elements of an array
 * @array: The array to iterate through
 * @size: The size of the array
 * @action: Pointer to functions to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (array == NULL || action == NULL)
		return;

	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
