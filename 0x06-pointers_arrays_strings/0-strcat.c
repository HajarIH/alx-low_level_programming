#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: concatenate value
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
        {
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}
