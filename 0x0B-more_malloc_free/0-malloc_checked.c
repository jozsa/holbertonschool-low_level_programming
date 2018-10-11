#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory to whatever is passed to the function
 * @b: The values that need memory to be allocated
 */

void *malloc_checked(unsigned int b)
{
	void *type;

	type = malloc(b);

	if(type == NULL)
	{
		free(type);
		exit(98);
	}
	return(type);
}
