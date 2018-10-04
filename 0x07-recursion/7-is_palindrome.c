#include "holberton.h"

/**
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}

int is_palindrome(char *s)
{
	int end = _strlen_recursion(s);
	int begin = 0;
	int storage;

	if (*s == '\0')
		return (1);

	if (s[begin] == s[end])
	{
		storage = s[begin];
		s[begin] = s[end - 1];
		s[end - 1] = storage;
		end--;
		return (1);
        }
	if (s[begin] != s[end])
		return (0);
	else
		return (1);
}
