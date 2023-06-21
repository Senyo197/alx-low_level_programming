#include <unistd.h>
#include "main.h"

/**
*main - print putchar
*Return: 0
*/

int  my_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
