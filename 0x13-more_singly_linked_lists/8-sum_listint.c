#include "lists.h"

/**
 * sum_listint - Sums all values in a
 * linked list
 * @head: Pointer to the head node
 * Return: Summation of all integers
 * in the linked list
 * (0) if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
