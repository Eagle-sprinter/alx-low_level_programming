#include "lists.h"
/**
 * Pop_listint - to delete the head node of Linked-list.
 * @head: pointer to be 1st element in the Linked-list.
 *
 * Return: DATA inside that element that was deleted,
 * or 0 empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
