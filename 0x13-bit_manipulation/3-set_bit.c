#include "holberton.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: The number to add the bit to
 * @index: The index to set the bit to
 *
 * Return: 1 if it worked, -1 if it didn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int nth = 1 << index;

	if (index > 31)
		return (-1);

	*n = *n | nth;

	return (1);
}
