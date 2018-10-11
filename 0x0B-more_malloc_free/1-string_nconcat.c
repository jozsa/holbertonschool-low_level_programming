#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of 2nd string
 * @s1: The string to be appended
 * @s2: The string to append to s1, up to n bytes
 * @n: The number of bytes to use from s2
 *
 * Return: Pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int index = 0;
	unsigned int s1len, s2len, len;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;

	if (n >= s2len)
	{
		dest = malloc(sizeof(char) * (s1len + s2len + 1));
		if (dest == NULL)
			return (NULL);
	}
	else if (n < s2len)
	{
		dest = malloc(sizeof(char) * (s1len + n + 1));
		if (dest == NULL)
			return (NULL);
	}
	for (; *s1 != '\0'; s1++)
	{
		dest[index] = *s1;
		index++;
	}
	for (len = 0; len <= n; len++)
	{
		dest[index] = s2[len];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
