#include "function_pointers.h"

/**
  *array_iterator - executesfunction  action
  *@array: array of the funtion
  *@size: size of the array
  *@action:funtion to be executed
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
