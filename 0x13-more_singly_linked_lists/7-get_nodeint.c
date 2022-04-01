#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to first element at linked list
 * @index: the index node, starting at 0
 * Return: head node’s data (n).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; i < index; i++)
	{
		if (i == index)
			return (node->n);
		node = node->next;
	}
}
