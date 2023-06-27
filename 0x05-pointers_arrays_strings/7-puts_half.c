#include "main.h"

/**
*puts_half - prints last half of the strings
*@str: message to be print
*/
void puts_half(char *str)
{
int lnth = strlen(str);

int n = lnth / 2;

int str_hf = lnth - n;

int a;

for (a = str_hf; a < lnth; ++a)
{
	_putchar(str[a]);
}
_putchar('\n');
}
