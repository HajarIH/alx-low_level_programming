#include "main.h"

/**
 * clear_bit: a function that sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	num = *n & ~(1 << index);
	*n = num;
	return (1);
}
