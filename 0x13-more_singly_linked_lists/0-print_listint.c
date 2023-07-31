#include "lists.h"
#include<stdio.h>

/**
 * print_listint - Print all the elements of linked list.
 * @h: linked list of type listint_t to to be printed.
 *
 * Return: no. nodes.
 */

size_t print_listint(const listint_t *h)
{
 size_t nodes = 0;

 while (h)
 {
 printf("%d\n", h->n);
 nodes++;
 h = h->next;
 }

 return (nodes);
}
