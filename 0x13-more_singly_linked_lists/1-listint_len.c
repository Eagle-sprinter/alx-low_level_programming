#include "lists.h"
/**
 * listint_len - Returned n0. of element in Linked-lists.
 * @h: Linked-list types listint_t to be traversed.
 *
 * Return: n0. nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
