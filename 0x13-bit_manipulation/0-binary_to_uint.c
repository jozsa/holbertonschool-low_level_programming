#include "holberton.h"
#include <stdio.h>

/**
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;

	if (b == NULL)
		return (0);
	for (dec = 0; *b; b++)
	{
		if (*b == '1')
			dec = (dec << 1) | 1;
		else if (*b == '0')
			dec <<= 1;
		else
			return (0);
	}
	return (dec);
}
