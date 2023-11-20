#include "lists.h"

/**
 * insert_nodeint_at_index -
 * Inserts a node at given index
 * @head: Pointer to the list of nodes
 * @idx: The index of the given node
 * @n: The integer to put in the node
 * Return: The index of the new node
 * NULL otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp, *cursor;

	new_node->n = n;
	cursor = *head;
	/* Safety checks */
	if (!new_node || !head || !cursor)
		return (NULL);

	/* Get to before idx */
	idx -= 1;
	while (idx--)
		cursor = cursor->next;

	/* Assign values */
	temp = cursor->next;
	cursor->next = new_node;
	new_node->next = temp;
	return (new_node);
}
