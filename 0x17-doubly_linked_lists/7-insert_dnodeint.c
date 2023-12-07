#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given position
 * @h: the head
 * @idx: the index
 * @n: the element to add
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else
	{
		while (i < idx - 1)
		{
			i++;
			if (!current)
				return (NULL);
			current = current->next;
		}
		if (current->next == NULL)
			return (add_dnodeint_end(h, n));
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
		}
	}
	return (new);
}
