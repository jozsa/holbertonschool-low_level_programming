#include "holberton.h"

/**
 * _strlen_recursion - Find the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
