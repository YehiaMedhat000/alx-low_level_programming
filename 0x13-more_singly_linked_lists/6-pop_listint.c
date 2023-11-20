#include "lists.h"

/**
 * pop_listint - Pops linkedlist node
 * @head: List of pointers to the nodes
 * Return: The integer n in the node
 * (0) Otherwise
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
