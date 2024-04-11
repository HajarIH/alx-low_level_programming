#include "search_algos.h"

int range_binary(int *array, int left, int right, int value)
{
	int mid, i;

	if (left <= right)
		mid = left + (right - left) / 2;
	else 
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		else
			return (range_binary(array, left, mid, value));
	}
	else
	{
		if (array[mid] > value)
			return (range_binary(array, left, mid - 1, value));
		else
			return (range_binary(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary-  a function that searches for
 * a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL && size == 0) 
		return (-1);
	return (range_binary(array, 0, size - 1, value));
}
