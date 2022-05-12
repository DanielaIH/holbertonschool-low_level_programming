#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Pointer to first element in double linked list.
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
	free(head);
}
