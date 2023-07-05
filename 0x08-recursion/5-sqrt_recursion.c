#include "main.h"

/**
*_sqrt_recursion - calculates square root of a number
*@n: number
*Return: -1 if < 0 and return n if n > 0 or n = 0
*/
int _sqrt_recursion(int n)
{
	int rst;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	rst = _sqrt_recursion(n);
	return (rst);
}
