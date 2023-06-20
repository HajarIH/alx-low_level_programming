#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * return void
 */
void print_alphabet_x10(void)
{
	int i;
	char C;

	for (i = 0; i < 10; i++)
	{
		for (C = 'a'; C <= 'z'; C++)
		{
			_putchar(C);
		}
		putchar('\n');
	}
}
