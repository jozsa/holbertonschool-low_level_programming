#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed to the program
 * @argc: The count of numbers passed to the program
 * @argv: The numbers passed to the program
 *
 * Return: 1 if non-digits are passed, 0 otherwise
 */

int main(int argc, char **argv)
{
	int count, sum = 0;

	if (argc < 2)
		printf("0\n");

	else
	{
		for (count = 1; count < argc; count++)
		{
			if (!isdigit(*argv++) != 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	return (0);
}