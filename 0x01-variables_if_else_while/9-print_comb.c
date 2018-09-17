#include <stdio.h>

/**
 * main - Print all possible combos of single-digit numbers
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
