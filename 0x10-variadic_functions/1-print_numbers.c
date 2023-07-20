#include "variadic_functions.h"

/**
  *print_numbers - print numbers only
  *@separator: separates the numbers
  *@n: number to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	unsigned int value;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		value = va_arg(args, unsigned int);
		printf("%d", value);

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
