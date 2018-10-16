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
	int nindex, oindex;

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
	doggo->age = age;
	for (nindex = 0; name[nindex] != '\0'; nindex++)
		doggo->name[nindex] = name[nindex];
	doggo->name[nindex] = '\0';
	for (oindex = 0; owner[oindex] != '\0'; oindex++)
		doggo->owner[oindex] = owner[oindex];
	doggo->owner[oindex] = '\0';
	return (doggo);
}
