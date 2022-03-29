#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to linked list
 * @str: new string to add
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /* duplicate str in node */
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL) /* set what new node points to first */
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
