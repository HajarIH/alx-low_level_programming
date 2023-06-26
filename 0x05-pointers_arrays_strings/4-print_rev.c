#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: a variable of type char
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	for (*s != 0)
	{
		i++;
		s++;
	}
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
