#include "main.h"

/**
*times_table - prints 9 times table
*
*void
*
*return 0.
*/

void times_table(void)
{
int x = 0;
int y = 0;
int mof9 = 0;

for (x = 0; x <= 9; x++)
{
	for (y = 0; y <= 9; y++)
{
	mof9 = x * y;
	if (mof9 < 10)
{
	_putchar(mof9 + '0');
}
	else
{
	_putchar((mof9 / 10) + '0');
	_putchar((mof9 % 10) + '0');
}
	if (x < 9 || y < 9)
{
	_putchar(',');
	_putchar(' ');
}
}
	_putchar('\n');
}
}