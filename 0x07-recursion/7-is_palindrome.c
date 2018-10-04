#include "holberton.h"

/**
 * _strlen_recursion - Finds the length of the string to be tested
 * @s: The string to test
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Tests whether a string is a palindrome
 * @s: The string to test
 *
 * Return: 1 if palindrome, 0 otherwise
 */

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
