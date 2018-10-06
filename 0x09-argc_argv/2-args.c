#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all arguments passed to the program
 * @argc: The number of arguments passed to the program
 * @argv: The array containing the arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
