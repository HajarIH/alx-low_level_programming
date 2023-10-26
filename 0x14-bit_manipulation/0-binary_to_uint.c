#include "main.h"

/**
 * binary_to_uint: a function that  converts a binary number to an unsigned int.
 * @b: a pointer to the number to convert
 * Return: the converted number, or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num = num + 1;
	}
	return (num);
}
