#include <stdio.h>

/**
 * main - Prints numbers from 00 to 99
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int num = 00;

	while (num <= 99)
	{
		putchar('0' + (num/10));
		putchar('0' + (num%10));
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
