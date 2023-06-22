#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 *
 * Return: 0 means success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
                        _putchar('u');
                        _putchar('z');
                        _putchar('z');
			_putchar(' ');
		}
		else if (i % 3 == 0)
		{
                        _putchar('F');
                        _putchar('i');
                        _putchar('z');
                        _putchar('z');
			_putchar(' ');
                }
		 else if (i % 5 == 0)
                {
                        _putchar('B');
                        _putchar('u');
                        _putchar('z');
                        _putchar('z');
			_putchar(' ');
                }
		else
		{
			_putchar('i');
			_putchar(' ');
		}
	}
}
