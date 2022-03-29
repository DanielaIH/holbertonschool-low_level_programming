#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to linked list
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
