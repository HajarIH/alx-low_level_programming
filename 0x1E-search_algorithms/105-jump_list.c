#include "search_algos.h"
#include <math.h>

/**
 * jump_list- a function that searches for a value in
 * a sorted list of integers using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 * or NULL otherwise
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, i, j, idx = 0;
	listint_t *current = list, *tmp = list;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	while (current->next && current->n < value)
	{
		for (i = 0; i < jump && current->next; i++)
			current = current->next;
		idx = idx + jump;

		printf("Value checked at index [%d] = [%d]\n", idx, current->n);
	}
	if (idx < (int)size)
		printf("Value found between indexes [%d] and [%d]\n", idx - jump, idx);
	else
		printf("Value found between indexes [%d] and [%ld]\n", idx - jump, size - 1);
	for (j = 0; j < idx - jump && tmp->next; j++)
		tmp = tmp->next;

	for (i = idx - jump; i < idx && tmp != NULL; i++)
	{
		printf("Value checked at index [%d] = [%d]\n", i, tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
