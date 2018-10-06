#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the number of arguments passed into the program
 * @argc: The number of arguments passed to the program
 * @argv: The actual arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int count = 0;

	while (argv[count] < argv[argc - 1])
		count++;
	printf("%d\n", count);
	return (0);
}
