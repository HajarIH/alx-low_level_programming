#include "main.h"
/**
 * int _abs - returns absolute value of a number
 * @c: a number to be checked
 * Return: Absolute value of a number
 */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
