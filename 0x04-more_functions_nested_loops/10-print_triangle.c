#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: number that & is printed
 * Return: void
 */
void print_triangle(int size)
{
        if (size > 0)
        {
                int i, j;

                for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
                        _putchar(' ');
			}
			for (j = 1; j <= i; j++)
                        {
                        _putchar('#');
                        }
		}
		_putchar('\n');
        }
	else
	{
		_putchar('\n');
	}
}
