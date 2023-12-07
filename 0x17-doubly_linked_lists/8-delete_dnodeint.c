#include "lists.h"

/**
 * delete_dnodeint_at_index -  a function that deletes the node at index index of a dlistint_t linked list
 * @head: the head
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (i < index)
		{
			i++;
			if (!current->next)
				return (-1);
			current = current->next;
		}
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
	}
	free(current);
	return (1);
}
