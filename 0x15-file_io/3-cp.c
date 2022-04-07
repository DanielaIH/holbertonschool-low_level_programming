#include "main.h"
#include <string.h> /* len */
#include <stdio.h>

/**
 * main - copies the content of a file to another file.
 * @argc: number of argv
 * @argv: arguments
 * Return: 0 on success, number of error on failure
 */

int main(int argc, char *argv[])
{
	int fd, fd_2, wr, rd, cl = 0;
	char *buf;

if (argc != 3)
{
	exit(97);
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}
fd = open(argv[1], O_RDONLY); /* open file from */
if (fd == -1)
{
	close(fd);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664); /*open file to*/
if (fd_2 == -1)
{
	close(fd_2);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}
if (cl == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
buf = malloc(sizeof(char) * strlen(argv[2]));
if (buf == NULL)
	return (0);
rd = read(fd, buf, strlen(argv[2]));
if (rd == -1)
	return (0);
wr = write(STDOUT_FILENO, buf, rd);
if (wr == -1)
	return (0);
return (0);
}
