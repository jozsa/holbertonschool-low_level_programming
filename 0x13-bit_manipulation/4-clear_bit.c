#include "holberton.h"

/**
 * clear_bit - Clear/set the value of a bit to 0 at a given index
 * @n: The number to add the bit to
 * @index: The index to clear the bit at
 *
 * Return: 1 if it worked, -1 if it didn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int nth = ~(1 << index);

	if (index > 31)
		return (-1);

	*n = *n & nth;

	return (1);
}
