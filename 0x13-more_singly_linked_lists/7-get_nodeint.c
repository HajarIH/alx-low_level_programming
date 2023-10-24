#include "lists.h"

/**
 * get_nodeint_at_index: a function that returns the nth node of a list
 * @head: the head of a list
 * index: the index of node
 * Return: the pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	int i = 0;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
