#ifndef _SEARCH_ALGO_
#define _SEARCH_ALGO_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Print arrays */
void print_array(int *array, size_t left, size_t right);

/* Main tasks */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Advanced tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);


#endif /* _SEARCH_ALGO_ */
