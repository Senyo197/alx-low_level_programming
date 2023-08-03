#include "main.h"

/**
  *flip_bits - counts the number of bits to flip to get from
  *one number to another number
  *@n: first number
  *@m: second number
  *Return: the number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count;

	for (count = 0; exclusive; count++)
		exclusive &= (exclusive - 1);

	return (count);
}
