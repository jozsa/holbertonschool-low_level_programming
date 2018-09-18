#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - Print the alphabet 10x
 *
 * Return: none
 *
 */

void print_alphabet_x10(void)
{
	char abc10[] = "abcdefghijklmnopqrstuvwxyz";
	int digit = 0;
	int count = 0;

	while (count <= 9)
	{
		while (digit < 26)
		{
			_putchar(abc10[digit]);
			digit++;
		}
		digit = 0;
		count++;
		_putchar('\n');
	}
}
