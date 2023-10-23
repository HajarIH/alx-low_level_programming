#include "lists.h"

/**
 * free_listint: a function that frees a list
 * @head: the pointer to a list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
		current = head->next
		free(head);
		head = current;
}
