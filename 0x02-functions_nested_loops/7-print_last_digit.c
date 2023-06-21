#include "main.h"
#include <stdlib.h>

/**
*print_last_digit - prints last digit of numbers
*
*@n: argument
*
*Return: 0.
*/
int print_last_digit(int n)
{
int ld = abs(n) % 10;
_putchar(ld + '0');
return (ld);
}
