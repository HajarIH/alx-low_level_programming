#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a dlistint_t list
 * @head: the head of a doubly linked list
 * @n: the element to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlintint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->previous = NULL;
	head->previous = new;
	return (new);
}
