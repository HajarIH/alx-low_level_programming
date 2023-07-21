#include "function_pointers.h"
/**
 * int_index - return index place if comparison is true
 * @array: array
 * @size: size of the array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0 if success or -1 else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
}
