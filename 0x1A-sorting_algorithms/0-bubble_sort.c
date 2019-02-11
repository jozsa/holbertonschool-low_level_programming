#include "sort.h"

/**
 * bubble_sort - Do a bubble sort on an array of integers
 * @array: The array to sort
 * @size: The size of the array to sort
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0;		/* index of array */
	int temp;			/* storage variable for swapping */
	unsigned int swapped = 0;	/* set to 1 if 2 elements have been swapped */

	if (!array)
		return;
	while (i < size - 1)
	{
		/* if two elements are not in ascending order, swap them */
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swapped = 1;
			print_array(array, size);
		}
		i++;

		/* if a swap has not occured and the array is */
		/* at the end, the array has been sorted.     */
		if (i == size - 1 && !swapped)
			return;

		/* if a swap has occured and the array is */
		/* at the end, go through the array again */
		/* and swap if necessary.		  */
		else if (i == size - 1 && swapped)
		{
			i = 0;
			swapped = 0;
		}
	}
}
