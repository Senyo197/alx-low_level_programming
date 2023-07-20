#include "variadic_functions.h"

/**
  *print_strings - print strings
  *@separator: separates the strings
  *@n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	char *value;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		value = va_arg(args, char *);

		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(args);
}
