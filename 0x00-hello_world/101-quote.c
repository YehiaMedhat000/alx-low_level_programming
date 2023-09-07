#include <stdio.h>
#include <unistd.h>
/*This is a c program */
/**
 *  main - This is a program that prints a statement using the puts() funtion
 *
 *  Return: Always success
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(str, stdout);
	return (1);
}
