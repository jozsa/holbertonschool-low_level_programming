#include "holberton.h"

/**
 * factorial - Calculate the factorial of a given number
 * @n: The given number
 *
 * Return: -1 if n is less than 0, the factorial of the number otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
