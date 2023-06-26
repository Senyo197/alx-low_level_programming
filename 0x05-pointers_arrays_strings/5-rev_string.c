#include "main.h"

/**
*rev_string - reverse string
*@s: variable of the message to be printed
*/
void rev_string(char *s)
{
int lnth = strlen(s);

int a = lnth - 1;

while (a >= 0)
{
	_putchar(s[a]);
	a--;
}
_putchar('\n');
}

int _putchar(char c)
{
	return (putchar(c));
}
