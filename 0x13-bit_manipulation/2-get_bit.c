#include "holberton.h"

/**
 *
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
