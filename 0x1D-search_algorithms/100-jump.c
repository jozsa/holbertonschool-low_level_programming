#include "search_algos.h"
#include <math.h>
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
	size_t index = 0, low = 0, high, step = sqrt(size - 1);
	int found = 1;

	high = step;

	if (!array)
		return (-1);
	while (index <= size - 1)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		if (index > high || size == 0)
			return (-1);
		if (value <= array[high] || high > size)
		{
			if (found)
			{
				printf("Value found between indexes [%d] and [%d]\n", (int)low, (int)high);
				found = 0;
				continue;
			}
			if (array[index] == value)
				return (index);
			index++;
			continue;
		}
		low = high;
		high += step;
		index = low;
		found = 1;
	}
	return (-1);
}
