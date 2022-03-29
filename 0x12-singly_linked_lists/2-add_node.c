#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to linked list
 * @str: new string to add
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL) /* check if duplicate str is NULL*/
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /* duplicate str in node */
	new->len = strlen(str);

	if (head == NULL) /* set what new node points to first */
		new->next = NULL;
	else
		new->next = *head;

	*head = new; /* set head to point to new node */

	return (new);
}
