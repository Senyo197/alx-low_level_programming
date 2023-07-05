#include "main.h"

/**
  *factorial - finds factorial of a number
  *@n: number to be factored
  *Return: -1 if number is < 0, 1 if 0, else factorial of numbers
  */
int factorial(int n)
{
	int rst;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	rst = n * factorial(n - 1);

	return (rst);
}
