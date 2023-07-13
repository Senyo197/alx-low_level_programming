#include "main.h"

/**
  *malloc_checked - a function to allocate memory
  *@b: data type to allocate memory for
  *Return: 98 is memory allocate fails, or pointer to the value if success
  */

void *malloc_checked(unsigned int b)
{
	void *value = malloc(b);

	if (value == NULL)
	{
		exit(98);
	}

	return(value);
}
