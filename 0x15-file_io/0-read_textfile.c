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
	int fd = open(filename, O_RDONLY);
	char *buffer;
	ssize_t len = 0;

	if (!filename || !letters)
		return (0);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * BUFF);

	if (!buffer)
	{
		close(fd);
		return (0);
	}

	len = read(fd, buffer, letters);
	close(fd);

	len = write(STDOUT_FILENO, buffer, len);
	return (len);
}
