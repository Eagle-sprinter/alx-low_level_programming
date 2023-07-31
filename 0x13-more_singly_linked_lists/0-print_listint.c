#include "lists.h"
/**
 * Prints_listint - to print all the element of linked lists.
 * @h: Linked-list type listint_t to be printed.
 *
 * Return: n0. nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
