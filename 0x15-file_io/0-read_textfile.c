#include "main.h"

/**
 * read_textfile - Reads text to the
 * POSIX standard output
 * @filename: String of the file name
 * @letters: The number of letters to
 * print
 * 
 * Return: The actual number of bytes
 * it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = open(filename, O_RDONLY);
	char buffer[letters];
	ssize_t len = 0;

	if (!filename || !letters)
		return (0);
	if (fp == -1)
		return (0);

	len = read(fp, buffer, letters);
	len = write(fp, buffer, len);
	close(fp);
	return (len);
}