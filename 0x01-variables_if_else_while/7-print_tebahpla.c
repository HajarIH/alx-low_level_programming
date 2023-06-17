#include <stdio.h>
/*
 * main return lower case alphabet in reverse
 * return 0 means success
 */
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alph[25 - i]);
}
putchar('\n');
return (0);
}
