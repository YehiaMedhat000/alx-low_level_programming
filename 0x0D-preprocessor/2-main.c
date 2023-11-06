#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Program that prints its file name
 *
 * Return: 0 (always success)
 */

int main()
{
	int i;

	for (i = 0; __FILE__[i]; i++)
		_putchar(__FILE__[i]);
	return (0);
}
