#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - Tests whether a character is uppercase
 * @c: The character to be tested
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z')
		return (1);
	else
		return (0);
}
