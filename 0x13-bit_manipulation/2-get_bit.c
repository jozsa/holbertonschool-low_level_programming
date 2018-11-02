#include "holberton.h"

/**
 * get_bit - Get the bit at index of n
 * @n: The number to be read
 * @index: The index to get the bit from the number
 *
 * Return: The bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask, masked, th;

	mask = 1 << index;
	masked = n & mask;
	th = masked >> index;

	if (index > 31)
		return (-1);
	return (th);
}
