#include "main.h"

/**
*print_alphabet - prints lowercase alphabets
*void
*/
void print_alphabet(void)
{
	char lwc = 'a';

	for (lwc = 'a'; lwc <= 'z'; lwc++)
		_putchar(lwc);
	_putchar('\n');
}
