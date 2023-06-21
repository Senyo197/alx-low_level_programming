#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabets ten times
*void
*/
void print_alphabet_x10(void)
{
char lwcx10 = 'a';
int increment = 0;
while (increment < 10)
{
	for (lwcx10 = 'a'; lwcx10 <= 'z'; lwcx10++)
{
	_putchar(lwcx10);
}
	_putchar('\n');
	increment++;
}
}
