#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 * @head: pointer to first element at linked list
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
