#include <stdio.h>
/*
 * main return single digit
 * return 0 means success
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(48 + i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
