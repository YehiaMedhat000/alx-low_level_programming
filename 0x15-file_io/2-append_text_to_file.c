#include "main.h"

/**
 * append_text_to_file - Appends
 * to a file
 * @filename: File name
 * @text_content: Contents to put in
 * the file
 * Return: (1) success, (-1) failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
