#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s[i]);
	}
}
