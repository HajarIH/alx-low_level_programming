#include "main.h"
/**
 * _strlen - a function that return the length of a string
 * @s: the variable char
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != 0)
	{
		n++;
		s++;
	}
	return (n);
}
