#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 *
 * Return: NULL if empty string or failure, pointer to new string otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int s1len;
	int s2len;
	int index = 0;
	char *dest;

	for (s1len = 0; s1[s1len] != 0; s1len++)
		;
	for (s2len = 0; s2[s2len] != 0; s2len++)
		;

	dest = (char *)malloc(sizeof(char) * (s1len + s2len + 1));

	for ( ; *s1 != '\0'; s1++)
	{
		dest[index] = *s1;
		index++;
	}
	for ( ; *s2 != '\0'; s2++)
	{
		dest[index] = *s2;
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
