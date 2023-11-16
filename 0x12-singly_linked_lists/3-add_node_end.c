#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds node to the end of
 * a linked list
 *
 * @head: List of nodes
 * @str: String to insert into the node
 *
 * Return: Pointer to the added element, NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *llist = (list_t *)malloc(sizeof(list_t));
	list_t *node = *head;

	if (!llist || !head)
		return (NULL);

	if (str)
	{
		llist->str = strdup(str);
		if (!llist->str)
		{
			free(llist);
			return (NULL);
		}
		llist->len = strlen(str);
	}
	/* Get to the end of head */
	while (node->next)
		node = node->next;

	node->next = llist;
	return (llist);
}
