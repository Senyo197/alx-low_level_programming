#include "main.h"

/**
  *_pow_recursion - calculates powers of numbers
  *@x: number to be exponented
  *@y: exponential number
  *Return: powers of number, -1 if < 0 and 1 if = 0
  */
int _pow_recursion(int x, int y)
{
int rst;

if (y < 0)
{
	return (-1);
}

if (y == 0)
{
	return (1);
}

rst = x * _pow_recursion(x, (y - 1));
return (rst);
}
