#include "lists.h"

/**
 * print_dlistint - Prints all elements
 * of a doubly linked list
 * @h: The header node
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

