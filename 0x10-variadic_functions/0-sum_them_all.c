#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that sums all parameters
 * @n: the number of parameters
 * @...: a variable of parameters
 *
 * Return: the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;

	va_start(a, n);
	int i, sum;

	for (i = 0; i < n; i++)
		sum = sum + va_arg(a, int);

	va_end(a);

	return (sum);
}
