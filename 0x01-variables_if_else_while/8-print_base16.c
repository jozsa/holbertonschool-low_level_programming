#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int a = 0;
	int b = 'a';

	while (a <= 9)
	{
		putchar('0' + a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
