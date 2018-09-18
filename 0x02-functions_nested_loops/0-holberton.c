#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints "Holberton" followed by a new line
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char hbtn[] = "Holberton";
	int digit = 0;

	while (digit < 9)
	{
		_putchar(hbtn[digit]);
		digit++;
	}

	_putchar ('\n');
	return (0);
}
