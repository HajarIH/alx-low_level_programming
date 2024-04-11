#include "search_algos.h"

/**
 * exponential_search- a function that searches for a value
 * in a sorted array of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right = 0, end = 1, mid = 0;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		end = end * 2;
	}
	left = end / 2;
	if (end >= size)	
		right = size - 1;
	else
		right = end; 
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
