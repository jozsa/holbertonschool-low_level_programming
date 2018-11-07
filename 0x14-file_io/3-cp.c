#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
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
	int length = 0, fd = 0, fd2 = 0, wt = 0;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	length = read(fd, buffer, 1024);
	if (length == -1 || fd == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                free(buffer);
                exit(98);
        }
	wt = write(fd2, buffer, length);
	while (length > 0)
	{
		if (wt == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		length = read(fd, buffer, 1024);
		wt = write(fd2, buffer, length);
		buffer = buffer + length;
	}
	if (close(fd) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		free(buffer);
		exit(100);
	}
	return (0);
}
