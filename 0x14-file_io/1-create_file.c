#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file
 * @filename: The name of the file
 * @text_content: A string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, length, wt = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	for (length = 0; text_content[length]; length++)
		;
	wt = write(fd, text_content, length);
	if (wt == -1)
		return (-1);
	return (1);
}
