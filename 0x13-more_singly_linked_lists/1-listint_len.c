#include "lists.h"

/**
 * listint_len: a function that returns the number of element of a list
 * @h: a pointer to a list
 * Return: the number of element of a list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
