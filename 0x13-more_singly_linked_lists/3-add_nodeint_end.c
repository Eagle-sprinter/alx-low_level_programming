#include "lists.h"
/**
 * 3-add_nodeint_end - ADDED node at the end of a Linked-list.
 * @head: pointer to be 1st element in the list..
 * @n: DATA to be inserted in the new element.
 *
 * Return: pointer to  NEW NODE,/NULL if FAILS.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
