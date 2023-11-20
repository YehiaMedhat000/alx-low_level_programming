#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at given index
 * @head: Pointer to the list of nodes
 * @idx: The index of the given node
 * @n: The integer to put in the node
 * Return: The index of the new node
 * NULL otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	new_node->n = n;
	new_node->next = NULL;

	/* Safety checks */
	if (!new_node || !head)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Get to idx */

	for (;temp && idx; idx--)
	{
		if (idx - 1 == 0)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
