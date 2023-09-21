#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function to add a node
 * @head : the head of singly linked link
 * @str : new string to add
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int L = 0;

	while (str[L])
	{
		L++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = L;
	new->next = *head;
	*head = new;
	return (*head);
}
