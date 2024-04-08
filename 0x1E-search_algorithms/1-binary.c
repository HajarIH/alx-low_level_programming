#include "search_algos.h"
/**
 * binary_search- a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search fo
 *
 * Return: the index where value is located or -1 otherwize
 */

int binary_search(int *array, size_t size, int value)
{
	int i, left = 0;
	int right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
