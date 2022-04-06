#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_letters = 0;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	n_letters = read(fd, buf, letters);
	if (n_letters == -1)
		return (0);

	close(fd);
	return (n_letters);
}
