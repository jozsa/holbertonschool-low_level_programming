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
	unsigned int count;

	mask = 1 << index;
	masked = n & mask;
	th = masked >> index;

	for (count = 0; n != 0; n >>= 1)
	{
		if (n & 01)
			count++;
	}
	if (index > count)
		return (-1);
	return (th);
}
