#include "lists.h"

/**
 * get_nodeint_at_index - Gets the
 * nth node pointer of a linked list
 * @head: Pointer to the head node
 * @index: Positive integer index
 * Return: Pointer to the node
 * NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}
	return (head);
}
