#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* Main - function returning the sign of a number */
/* return (0) means success */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}
