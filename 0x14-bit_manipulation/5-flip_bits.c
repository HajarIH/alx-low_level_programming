#include "main.h"

/**
 * flip_bits: a function that returns the number of bits you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: of bits you would need to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  current, num = 0;
	int i, a;
	unsigned int result = 0;

	num = n ^ m;
	a = sizeof(unsigned long int)*8 - 1;
	for (i = a; i >= 0; i--)
	{
		current = num >> i;
		if (current & 1)
			result++;
	}
	return (result);
}
