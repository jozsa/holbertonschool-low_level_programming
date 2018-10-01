#include "holberton.h"

/**
 * _memset - Fill first n bytes of memory area starting at s with b
 * @s: The pointer to the first memory area to be filled
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to fill
 *
 * Return: The array of characters with the newly replaced bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int length = 0;

	while (length <= n - 1)
	{
		s[length] = b;
		length++;
	}

	return (s);
}
