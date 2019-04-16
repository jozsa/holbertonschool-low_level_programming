#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: Pointer to first element of array to search in
 * @size: Size of array
 * @value: Value to search for
 *
 * Return: index of value, or -1 if not found/nonexistent array
 */

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);
	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
