#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that calculate list lenght
 * @h : singly linked list
 * Return: the lenght of a singly linked list
 */

size_t list_len(const list_t *h)
{
	int L = 0;

	if (h->next == NULL)
		return (0);
	else
		while (!h->next)
		{
			h = h->next;
			L++;
		}
	return (L);
}
