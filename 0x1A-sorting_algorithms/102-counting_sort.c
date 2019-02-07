#include "sort.h"

/**
 * find_max - Finds the max integer of an array
 * @array: Array to find max of
 * @size: Size of the array
 *
 * Return: The max integer
 */

int find_max(int *array, size_t size)
{
	int max = 0;		/* max integer to find */
	unsigned int i = 0;	/* index of array */

	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * duplicate - Duplicates an array
 * @array: The array to be duplicated
 * @size: The size of the array
 *
 * Return: A pointer to the duplicated array
 */

int *duplicate(int *array, size_t size)
{
	int *dup_array = malloc(sizeof(int) * size);
	unsigned int i = 0;	/* index of array */

	if (!dup_array)
		return (NULL);
	for (i = 0; i < size; i++)
		dup_array[i] = array[i];
	return (dup_array);
}

/**
 * count - Sets up an array with a count of each element in the original array
 * @array: Array to count
 * @size: Size of array
 * @max: Size of count_array, which is max integer of array
 *
 * Return: Pointer to count_array
 */

int *count(int *array, size_t size, int max)
{
	int *count_array = malloc(sizeof(int) * max + 1);
	unsigned int i = 0;	/* index of array */
	int index = 0;		/* index of array, signed type */

	if (!count_array)
		return (NULL);
	for (i = 0; i < size; i++)
		count_array[array[i]] += 1;
	for (index = 1; index <= max; index++)
		count_array[index] += count_array[index - 1];
	return (count_array);
}

/**
 * counting_sort - Sorts an array using the counting sort method
 * @array: The array to sort
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *dup_array;		/* copy of array to preserve order */
	int *count_array;	/* stores count of each element in array */
	unsigned int array_index = 0;	/* index of count array */
	unsigned int index = 0;		/* index of array to sort at the end */
	unsigned int i = 0;	/* index to loop through dup_array and sort */
	int max = 0;		/* max integer in array to build count_array */

	if (!array || size < 2)
		return;
	max = find_max(array, size);		/* find max integer */
	count_array = count(array, size, max);	/* build count_array */
	dup_array = duplicate(array, size);	/* make copy of array */
	print_array(count_array, max + 1);
	for (i = 0; i < size; i++)		/* sort array */
	{
		array_index = dup_array[i];
		index = count_array[array_index];
		array[index - 1] = dup_array[i];
		count_array[array_index] -= 1;
	}
	free(count_array);
	free(dup_array);
}
