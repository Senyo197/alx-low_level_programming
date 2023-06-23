#include "main.h"

/**
*_isdigit - Prints numbers from 0 to 9
*@c: checks for digits
*Return: 1 for digit, 0 for else
*/

int _isdigit(int c)
{

if (c >= '0' && c <= '9')
{
	return (1);
}
return (0);
}
