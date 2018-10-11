#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory to whatever is passed to the function
 * @b: The values passed to the function
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *anything;

	anything = malloc(b);

	if (anything == NULL)
		exit(98);
	return (anything);
}
