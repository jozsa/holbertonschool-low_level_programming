#include <stdio.h>

/**
 * main - Print the alphabet except q and e
 *
 * Return: Always 0
 *
 */

int main(void)

{
	char z = 'a';

	do {
		if ((z == 'e') || (z == 'q'))
		{
			z++;
			continue;
		}
		putchar(z);
		z++;
	} while (z <= 'z');
	putchar('\n');
	return (0);
}
