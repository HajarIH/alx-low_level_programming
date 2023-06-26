#include "main.h"
/**
 * reset_to_98 - a function that reset value of n
 * @*n: a pointer to n
 * Return: void
 */
void reset_to_98(int *n)
{
	int *p;
	p = &n;
	*p = 98;
}
