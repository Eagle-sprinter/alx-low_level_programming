#include "lists.h"
/**
 * 5-free_listint2 - freed Linked-list
 * @HEAD: pointer to listint_t lists to be free.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
