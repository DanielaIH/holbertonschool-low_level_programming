#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to list
 * @str: new string to add
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	Node *new;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);

	new = (Node *) malloc(sizeof(Node));
	if (new == NULL)
                return (NULL);
	new->str = strdup(str); /* set node values */
	new->len = strlen(str);

	if (head == NULL) /* set what new node points to first */
		new->next = NULL;
	else
		new->next = *head;

	*head = new; /* set head to point to new node */

	return (new);
}
