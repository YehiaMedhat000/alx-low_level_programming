#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all nodes in a linked list
 * @h: The list to print
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		len++;
	}
	return (len);
}
