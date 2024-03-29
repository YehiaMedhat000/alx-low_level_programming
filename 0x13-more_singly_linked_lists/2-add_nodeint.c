#include "lists.h"

/**
 * add_nodeint - Adds a new node to
 * the beginning of the list
 * @head: Pointer to the list of nodes
 * @n: Integer to put in the node
 * Return: Pointer to the new node
 * NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	if (head && new_node)
	{
		return (new_node);
	}

	return (NULL);

}
