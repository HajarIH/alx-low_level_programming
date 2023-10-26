#include "main.h"

/**
 * get_bit: a function  that returns the value of a bit at a given index
 * @n: the number 
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 0;
	int test = 0;

	bit = _pow(2, index);
	test = n & bit;
	if (test)
		return (1);
	else
		return (0);
}
