#include "lists.h"
/**
 * Reversed_listint - reverses Linked-list.
 * @head: pointer to 1st node in the lists.
 *
 * Return: pointer to 1st node in a new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
