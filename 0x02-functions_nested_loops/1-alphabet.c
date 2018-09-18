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
	int dig = 0;

	for (dig = 0; dig < 27; dig++)
		_putchar(abc[dig]);

	_putchar ('\n');
}
