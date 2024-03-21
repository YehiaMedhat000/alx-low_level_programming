#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves
 * a node at a given index through its
 * pointer
 * @head: The head node of the list
 * @index: The index at which the node
 * in interest is found
 * Return: Pointer to that node
 * NULL if it's not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (node && node->next)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (node);
}
