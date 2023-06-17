#include <stdio.h>

/**
*main - print combination with two different numbers
*Return: 0, unless conditioned
*/
int main(void)
{
for (int fcn = 0; fcn <= 9; fcn++)
{
for (int scn = fcn + 1; scn <= 9; scn++)
{
putchar(fcn + '0');
putchar(scn + '0');
if (fcn < 8 || scn < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
