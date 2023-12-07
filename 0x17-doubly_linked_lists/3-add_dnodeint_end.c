#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a dlistint_t list
 * @head: the head of a doubly linked list
 * @n: the number to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{       
        dlistint_t *new, *current = *head;

        new = malloc(sizeof(dlistint_t));
        if (!new || !head)
        {
                free(new);
                return (NULL);
        }
        new->n = n;
        new->next = NULL;
        if (*head = NULL)
        {
                new->prev = NULL;
                *head = new;
        }
        else
        {
                while(current)
                {
                        current = current->next;
                }
		new->prev = current;
		current->next = new;
        }
	return (new);
}     
