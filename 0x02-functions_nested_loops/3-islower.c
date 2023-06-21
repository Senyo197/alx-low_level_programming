#include "main.h"

/**
*_islower - checks program for lowercase alphabets
*
*@c: an argument to check the code
*Return: 1 for lowercase alphabets, 0 for anything else
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}

return (0);
}
