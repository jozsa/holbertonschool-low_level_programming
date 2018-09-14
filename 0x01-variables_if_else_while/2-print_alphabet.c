#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always 0
 *
 */

int main(void)

{
	char z = 'a';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
