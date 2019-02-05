#include "sort.h"

/**
 * selection_sort - Does a selection sort on an array of integers
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int s_idx;	/*Sorted sublist index*/
	unsigned int u_idx;	/*Unsorted sublist index*/
	int temp = 0;		/*Temp variable to store min. integer*/
	unsigned int min;	/*Store index of min. element*/

	for (s_idx = 0; s_idx < size; s_idx++)
	{
		min = s_idx;
		for (u_idx = s_idx + 1; u_idx < size; u_idx++)
		{
			if (array[min] > array[u_idx])
				min = u_idx;
		}
		if (min != s_idx)
		{
			temp = array[s_idx];
			array[s_idx] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
