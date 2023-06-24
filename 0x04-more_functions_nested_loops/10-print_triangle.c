#include "main.h"

/**
*print_triangle - output characters in a triangular form.
*@size: is used to check the code.
*/

void print_triangle(int size)
{
int trg1, trg2, trg3;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (trg1 = 0; trg1 < size; trg1++)
{
	for (trg2 = size - trg1; trg2 > 1; trg2--)
{
	_putchar(32);
}
	for (trg3 = 0; trg3 <= trg1; trg3++)
{
	_putchar(35);
}
	_putchar('\n');
}
}
}
