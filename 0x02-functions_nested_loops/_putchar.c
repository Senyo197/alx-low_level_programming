#include <unistd.h>
#include "main.h"

/**
*_putchar - print putchar
*Return: 0
*/

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
