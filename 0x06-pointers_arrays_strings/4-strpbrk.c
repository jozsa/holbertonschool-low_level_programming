#include "holberton.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string to be searched
 * @accept: The string to compare
 *
 * Return: A pointer to the byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	int scount, account;

	for (scount = 0; s[scount] != '\0'; scount++)
	{
		for (account = 0; accept[account] != '\0'; account++)
		{
			if (s[scount] == accept[account])
			{
				s++;
				return (s + 1);
			}
		}
	}
	if (*s != *accept)
		return (0);
	return (s);
}
