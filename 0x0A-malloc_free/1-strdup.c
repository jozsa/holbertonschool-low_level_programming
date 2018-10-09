#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated space in memory
 * @str: The string to be duplicated
 *
 * Return: Pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	int length = 0;
	char *str2;
	char *storage;

	while (str[length])
		length++;

	str2 = (char *)malloc(sizeof(char) * (length + 1));
	storage = str2;

	while (*str)
		*storage++ = *str++;

	*storage = '\0';

	if (str == NULL || str2 == NULL)
		return (NULL);

	return (str2);
}
