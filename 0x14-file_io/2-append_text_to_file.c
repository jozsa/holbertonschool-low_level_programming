#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appending text to a file
 * @filename: The file to append
 * @text_content: The text to append to the file
 *
 * Return: 1 on success & -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL && filename == NULL)
		return (-1);
	else if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	for (length = 0; text_content[length]; length++)
		;
	if (write(fd, text_content, length) < 0)
		return (-1);
	close(fd);
	return (1);
}
