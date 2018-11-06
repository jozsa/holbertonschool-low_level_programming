#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 *
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
	if ((length = read(fd, buffer, letters)) > 0)
	{
		if (write(STDOUT_FILENO, buffer, length) != length)
			return (0);
	}
	return (length);
}
