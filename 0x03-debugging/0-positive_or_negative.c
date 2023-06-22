#include "main.h"
#include <stdio.h>
/**
 *main - this function tells whether or not number is - || + || 0
*Return: 0, unless conditioned
*/
void positive_or_negative(int i)
{

if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
