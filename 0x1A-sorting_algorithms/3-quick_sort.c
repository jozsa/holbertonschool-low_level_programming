#include "sort.h"

/**
 * swap - swaps to values in an int array if they are not equal, and
 *        prints the current state of the array it was first called with.
 * @a: first value to swap
 * @b: second value to swap
 * @array: pointer to first element of initial array
 * @size: full size of initial array
 */
void swap(int *a, int *b, int *array, int size)
{
	static int *ptr, s; /* for printing */
	int t = *a;

	if (*a != *b)
	{
		*a = *b;
		*b = t;
		if (!ptr)
			ptr = array, s = size;
		print_array(ptr, s);
	}
}

/**
 * partition - implements Lomuto partition scheme for an int array
 * @array: int array to partition
 * @lo: low index
 * @hi: high index for pivot
 * Return: index of partition
 */
int partition(int *array, int lo, int hi)
{
	int i, j, pivot = array[hi];

	for (j = i = lo; j < hi; j++)
		if (array[j] < pivot)
			swap(&array[i++], &array[j], array, hi + 1);
	swap(&array[i], &array[hi], array, hi + 1);
	return (i);
}

/**
 * quick_sort - sorts an int array using partition-exchange sorting
 * @array: int array to be sorted
 * @size: length of @array
 */
void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		int pivot = partition(array, 0, size - 1);

		quick_sort(array, pivot);
		quick_sort(array + pivot + 1, size - pivot - 1);
	}
}
