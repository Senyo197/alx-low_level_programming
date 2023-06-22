#include "main.h"

/**
*_isupper - Prints lowercase alphabets
*@c: checks the code
*Return: 1 for uppercase, 0 for anything else
*/
int _isupper(int c)
{
char uppc;
	for (uppc = 'A'; uppc <= 'Z'; uppc++)
{
	if (uppc == c)
{
	return (1);
}
	else
{
	return (0);
}
}

return (0);
}
