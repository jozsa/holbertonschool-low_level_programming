#include "holberton.h"
#include <stdio.h>

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
 * palindrome_helper - Helper function for recursive palindrome algo
 * @s: String to check
 * @start: First char of string to check
 * @end: Last char of string to check
 *
 * Return: 1 if str is palindrome, 0 otherwise
 */

int palindrome_helper(char *s, int start, int end)
{
	end -= 1;
	if (s[start] != s[end])
		return (0);
	palindrome_helper(s, start++, end--);
	return (1);
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

	if (!palindrome_helper(s, 0, end))
		return (0);
	return (1);
}
