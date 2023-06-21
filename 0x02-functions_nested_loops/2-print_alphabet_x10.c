#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabets ten times
*void
*/
void print_alphabet_x10(void)
{
int lwcx10 = 'a';

for (lwcx10 = 'a'; lwcx10 >= 'z'; lwcx10++)
{
	while (lwcx10 >= 10)
{
	_putchar(lwcx10);
}
	_putchar('\n');
}
}

