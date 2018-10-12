#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
	while (index <= ((max - min) + 1))
	{
		arr[index] = num;
		index++;
		num++;
	}
	return(arr);
}
