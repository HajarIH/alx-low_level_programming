#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that add a node at the end of a singly linked list
 * @head: the head of a singly linked list
 * @str: a string to add at the end
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t tail;
	list_t *current = NULL;
	int L = 0;

	while (str[L])
	{
		L++;
	}
	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	tail->str = strdup(str);
	tail->len = L;
	tail->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = head->next;
	while (current->next)
	{
		current = current->next;
	}
	current->next = tail;
	return (tail);
}
