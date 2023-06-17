#include <stdio.h>
/*
 * main return lower case alphabet
 * return 0 means success
 */
int main(void)
{
int i;

for (i = 0; i < 16; i++)
{
if (i < 10)
putchar(48+i);
else 
putchar(87+i);
}
putchar('\n');
return (0);
}
