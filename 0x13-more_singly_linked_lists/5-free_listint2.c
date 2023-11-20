#include "lists.h"

/**
 * free_listint2 - Frees memory occupied
 * by a linked list
 * @head: Pointer to the list of nodes
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
