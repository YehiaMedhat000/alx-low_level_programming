#ifndef _SEARCH_ALGO_
#define _SEARCH_ALGO_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 * Description: singly linked list node structure with an express lane
 */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

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
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* _SEARCH_ALGO_ */
