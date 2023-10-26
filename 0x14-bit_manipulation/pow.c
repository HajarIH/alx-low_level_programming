#include "main.h"

/**
 * pow: a function that calculate the power of a number
 * @base: the base
 * @exponent: the exponent
 * Return: the power of a number
 */

int _pow(int base, int exponent)
{
	unsigned long int result = 1;
	int i = 0;

	for (i = 0; i <= exponent; i++)
	{
		result = result * base;
	}
	return (result);
}
