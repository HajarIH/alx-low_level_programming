#include <stdio.h>
/*
 * main return lower case alphabet
 * return 0 means success
 */
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alph[i]);
}
putchar('\n');
return (0);
}

