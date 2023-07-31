#include "lists.h"
/**
 * ADD2_nodeint - added NEW NODE at beginning of a Linked-list
 * @head: Pointer to be the 1st node in list.
 * @n: DATA to be inserted in the NEW NODE.
 *
 * Return: Pointer to NEW node,/ NULL if it FAILS.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
