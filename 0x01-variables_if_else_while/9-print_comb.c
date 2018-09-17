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
		if (n < 9)
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
		if (n == 9)
		{
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
