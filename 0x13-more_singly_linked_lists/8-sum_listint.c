#include "lists.h"
/**
 * sum_listint - Calculation of the sum of the DATA in listint_t-list.
 * @head:1st node in Linked-list.
 *
 * Return: Results sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
