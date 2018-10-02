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
		char *htest = haystack;
		char *ntest = needle;

		while (*haystack && *ntest && *haystack == *ntest)
		{
			haystack++;
			ntest++;
		}
		if (!*ntest)
			return (htest);

		haystack = htest + 1;
	}
	return (0);
}
