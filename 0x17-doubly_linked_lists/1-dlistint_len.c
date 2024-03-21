#include "lists.h"

/**
 * dlistint_len - Gets the length of
 * a doubly linked list
 * @h: The head node of the list
 * Return: The length or number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
