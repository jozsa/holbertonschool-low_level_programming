#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements in array
 * @size: Size, in bytes, for each element
 *
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *ptr;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	ptr = arr;
	while (index <= (nmemb * size))
	{
		ptr[index] = '\0';
		index++;
	}
	return (ptr);
}
