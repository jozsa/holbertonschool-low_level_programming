#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length will be returned
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
