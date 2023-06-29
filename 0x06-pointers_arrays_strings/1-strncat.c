#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: number of byte to concatenate
 * Return: concatenate value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
