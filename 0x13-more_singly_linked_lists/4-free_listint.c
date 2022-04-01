#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to first element at linked list
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
