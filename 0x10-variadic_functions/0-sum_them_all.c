#include "variadic_functions.h"

/**
  *sum_them_all - sum all argument
  *@n: fixed argument
  *Return: total number of the sumed arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int value;
	unsigned int a;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (a = 0; a < n; a++)
	{
		value = va_arg(args, unsigned int);
		sum += value;
	}

	va_end(args);
	return (sum);
}
