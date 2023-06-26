#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{       
        int i = 0;
        int n, j;

        while (*str != 0)
                i++;
	if ( i % 2 == 0)
		n = i/2;
	else
		n = (i + 1)/2;
	for (j = 0; j < n; j++)
		_putchar(str[j]);
	_putchar('\n');
}       
