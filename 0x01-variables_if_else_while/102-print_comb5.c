#include <stdio.h>

/**
*main - prints two two digits without repetition
*Return: always 0, unless conditioned
*/
int main(void)
{
int fcn, scn;

for (fcn = 0; fcn < 100; fcn++)
{
for (scn = fcn + 1; scn < 100; scn++)
{
putchar((fcn / 10) + '0');
putchar((fcn % 10) + '0');
putchar(' ');
putchar((scn / 10) + '0');
putchar((scn % 10) + '0');
if (fcn < 98 && fcn < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
