#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: The text file to read and print
 * @letters: The number of letters the function should read/print
 *
 * Return: Upon success, number of letters it did read/print. 0 upon failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int length;
	int fd;

	buffer = malloc(sizeof(size_t) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	length = read(fd, buffer, letters);
	if (length > 0)
	{
		if (write(STDOUT_FILENO, buffer, length) != length)
			return (0);
	}
	return (length);
}
