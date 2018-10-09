#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create an array of chars & initialize it with specific char
 * @size: Number of chars in the array
 * @c: The specific char to initialize the array with
 *
 * Return: NULL if size = 0 or if it fails, pointer to array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ar = (char *)malloc(size * sizeof(c));
	unsigned int index;

	if (size == 0 || ar == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ar[index] = c;

	return (ar);
}
