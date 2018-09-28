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
	int num;

	for (num = 0 ; s1[num] == s2[num]; num++)
	{
		if (s1[num] == '\0')
			return (0);
	}
	return (s1[num] - s2[num]);
}
