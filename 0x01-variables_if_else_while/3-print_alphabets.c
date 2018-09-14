#include <stdio.h>

/**
 * main - Print the alphabet in lower and uppercase
 *
 * Return: Always 0
 *
 */

int main(void)

{
	char z = 'a';
	char y = 'A';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
