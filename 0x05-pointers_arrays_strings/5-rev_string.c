#include "main.h"

/**
*rev_string - reverse string
*@s: variable of the message to be printed
*/
void rev_string(char *s)
{
int lnth = strlen(s);

int a = 0;

int b = lnth - 1;

while (a < b)
{
char rv = s[a];
s[a] = s[b];
s[b] = rv;
	a++;
	b--;
}
}
