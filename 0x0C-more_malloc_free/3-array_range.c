#include "main.h"

/**
  *array_range - create array
  *@min: minimum number in the array
  *@max: maximum number in the array
  *Return: created array
  */

int *array_range(int min, int max)
{
	int a = 0;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = (int *)malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	while (a < max - min + 1)
	{
		array[a] = min + a;
		a++;
	}

	return (array);
}
