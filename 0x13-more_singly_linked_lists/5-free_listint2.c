#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to pointer to first element at linked list
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head != NULL)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	*head = NULL;
}
