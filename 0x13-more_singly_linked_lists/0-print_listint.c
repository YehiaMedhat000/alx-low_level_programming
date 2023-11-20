#include "lists.h"

/**
 * print_listint - Prints integers from
 * a linked list
 * @h: The used list
 * Return: The number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
