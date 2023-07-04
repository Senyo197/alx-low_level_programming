#include "main.h"

/**
  *print_diagsums - adds up numbers on both diagoanl lines of a square matrix
  *
  *@a: a pointer to the first number in the matrix
  *
  *@size: size of the matrix
  */

void print_diagsums(int *a, int size)
{
	int y;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (y = 0; y < size; y++)
	{
		sum_diag1 += *(a + y * size + y);
		sum_diag2 += *(a + y * size + (size - y - 1));
	}

	printf("%d, ", sum_diag1);
	printf("%d\n", sum_diag2);
}
