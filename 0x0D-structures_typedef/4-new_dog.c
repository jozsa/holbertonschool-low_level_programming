#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog of type struct dog
 * @name: The new dog's name
 * @age: The new dog's age
 * @owner: The new dog's owner
 *
 * Return: A pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(struct dog));
	if (doggo == NULL)
		return (NULL);
	doggo->name = malloc(sizeof(name));
	if (doggo->name == NULL)
		return (NULL);
	doggo->owner = malloc(sizeof(owner));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		return (NULL);
	}
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	return (doggo);
}
