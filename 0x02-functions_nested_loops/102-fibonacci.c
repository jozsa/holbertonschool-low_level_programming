#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num1 = 0, num2 = 1, next;
	int count;

	for (count = 0; count <= 50; count++)
	{
		if (count <= 1)
			next = count;
		else
		{
			next = num1 + num2;
			num1 = num2;
			num2 = next;
		}
		printf("%lu", next);
		if (count < 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
