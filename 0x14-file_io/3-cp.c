#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * error_97 - Prints error message and exits for incorrect number of arguments
 */

void error_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_98 - Prints error message and exits for read failure
 * @filename: The file that didn't exist or couldn't be read
 */

void error_98(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * error_99 - Prints error message and exits for write failure
 * @filename: File that couldn't be created or couldnt be written to
 */

void error_99(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * error_100 - Prints error message and exits for close failure
 * @fd: The file descriptor that couldn't be closed
 */

void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments provided to the function
 * @argv: The pointer to each argument provided to the function
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int length = 0, fd = 0, fd2 = 0, wt = 0;
	char *buffer;

	if (argc != 3)
		error_97();
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
		error_98(argv[1]);
	fd2 = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
		error_99(argv[2]);
	length = read(fd, buffer, 1024);
	if (length == -1)
		error_98(argv[1]);
	while (length > 0)
	{
		wt = write(fd2, buffer, length);
		if (wt == -1)
			error_99(argv[2]);
		length = read(fd, buffer, 1024);
	}
	if (close(fd) == -1)
		error_100(fd);
	if (close(fd2) == -1)
		error_100(fd2);
	return (0);
}
