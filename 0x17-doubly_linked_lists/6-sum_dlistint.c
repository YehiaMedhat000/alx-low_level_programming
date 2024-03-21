#include "lists.h"

/**
 * sum_dlistint - Sums all the n fields
 * in a doubly linked list
 * @head: The head node of the list
 * Return: The integer sum of the n
 * fields, 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node && node->next)
	{
		sum += node->n;
		node = node->next;
	}
	sum += node->n;
	return (sum);
}
