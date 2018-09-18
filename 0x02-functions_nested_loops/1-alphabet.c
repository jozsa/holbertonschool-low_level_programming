#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - Print the alphabet
 *
 * Return: None
 *
 */

void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int digit = 0;

	while (digit < 26)
	{
		_putchar(abc[digit]);
		digit++;
	}
	_putchar ('\n');
}
