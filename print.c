#include "main.h"

/**
 * print - function to print
 */


void print(char c[])
{
    write(1, c, strlen(c));
    return;
}