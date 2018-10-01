#include "holberton.h"

/**
 * _memcpy - Copy n bytes from src to dest
 * @dest: The memory area to be changed
 * @src: The memory area to be copied
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int length = 0;

	while (length < n)
	{
		dest[length] = *src;
		length++;
		src++;
	}
	return (dest);
}
