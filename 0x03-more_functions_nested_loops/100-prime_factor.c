#include <stdio.h>

/**
 * main - Prints largest prime factor of 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int x = 612852475143, quotient = 0, primetester = 0;
	unsigned int modulo, divisor;

	for (divisor = 2; divisor < x; divisor++)
	{
		if (x % divisor == 0)
		{
			quotient = x / divisor;
			for (modulo = 2; modulo < 10; modulo++)
			{
				primetester = quotient % modulo;
				if (primetester == 0)
					break;
			}
		}
		if (modulo == 10)
		{
			printf("%lu\n", quotient);
			break;
		}
	}
	return (0);
}
