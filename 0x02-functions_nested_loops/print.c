#include "main.h"

/**
 * print - function to print
 */


int print(char c[])
{
    write(1, c, strlen(c));
    return (0);
}