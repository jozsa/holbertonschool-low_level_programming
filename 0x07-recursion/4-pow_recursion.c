#include "holberton.h"

/**
 * _pow_recursion - Calculate the value of x to the power of y
 * @x: The number to be raised to power y
 * @y: The power to raise x to
 *
 * Return: -1 if y is less than 0, x raised to the power of y otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1); 
	return (_pow_recursion(x, y - 1) * x);
}
