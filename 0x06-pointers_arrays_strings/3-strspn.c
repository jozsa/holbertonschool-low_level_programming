#include "holberton.h"

/**
 * _strspn - Counts bytes from accept in the prefix substring of s
 * @s: The string to be evaluated
 * @accept: The characters/bytes to be counted
 *
 * Return: The number of bytes from accept in S
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int num;

	while (*(s + count))
	{
		num = 0;
		while (*(accept + num))
		{
			if (*(s + count) == *(accept + num))
				break;
			num++;
		}
		if (!*(accept + num))
			return (count);
		count++;
	}
	return (count);
}
