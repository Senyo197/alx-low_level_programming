#include "main.h"

/**
*print_array - prints elements in an array
*@n: number of elements in the array
*@a: points to the first element in the array
*/
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
	if (x != n && x != 0)
{
	printf(", ");
}
	printf("%d", a[x]);
}
printf("\n");
}
