#include "lists.h"

/**
 * delete_nodeint_at_index: a function that deletes a node at an index
 * @head: the head of a list
 * @index: the index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *delet;
	unsigned int i;

	current = *head;
	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
		current = current->next;
	delet = current->next;
	current->next = delet->next;
	free(delet);
	return (1);
}
