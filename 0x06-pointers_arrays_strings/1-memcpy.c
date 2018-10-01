#include "holberton.h"

/**
 * _memcpy - Copy n bytes from src to dest
 * @dest: The 

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
