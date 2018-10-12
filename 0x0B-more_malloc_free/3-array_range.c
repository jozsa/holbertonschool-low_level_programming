#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of consecutive integers from min to max
 * @min: The first number to initialize the array with
 * @max: The last number in the array
 *
 * Return: A pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int index = 0;
	int num;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	num = min;
	while (index <= (max - min))
	{
		arr[index] = num;
		index++;
		num++;
	}
	return (arr);
}
