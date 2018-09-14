#include <stdio.h>

/**
 * main - Print the reversed alphabet in lowercase
 *
 * Return: Always 0
 *
 */

int main(void)

{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
