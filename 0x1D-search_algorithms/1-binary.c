#include "search_algos.h"
/**
 * binary_search_helper - Adds high/low to function prototype
 * @array: The array to search
 * @low: The first element of the array to search
 * @high: The last element of the array to search
 * @value: The value to search for
 *
 * Return: Index of value if found, -1 if not found
 */
int binary_search_helper(int *array, size_t low, size_t high, int value)
{
	size_t index;
	int middle;

	printf("Searching in array: ");
	for (index = low; index <= high; index++)
	{
		printf("%d", array[index]);
		if (index < high)
			printf(", ");
		if (index == high)
			printf("\n");
	}
	middle = ((high + low) / 2);
	if (array[middle] == value)
		return (middle);
	if (high > low)
	{
		if (value < array[middle])
			return (binary_search_helper(array, low, middle - 1, value));
		else if (value > array[middle])
			return (binary_search_helper(array, middle + 1, high, value));
	}
	return (-1);
}

/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: Pointer to first element of array to search
 * @size: Size of array to search
 * @value: Value to find
 *
 * Return: index of value if found, -1 if nonexistent array/not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_helper(array, 0, size - 1, value));
}
