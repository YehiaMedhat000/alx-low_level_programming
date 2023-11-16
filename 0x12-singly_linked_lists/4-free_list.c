#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Frees a linked list
 * @head: Pointer to the linked list
 * Return: Nothing (void)
 */

void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	if (!head)
		return;

	current_node = head;
	while (current_node)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}

}
