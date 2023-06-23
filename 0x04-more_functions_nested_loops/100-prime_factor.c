#include <stdio.h>
/**
 * main - a function that prints the largest prime factor of a number
 *
 * Return: 0 if success
 */
int main(void)
{
	int prime;
	int i;
	int n;
	n = 612852475143;

	for(i = 1; i < n; i++)
	{
		if (prime % i == 0)
			prime = i;
	}
	pritnf("%d", prime);
	return (0);
}
