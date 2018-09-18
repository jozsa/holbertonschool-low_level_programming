#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - Print the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 if n > 0, 0 if n == 0, and -1 if n < 0
 *
 */

int print_sign(int n)
{
	int number = n;

	if (number > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
