#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in reverse using recursion
 * @s: The string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (*s == '0')
		_putchar('\n');
}
