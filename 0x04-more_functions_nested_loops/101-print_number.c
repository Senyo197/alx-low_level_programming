#include "main.h"

/**
*print_number - is a function to print all integers
*@n: is integer
*/
void print_number(int n)
{
int itg = n;
if (itg < 0)
{
	_putchar(45); /* ASCII "-" */
	itg = -itg;
}
	if (itg > 9)
{
	unsigned int dgts = itg;
	print_number(dgts / 10);
}
_putchar((itg % 10) + '0');
}
