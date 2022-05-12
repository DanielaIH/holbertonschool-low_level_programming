#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to first element in double linked list.
 * Return: Number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return(0);
	while (current != NULL)
	{

		current = current->next;
		elements++;
	}

	return (elements);
}
