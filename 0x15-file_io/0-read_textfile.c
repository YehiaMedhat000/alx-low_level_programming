#include "main.h"

/**
 * read_textfile - Reads text to the
 * POSIX standard output
 * @filename: String of the file name
 * @letters: The number of letters to
 * print
 * Return: The actual number of bytes
 * it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t len;
	ssize_t lenprt;

	if (!buffer)
		return (0);

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	len = read(fd, &buffer[0], letters);
	if (len < 0)
	{
		close(fd);
		return (0);
	}
	lenprt = write(STDOUT_FILENO, &buffer[0], len);
	if (len != lenprt)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (lenprt);
}
