#include "search_algos.h"
#include <math.h>
/**
 * j_s_helper - Provides low/high values for jump search
 * @array: Array to search
 * @low: First element of array to search
 * @high: Last element of array to search
 * @value: Element to search
 * @size: Size of array to search
 *
 * Return: Index of value if found, -1 if nonexistent array/not found
 */
int j_s_helper(int *array, size_t low, size_t high, int value, size_t size)
{
	size_t index;
	size_t i;

	for (index = low; index < high; index += high)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[low]);
		if ((value >= array[low] && value <= array[high]) || high > size)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)low, (int)high);
			for (i = low; i <= high; i++)
			{
				if (i < size)
					printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
				if (array[i] == value)
					return (value);
			}
		}
		else
			return (j_s_helper(array, high, high + sqrt(size - 1), value, size));
	}
	return (-1);
}

/**
 * jump_search - Uses the jump search algorithm to search
 * for a value in an array of integers.
 * @array: Array to search
 * @size: Size of array to search
 * @value: Value to search for
 *
 * Return: Index of value if found, -1 if nonexistent array/not found
 */
int jump_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (j_s_helper(array, 0, sqrt(size - 1), value, size));
}
