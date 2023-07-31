#include "lists.h"
/**
 *8- insert_nodeint_at_index - New node to be inserted in a Linked-list,
 *
 * @head: pointer to the 1st node in the list.
 * @idx: indexed to new node is to add.
 * @n:The data to be inserted in the new node.
 *
 * Return: pointer to the new node/ NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
