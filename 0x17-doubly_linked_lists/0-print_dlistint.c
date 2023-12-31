#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list
 * @h: a doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
