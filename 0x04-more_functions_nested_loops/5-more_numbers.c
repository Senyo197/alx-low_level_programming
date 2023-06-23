#include "main.h"
/**
*more_numbers - prints number from 0 to 14 ten times
*/

void more_numbers(void)
{
int rx14, numb;

for (rx14 = 0; rx14 < 10; rx14++)
{
	for (numb = 0; numb <= 14; numb++)
{
	if (numb > 9)
{
	_putchar((numb / 10) + '0');
}
	_putchar((numb % 10) + '0');
}
_putchar('\n');
}
}
