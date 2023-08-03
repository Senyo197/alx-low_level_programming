#include "main.h"

/**
  *binary_to_uint - converts a binary value yo unsigned int
  *@b: number to be converted
  *Return: converted value
  */
unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int converted_value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		converted_value = (converted_value << 1) + (b[i] - '0');
	}

	return (converted_value);
}
