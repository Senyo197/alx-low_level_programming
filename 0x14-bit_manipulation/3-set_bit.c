#include "main.h"

/**
  *set_bit - re-set a bit at given index to 1
  *@n: pointer to the number to be changed
  *@index: index to be changed
  *Return: 1 for success, -1 for failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
