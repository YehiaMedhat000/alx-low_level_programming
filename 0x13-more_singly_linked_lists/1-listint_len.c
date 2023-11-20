#include "lists.h"

/**
 * listint_len - Gets length of a linked list
 * @h: The used list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
