#include "main.h"
/**
*puts2 - print any other number starting from the first
*@str: variable holding the string
*/
void puts2(char *str)
{
int a, b;
for (a = 0; str[a] != '\0'; a++)
{
}
for (b = 0; b < a; b += 2)
{
	_putchar(str[b]);
}
_putchar('\n');
}
