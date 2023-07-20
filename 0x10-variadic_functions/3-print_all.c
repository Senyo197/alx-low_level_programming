#include "variadic_functions.h"
/**
  *print_all - print all data format or type
  *@format: format
  */
void print_all(const char * const format, ...)
{
	int n;
	char *s;
	float f;
	char c;
	va_list args;
	const char *pter = format;
	va_start(args, format);
	while ((c = *pter))
	{
		switch (c)
		{
			case 'n':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, char));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", va_arg(args, char *));
				}
				break;
			default:
				break;
		}
		pter++;
		if (*pter && (*pter == 'n' || *pter == 'c' || *pter == 'f' ||
						*pter == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
