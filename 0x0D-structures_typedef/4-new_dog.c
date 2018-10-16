#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(struct dog));

	if (doggo == NULL)
		return (NULL);

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	return (doggo);
}
