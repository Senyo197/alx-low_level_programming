#include "main.h"

/**
*_puts - print string to stdout
*@str: message to be printed
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
	_putchar(*str);
}
_putchar('\n');
}
