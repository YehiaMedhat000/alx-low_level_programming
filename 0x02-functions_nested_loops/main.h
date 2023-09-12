#include <unistd.h>
#include <string.h>
/**
 * This is a header file
 */

void print(char c[])
{
    write(1, c, strlen(c));
    return;
}