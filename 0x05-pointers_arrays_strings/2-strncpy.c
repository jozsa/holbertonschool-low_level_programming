#include "holberton.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The buffer zone for the string to be copied
 * @src: The pointer to the string to be copied
 * @n: The maximum number of bytes to be copied from the second string
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n && src[length] != '\0'; length++)
		dest[length] = src[length];

	for ( ; length < n; length++)
		dest[length] = '\0';

	return (dest);
}
