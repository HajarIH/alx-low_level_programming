#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a dlistint_t linked list
 * @head: the head
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
