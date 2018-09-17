#include <stdio.h>

/**
 * main - Prints numbers from 00 to 99
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int y, z;

	while (y <= 9)
	{
		putchar('0' + y);
		putchar('0' + z);
		if (y == 9 && z == 9)
			break;
		putchar(',');
		putchar(' ');
		z++;
		if (z > 9)
		{
			y++;
			z = 0;
		}
	}
	putchar('\n');
	return (0);
}
