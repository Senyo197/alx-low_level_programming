#include "main.h"

/**
  *print_binary - print binary representation of a number
  *@n: number to be printed
  */
void print_binary(unsigned long int n)
{
	int bit_position, bit, print_flag = 0;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bit_position = sizeof(unsigned long int) * 8 - 1;

	while (bit_position >= 0)
	{
		mask = 1UL << bit_position;
		bit = (n & mask) ? 1 : 0;

		if (bit)
			print_flag = 1;

		if (print_flag)
			_putchar(bit + '0');

		bit_position--;
	}
}
