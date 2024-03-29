#include "main.h"

/**
 * read_textfile - Reads text from file
 * and prints it to the stdout
 * @filename: File name
 * @letters: Number of letters to
 * print to the stdout
 * Return: The length of printed output
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, len, written;
	char *output = malloc(letters * sizeof(char));

	if (!output || !filename)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(output);
		return (0);
	}
	len = read(f, output, letters);
	if (len < 0)
	{
		free(output);
		close(f);
		return (0);
	}
	written = write(STDOUT_FILENO, output, len);
	if (len != written)
	{
		free(output);
		close(f);
		return (0);
	}
	close(f);
	free(output);
	return (written);
}
