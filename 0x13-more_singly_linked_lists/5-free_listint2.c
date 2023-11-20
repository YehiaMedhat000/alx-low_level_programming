#include "lists.h"

/**
 * free_listint2 - Frees memory occupied
 * by a linked list
 * @head: Pointer to the list of nodes
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current_node;

	current_node = *head;
	while (current_node)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}
	*head = NULL;
}
