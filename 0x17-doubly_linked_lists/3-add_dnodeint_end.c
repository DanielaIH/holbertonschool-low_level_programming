#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to first element in double linked list.
 * @n: Element to add to list.
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	last_node = *head;
	if (last_node == NULL) /*first node in the list*/
	{
		new_node->next = *head;
		*head = new_node;
	}
	else  /*other nodes in the list*/
	{
		while (last_node->next != NULL)
			last_node = last_node->next;

		new_node->n = n;
		last_node->next = new_node;
		new_node->prev = last_node;
		new_node->next = NULL;
	}
	return (*head);
}
