#include "main.h"
/**
 * _isalpha - checks if a character is alpha
 * c is the character to be checked
 * return 1 if c is a character and 0 if not
 */
int _isalpha(int c)
{
	for ((c >= 65 && c <= 97) || (c >= 97 && c <= 122)) 
	{
		return (1);
	}
	return (0);
}
