#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes
 * a node of linked list at given index
 * @head: List of pointers to the nodes
 * @index: The index of the node to delete
 * Return: (1) success, (-1) failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor = *head;
	listint_t *temp;

	if (!cursor || !head)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(cursor);
		return (1);
	}

	while (index-- > 1)
	{
		if (!cursor || !(cursor->next))
			return (-1);

		cursor = cursor->next;
	}
	temp = cursor->next;
	cursor->next = temp->next;
	free(temp);
	return (1);
}
