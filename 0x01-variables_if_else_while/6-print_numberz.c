#include <stdio.h>

/**
 * main - Print all single digits of base 10
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
