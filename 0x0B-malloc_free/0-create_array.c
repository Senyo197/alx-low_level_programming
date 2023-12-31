#include "main.h"

/**
  *create_array - create array of characters
  *@size: array size
  *@c: characters
  *Return: array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr = (char *)malloc(sizeof(char) * (size));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr != NULL)
	{
		for (a = 0; a < size; a++)
		{
			arr[a] = c;
		}

		arr[size] = '\0';
	}

	return (arr);
}
