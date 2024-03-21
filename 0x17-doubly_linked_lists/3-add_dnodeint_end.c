#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to a
 * doubly linekd list at the end
 * @head: pointer to the list
 * @n: The data to be put in the node
 * Return: Pointer to the new node
 * NULL in failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new)
		return (NULL);

	new->n = n;
	if (!*head)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (current && current->next)
		current = current->next;

	new->prev = current;
	new->next = NULL;
	current->next = new;
	return (new);
}
