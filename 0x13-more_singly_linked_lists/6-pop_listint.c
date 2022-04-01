#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to pointer to first element at linked list
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head; /*asign a temp pointer to head node*/
		i = temp->n;
		*head = temp->next; /*head points to next head node*/
		free(temp);
	}
	return (i);
}
