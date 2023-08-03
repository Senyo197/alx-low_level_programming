#include "main.h"

/**
  *clear_bit - clear bit at a given number
  *@n: number to be cleared
  *@index: index of the bit to be cleared
  *Return: 1 for success, -1 for failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
