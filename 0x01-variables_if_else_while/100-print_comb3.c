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
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i < j)
{
putchar(i + 48);
putchar(j + 48);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
