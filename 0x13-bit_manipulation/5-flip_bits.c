#include "holberton.h"

/**
 * flip_bits - Find the number of bits to flip to get from 1 number to another
 * @n: The number to be changed
 * @m: The number to change to
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int flip = n ^ m;

	while (flip != 0)
	{
		flip = flip & (flip - 1);
		count++;
	}
	return (count);
}
