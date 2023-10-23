#include "lists.h"

/**
 * print_listint: a function that prints a list
 * @*h : a pointer to a list
 *
 * Return : the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	struct listint_s *current = h->next;

	if (h = NULL)
		return (a);
	a = a + 1;
	printf("%d", h->n);
	while( current != NULL)
	{
		printf("%d", current->n);
		a = a + 1;
		current = current->next;
	}
	return (a);
}
