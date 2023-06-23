#include "main.h"

/**
*print_diagonal - prints diagonal lines
*@n: is use to check the code
*/
void print_diagonal(int n)
{
int dia_ln1, dia_ln2;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (dia_ln1 = 0; dia_ln1 < n; dia_ln1++)
{
	for (dia_ln2 = 0; dia_ln2 < dia_ln1; dia_ln2++)
{
	_putchar(32);
}
	_putchar(92);
	_putchar('\n');
}
}
}
