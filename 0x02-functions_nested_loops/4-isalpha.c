#include "main.h"

/**
*_isalpha - checks alphabetic characters
*
*@c: checks for alphabetic characters
*
*Return: 1 for alphabetic charaters, 0 for other characters
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
		return (1);
}
	else
{
	return (0);
}
}
