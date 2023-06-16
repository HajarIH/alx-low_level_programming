#include <stdio.h>
/*
 * main return lower case alphabet
 * return 0 means success
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

for (i = 0; i < 26; i++)
{
putchar(alph[i]);
}
putchar("\n");
return (0);
}
