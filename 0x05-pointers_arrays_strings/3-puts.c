#include "main.h"
/**
 * _puts - a function that prints a sring
 * @str: a variable type char
 * Return: void
 */
void _puts(char *str)
{
	while(*str != '0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
