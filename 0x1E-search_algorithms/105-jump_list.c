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
	int jump, i, idx = 0;
	listint_t *current = list;

	if (list == NULL || size == 0)
		return (NULL);
	jump = sqrt(size);
	while (current->n < value)
	{
		for (i = 0; i < jump; i++)
			current = current->next;
		idx = idx + jump;
			
		printf("Value checked at index [%d] = [%d]\n", jump, current->n); 
	}
	printf("Value found between indexes [%d] and [%d]\n", idx, idx + jump);
	for (i = idx; i < idx + jump; i++)
	{
		printf("Value checked at index [%d] = [%d]\n", i, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
}
