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

	for (digit = 0; digit < 10; digit++)
		_putchar(hbtn[digit]);

	_putchar('\n');
	return(0);
}
