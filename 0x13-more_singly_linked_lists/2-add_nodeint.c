#include "lists.h"

/**
 * add_nodeint: a function that adds a node
 * @head: the pointer to the head
 * @n: the element to add
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}
