#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - Adds a new node to the
 * beginning of h
 *
 * @head: The head of list in use
 * @str: String to insert to the node
 *
 * Return: Pointer to the list or NULL in failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *llist = malloc(sizeof(list_t *));

	if (!head || !llist)
		return (NULL); /* Fail */

	if (str)
	{
		llist->str = strdup(str);
		if (!llist->str)
		{
			free(llist);
			return (NULL);
		}

		llist->len = strlen(llist->str);
	}
	llist->next = *head;
	*head = llist;
	return (llist);
}
