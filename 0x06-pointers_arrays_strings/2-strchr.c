#include "holberton.h"

/**
 * _strchr - Locate a character in a string
 * @s: The string to be evaluated
 * @c: The character to be located
 *
 * Return: A pointer to s if c is found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		else if (*s == '\0')
			return (s);
		else if (c == '\0')
			return (0);
		s++;
	}
	return (0);
}
