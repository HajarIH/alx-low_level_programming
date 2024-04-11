#include "search_algos.h"
#include <math.h>

/**
 * jump_search- a function that searches for a value in
 * a sorted array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, i = 0, j = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i,  array[i]);
		i = i + step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
	for (j = i - step; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j,  array[j]);
		if (array[j] == value)
			return ((int)j);
	}
	return (-1);
}
