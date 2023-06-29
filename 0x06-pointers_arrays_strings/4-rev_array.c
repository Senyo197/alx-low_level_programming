#include "main.h"

/**
*reverse_array - reverse elements in an array
*@a: pointer array to the first element
*@n: number of elements in an array
*/

void reverse_array(int *a, int n)
{
int first_elem = 0;

int last_elem = n - 1;

for (first_elem = 0; first_elem < last_elem; first_elem++)
{
	int rv = a[first_elem];

	a[first_elem] = a[last_elem];

	a[last_elem] = rv;

	last_elem--;
}
}
