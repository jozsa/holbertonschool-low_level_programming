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

	while (n < 10)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
		n++;
		if (n == 9)
		{
			putchar('0' + n);
			break;
		}
	}
	putchar('\n');
	return (0);
}
