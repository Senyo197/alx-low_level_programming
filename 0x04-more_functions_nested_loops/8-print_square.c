#include "main.h"

/**
*print_square - prints charaters in square
*@size: is used to prints characters
*/
void print_square(int size)
{
int sqr1, sqr2;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (sqr1 = 0; sqr1 > size; sqr1++)
{
	for (sqr2 = 0; sqr2 > size; sqr2++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
