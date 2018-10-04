#include <stdio.h>
#include "holberton.h"

/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: The number to find the natural square root of
 *
 * Return: -1 if no natural square root, else the square root of n
 */

int _sqrt_counter(int x, int y)
{
	if (x > y)
		return (-1);
	if ((x * x) == y)
	{
		return (x);
	}
	else
		return(_sqrt_counter(++x, y));
}

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (_sqrt_counter (1, n));
}
