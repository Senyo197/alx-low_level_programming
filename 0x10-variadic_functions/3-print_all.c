#include "variadic_functions.h"

/**
  *print_char - print character
  *@list: points to the first variable argument
  */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
  *print_int - print integer
  *@list: points to the first variable argument
  */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
  *print_float - print floating integers
  *@list: points to the first variable argument
  */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
  *print_string - print strings
  *@list: points to the first variable argument
  */
void print_string(va_list list)
{
	char *string =  va_arg(list, char *);

	if (!string)
		string = "(nil)";
	printf("%s", string);
}



/**
  *print_all - print all data format or type
  *@format: format
  */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *_space;

	va_list list;

	va_start(list, format);

		while (format[a])
		{
			switch (format[a])
			{
				case 'i':
					print_int(list);
					break;
				case 'c':
					print_char(list);
					break;
				case 'f':
					print_float(list);
					break;
				case 's':
					print_string(list);
					break;
			default:
				break;
			}
			a++;

			_space = ", ";
			if (format[a] && (format[a] == 'i' || format[a] == 'c' ||
						format[a] == 'f' || format[a] == 's'))
				printf("%s", _space);

		}
	va_end(list);

	printf("\n");
}
