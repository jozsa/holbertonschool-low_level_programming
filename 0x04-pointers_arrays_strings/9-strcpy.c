#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy - Copy a string from src to dest
 * @dest: The pointer to the buffer zone for the string to be copied
 * @src: The pointer to the string to be copied
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *storage = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (storage);
}
