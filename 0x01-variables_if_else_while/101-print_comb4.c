#include <stdio.h>

/**
 * main - Prints all possible combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	/** Declaration of three digit variables */
	int d1, d2, d3;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (d2 = 0; d2 <= 9; d2++)
		{
			for (d3 = 0; d3 <= 9; d3++)
			{
				if (d1 != d2 && d2 != d3 && d3 != d1 && d1 < d2 && d2 < d3)
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(d3 + '0');
					if (d1 < 7 && d2 <= 8 && d3 <= 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
