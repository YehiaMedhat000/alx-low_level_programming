#include "main.h"

/**
 * binary_to_uint - Converts a binary
 * to unsigned int
 * @b: Char of 0 and 1
 * Return: The converted number
 * or 0 if a char isn't 0 or 1 or is null
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if (!b)
        return (0);

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);
        num = num * 2 + (*b++ - '0');
    }
    return (num);
}
