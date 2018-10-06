#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Multiplies two numbers passed to the program
 * @argc: The count of numbers passed to the program
 * @argv: The numbers passed to the program
 *
 * Return: 0 if 2 numbers passed, 1 otherwise
 */

int main(int argc, char **argv)
{
	int a, b, product;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = (a * b); 
		printf("%d\n", product);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
