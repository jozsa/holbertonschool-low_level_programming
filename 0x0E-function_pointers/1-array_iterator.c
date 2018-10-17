#include <stdio.h>
#include "function_pointers.h"

/**
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
