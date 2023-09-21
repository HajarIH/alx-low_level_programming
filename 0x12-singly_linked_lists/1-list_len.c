#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that calculate list lenght
 * @h : singly linked list
 * Return: the lenght of a singly linked list
 */

size_t list_len(const list_t *h)
{
	size_t L = 0;

	while (!h->next)
	{
		L++;
		h = h->next;
		}
	return (L);
}
