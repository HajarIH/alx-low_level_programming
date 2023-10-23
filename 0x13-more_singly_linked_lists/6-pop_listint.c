#include "lists.h"

/**
 * pop_listint: a function that deletes the head of a list
 * @head: the head of a list
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return (0);
	current = (*head)->next;
	free(*head);
	(*head)->n = current->n;
	(*head)->next = current->next;
	return ((*head)->n);
}
