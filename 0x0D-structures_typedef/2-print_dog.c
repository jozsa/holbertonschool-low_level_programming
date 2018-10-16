#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints the elements of the struct dog
 * @d: The pointer to struct dog elements
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
