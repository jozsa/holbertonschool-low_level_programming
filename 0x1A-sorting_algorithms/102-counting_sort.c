#include "sort.h"

/**
 * counting_sort - Sorts an array using the counting sort method
 * @array: The array to sort
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *dup_array;
	int *count_array;
	unsigned int array_index = 0;
	unsigned int index = 0;
	unsigned int i = 0;
	int idx = 0;
	int max = 0;

	if (!array || size < 2)
		return;
	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	count_array = malloc(sizeof(int) * max + 1);
	dup_array = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		count_array[array[i]] += 1;
		dup_array[i] = array[i];
	}
	for (idx = 1; idx <= max; idx++)
		count_array[idx] += count_array[idx - 1];
	print_array(count_array, max + 1);
	for (i = 0; i < size; i++)
	{
		array_index = dup_array[i];
		index = count_array[array_index];
		array[index - 1] = dup_array[i];
		count_array[array_index] -= 1;
	}
	free(count_array);
	free(dup_array);
}
