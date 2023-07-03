#include "main.h"
/**
 * _strspn - a function that get a lenght of a prefix
 * @s: input
 * @accept: input
 * Return: the number of bytes of initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);

}
