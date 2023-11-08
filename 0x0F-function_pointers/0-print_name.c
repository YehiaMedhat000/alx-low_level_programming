#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: String
 * @f: Function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
