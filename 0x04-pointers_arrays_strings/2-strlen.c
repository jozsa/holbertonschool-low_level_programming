#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length will be returned
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	char *len;

	for (len = s; *len; ++len)
	{
	}
	return (len - s);
}
