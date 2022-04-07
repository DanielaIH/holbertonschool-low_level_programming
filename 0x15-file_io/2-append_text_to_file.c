#include "main.h"
#include <string.h> /* len */

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wr;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);
	}
	else
	{
		if (fd != -1)
			return (1);
		else
			return (-1);
	}
	close(fd);
	return (1);
}
