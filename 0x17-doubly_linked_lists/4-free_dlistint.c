#include "lists.h"

/**
 * free_dlistint - Frees a doubly
 * linked list
 * @head: The head node of the list
 * Return: Nothing (void)
 */

void free_dlistint(dlistint_t *head)
{
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	if (!head->next)
		free(head);
}
