#include "lists.h"

/**
  * free_listint - Frees the memory 
  * occupied by a list
  * @head: Pointer to the first node
  * Return: Nothing
  */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
