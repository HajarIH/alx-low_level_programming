#include "main.h"
/**
 * swap_int - a function that swipe 2 integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
