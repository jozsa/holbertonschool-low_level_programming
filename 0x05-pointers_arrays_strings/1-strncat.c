#include <stdio.h>
#include "holberton.h"

/**
 * _strncat - Concenating two strings, up to n bytes from src
 * @dest: The string to be appended
 * @src: The string to append to dest
 * @n: The number of bytes appended from src
 *
 * Return: A pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen, srclen;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
		;

	for (srclen = 0; srclen < n && src[srclen] != '\0'; srclen++)
		dest[destlen + srclen] = src[srclen];

	return (dest);
}
