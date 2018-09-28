#include <stdio.h>
#include "holberton.h"

/**
 * _strcat - Concatenates two strings together
 * @dest: The string to be appended
 * @src: The string to append to dest
 *
 * Return: The pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen, srclen;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
		;

	for (srclen = 0; src[srclen] != '\0'; srclen++)
		dest[destlen + srclen] = src[srclen];

	return (dest);
}
