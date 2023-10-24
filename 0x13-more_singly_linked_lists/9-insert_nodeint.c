#include "lists.h"

/**
 * insert_nodeint_at_index: a function that inserts a node at an index
 * @head: the head of a list
 * @idx: the index
 * @n: the element to insert
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || !*head || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	current = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		if (i == idx -1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		else
			current = current->next;
	}
	return (NULL);
}
