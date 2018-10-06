#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program's name followed by a new line
 * @argc: The number of arguments supplied to the program via the command line
 * @argv: The program name
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
