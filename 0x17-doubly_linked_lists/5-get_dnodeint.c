#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlistint_t linked list
 * @head: the head of a doubly linked list
 * @index: the index
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	int i = 0;

	while (i <= index)
	{
		i++;
		if (!current)
			return (NULL);
		current = current->next;
	}
	return (current);
}
