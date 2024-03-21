#include "lists.h"

/**
 * add_dnodeint - Adds a node at the
 * beginning of a doubly linked list
 * @head: Pointer to the list
 * @n: The data of the node to be added
 * Return: Address of the new node
 * NULL in failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
