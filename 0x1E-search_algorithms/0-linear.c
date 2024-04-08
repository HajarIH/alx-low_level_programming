#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int j;
	
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
