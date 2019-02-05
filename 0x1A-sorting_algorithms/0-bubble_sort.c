#include "sort.h"

/**
 * bubble_sort - Do a bubble sort on an array of integers
 * @array: The array to sort
 * @size: The size of the array to sort
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0;
	int temp;
	unsigned int flag = 0;

	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			flag = 1;
			print_array(array, size);
		}
		i++;
		if (i == size - 1 && flag == 0)
			return;
		else if (i == size - 1 && flag == 1)
		{
			i = 0;
			flag = 0;
			continue;
		}
	}
}
