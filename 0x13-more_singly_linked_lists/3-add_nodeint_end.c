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
	listint_t *node = malloc(sizeof(listint_t));

	if (!node || head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}
	while (*head)
		(*head) = (*head)->next;

	(*head)->next = node;
	return (node);
}

