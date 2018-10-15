#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Descriptors for dogs
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);

#endif /* DOG_H */
