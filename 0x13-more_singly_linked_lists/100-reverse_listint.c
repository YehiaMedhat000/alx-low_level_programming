#include "lists.h"

/**
 * reverse_listint - Reverses order of
 * a linked list of integers
 * @head: List of pointers to nodes
 * Return: Pointer to the new first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL, *temp2 = NULL;

	if (!head || !(*head))
		return (NULL);

	while (*head)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;
	return (*head);
}
