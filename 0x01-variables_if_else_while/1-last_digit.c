#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - finding and printing last digits
*Return: 0, unless conditioned
*/
int main(void)
{
int n;
int dgts = n;
int lastDig = dgts % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (lastDig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", dgts, lastDig);
}
else if (lastDig < 6 && lastDig != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", dgts, lastDig);
}
else
{
printf("Last digit of %d is %d and is 0\n", dgts, lastDig);
}
return (0);
}
