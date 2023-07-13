#include "main.h"

/**
  *_calloc - allocate memory
  *@nmemb: array
  *@size: data type size
  *Return: allocated memmory or nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *value;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	value = malloc(nmemb * size);

	return (value);
}
