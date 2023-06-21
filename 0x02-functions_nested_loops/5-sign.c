#include "main.h"
/**
*print_sign - prints sign characters
*
*@n: check code for sign characters
*
*Return: 0 for zero, 1 for positive, -1 for negatives
*/

int print_sign(int n)
{
	if (n > 0)
{
	_putchar(43);
		return (1);
}
	else if (n == 0)
{
	_putchar(48);
	return (0);
}
	else if (n < 0)
{
	_putchar(45);
		return (-1);
}
	return (0);
}
