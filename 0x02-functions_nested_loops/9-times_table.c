#include "main.h"
/**
 * times_table - function that prints 9 time table
 *
 * Return : void
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			_putchar(k);
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
