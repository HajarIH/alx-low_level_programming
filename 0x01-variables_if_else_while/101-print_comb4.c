#include <stdio.h>
/*
 * main fuction prints two digit combination
 * main returns 0
 * return 0 means success 
 */
int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
if (i < j && j < k)
{
putchar(i + 48);
putchar(j + 48);
putchar(k + 48);
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
