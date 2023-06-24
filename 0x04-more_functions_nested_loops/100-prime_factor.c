#include <stdio.h>
#include <math.h>

/**
*main - prints the prime factors of a number.
*Return: 0.
*/
int main(void)
{
long pfs = 1;

long mpf;

long gn = 612852475143;

double sqr = sqrt(gn);

while (pfs <= sqr)
{
	if (gn % pfs == 0)
{
	mpf = gn / pfs;
{
	pfs++;
}
printf("%ld\n", mpf);

return (0);
}
