#include "lists.h"

/**
 * sum_listint: a function that sums elements of a list
 * @head: the head of a list
 * Return: the sum of a list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (!head)
		return (0);
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
