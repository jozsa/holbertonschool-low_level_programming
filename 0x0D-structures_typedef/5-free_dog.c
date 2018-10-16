#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Free the memory the dog is stored in
 * @d: The memory to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
