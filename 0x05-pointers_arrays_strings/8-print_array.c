#include "main.h"
/**
 * print_array - function that prints an array
 * @a: array name
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	printf("\n");
}
