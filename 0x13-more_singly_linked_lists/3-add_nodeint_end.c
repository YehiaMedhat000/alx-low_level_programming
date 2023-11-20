#include "lists.h"

/**
 * add_nodeint_end - Adds a new node
 * to the end of the list
 * @head: Pointer to the list of nodes
 * @n: The integer to put in the node
 * Return: Pointer to the new node
 * NULL in case of failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *node;

	if (!new_node || !head)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	/* In case the list has no nodes */
	if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		/* Get to the end of list */
		while (node)
			node = node->next;
		node->next = new_node;
	}

	return (new_node);
}

