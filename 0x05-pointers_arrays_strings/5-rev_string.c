#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: a string to be reversed
 * Return: void
 */
void rev_string(char *s)
{       
        int i, j;
        char rev = s[0];

        while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}       
