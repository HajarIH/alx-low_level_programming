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
 * set_bit:  a function that sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 0;
	unsigned long int num = 0;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	bit = _pow(2, index);
	num = *n | bit;
	*n = num;
	return (1);
}
