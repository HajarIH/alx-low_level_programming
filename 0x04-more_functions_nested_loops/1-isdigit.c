#include "main.h"
/**
 * _isdigit - function that checks if a number is digit
 * @c: the number to be checked
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
