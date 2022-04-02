#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to first element at linked list
 * @idx: index of the list where the new node should be added
 * @n: data to add
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
