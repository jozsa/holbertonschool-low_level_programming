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

	for (z = 'a'; z <= 'z'; ++z)
		putchar(z);

	putchar('\n');
	return (0);
}
