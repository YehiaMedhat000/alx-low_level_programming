#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * This is a header file
 */

int _putchar(char c);
char *_strdup(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);

#endif
