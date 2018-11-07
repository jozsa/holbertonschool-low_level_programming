#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include "holberton.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments provided to the function
 * @argv: The pointer to each argument provided to the function
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int length = 0, fd = 0, fd2, wt = 0, ct = 0, ct2 = 0;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024);
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	length = read(fd, buffer, 1024);
	wt = write(fd2, buffer, length);
	while (length != 0)
	{
		if (wt == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
		length = read(fd, buffer, 1024);
		wt = write(fd2, buffer, length);
		buffer = buffer + length;
	}
	ct = close(fd);
	ct2 = close(fd2);
	if (ct == -1 || ct2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
