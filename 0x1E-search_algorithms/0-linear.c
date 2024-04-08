#include "search_algos.h"
/**
 * linear_search-  a function that searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int j = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			j = (int)i;
			return (j);
		}
	}
	return (-1);
}
