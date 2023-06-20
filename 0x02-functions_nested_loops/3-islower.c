#include "main.h"
/**
 * _islower - checks if a character s lower case
 * c is the character to be checked
 * return: 1 if lower case 0 if not
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
	return (1);
}
return (0);
}
