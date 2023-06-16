#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - this function tells whether or not number is - || + || 0
*Return: 0, unless conditioned
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);
}
