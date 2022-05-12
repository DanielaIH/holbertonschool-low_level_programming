#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t linked list.
 * @head: Pointer to first element in double linked list.
 * Return: Sum of all the data (n) of a dlistint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
