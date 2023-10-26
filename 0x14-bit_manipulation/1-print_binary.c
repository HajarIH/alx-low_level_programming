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
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, test;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		test = n & div;
		if (test == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

