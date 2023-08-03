#include "main.h"

/**
  *get_bit - get value of a bit at index
  *@n: number to be search
  *@index: index of the bit
  *Return: index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
