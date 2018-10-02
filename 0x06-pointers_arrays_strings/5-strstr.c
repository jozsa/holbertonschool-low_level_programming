#include "holberton.h"

/**
 * _strstr - Finds the first occurence of a substring in a string
 * @haystack: The string to be searched
 * @needle: The substring to be found
 *
 * Return: Pointer to the beginning of the located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	if (*haystack != *needle)
		return (0);
	return (haystack);
}
