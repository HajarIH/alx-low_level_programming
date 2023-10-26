#include "main.h"

/**
 * _pow: a function that calculate the power of a number
 * @base: the base
 * @exponent: the exponent
 * Return: the power of a number
 */

unsigned long int _pow(unsigned int base, unsigned int exponent)
{
        unsigned long int result = 1;
        unsigned int i = 0;

        for (i = 1; i <= exponent; i++)
        {
                result = result * base;
        }
        return (result);
}

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

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = _pow(2, index);
	test = n & bit;
	if (test)
		return (1);
	else
		return (0);
}
