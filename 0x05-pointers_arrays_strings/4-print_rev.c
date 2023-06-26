#include "main.h"

/**
*print_rev - print string in a reverse order
*@s: variable of the message to be printed
*/
void print_rev(char *s)
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
