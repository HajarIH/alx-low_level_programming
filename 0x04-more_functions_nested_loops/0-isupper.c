#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 * Return: 1 if uupercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
