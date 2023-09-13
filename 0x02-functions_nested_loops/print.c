#include "main.h"

/**
 * print - function to print
 * @c: paramter, char array
 * Return: Always success (0)
 */


int print(char c[])
{
    write(1, c, strlen(c));
    return (0);
}
