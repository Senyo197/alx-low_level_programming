#include "function_pointers.h"

/**
  *int_index - searches for an integer
  *@cmp: function to search
  *@array: array to be searched
  *@size: size of the array
  *Return: element of function or -1 if no element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp == NULL || size <= 0 || array == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}

	return (-1);
}
