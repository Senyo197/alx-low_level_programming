#include "main.h"
/**
*print_most_numbers - prints number from 0 to 9
*/
void print_most_numbers(void)
{
int mnumb = 0;
while (mnumb <= 9)
{
	if (mnumb != 2 && mnumb != 4)
{
	_putchar(mnumb + '0');
}
	mnumb++;
}
_putchar('\n');
}
