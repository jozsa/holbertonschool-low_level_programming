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

	while (z <= 'z')
	{
		putchar(z);
		z++;
		if ((z == 'e') || (z == 'q'))
		{
			z++;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
