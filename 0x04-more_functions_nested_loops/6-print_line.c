#include "main.h"

/**
*print_line - prints straight line in the terminal
*@n: used to checked the code
*/
void print_line(int n)
{
int strt_ln;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (strt_ln = 0; strt_ln < n; strt_ln++)
{
	_putchar('_');
}
_putchar('\n');
}
}
