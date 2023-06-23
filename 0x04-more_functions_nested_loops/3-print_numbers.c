#include "main.h"
/**
*print_numbers - prints number from 0 to 9
*/

void print_numbers(void)
{
int numb = 0;

while (numb <= 9)
{
	_putchar(numb + '0');
	numb++;
}
_putchar('\n');

}
