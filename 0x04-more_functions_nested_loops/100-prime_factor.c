#include <stdio.h>
/**
 * main - a function that prints the largest prime factor of a number
 *
 * Return: 0 if success
 */
int main(void)
{
	long int prime;
	long int i;
	long int n;
	n = 612852475143;

	for(i = 1; i < n; i++)
	{
		if (prime % i == 0)
			prime = i;
	}
	printf("%ld", prime);
	return (0);
}
