#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: -15 if s1 < s2, 15 if s1 > s2, 0 if they are equal
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; ++s1, ++s2)
	{
		if (*s1 == 0)
			return (0);
	}

	if (s1 < s2)
	{
		return (-15);
	}

	else
		return (15);
}
