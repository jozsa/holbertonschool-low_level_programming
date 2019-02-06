#include "sort.h"

/**
 * shell_sort - Shell sort an array using Knuth sequence
 * @array: Array to sort
 * @size: Size of array to sort
 */
void shell_sort(int *array, size_t size)
{
	unsigned int h = 1;	/* interval size */
	unsigned int i;		/* outer loop/leading variable */
	unsigned int j;		/* inner loop/trailing variable */
	int temp = 0;		/* temp variable to swap ints */

	if (!array || size < 2)
		return;
	while (h * 3 + 1 < size)
		/* calculate interval size based on size of array */
		h = h * 3 + 1;
	while (h > 0)
	{
		for (i = h; i < size; i++)
		{
			for (j = i; j > h - 1; j -= h)
			{
				if (array[j - h] >= array[j])
				{
					temp = array[j];
					array[j] = array[j - h];
					array[j - h] = temp;
				}
			}
		}
		h = (h - 1) / 3; /* decrement interval size */
		print_array(array, size);
	}
}
