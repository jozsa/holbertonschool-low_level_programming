#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings, s2 can contain '*'
 * '*' can replace any string including empty string
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 1 if both can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0' && *s2 == '\0') || (*s2 == '*' && *(s2 + 1) == '\0'))
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if ((*s2 != '*' && *s2 != '\0') && *s1)
		return (wildcmp(s1 + 1, s2));
	return (0);
}
