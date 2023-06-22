#include <stdio.h>

/**
*main - prints combination of 3 different set of numbers
*Return: 0 always, unless conditioned
*/
int main(void)
{
int fcn, scn, tcn;

for (fcn = 0; fcn <= 9; fcn++)
{
for (scn = fcn + 1; scn <= 9; scn++)
{
for (tcn = scn + 1; tcn <= 9; tcn++)
{
	putchar(fcn + '0');
	putchar(scn + '0');
	putchar(tcn + '0');
if (fcn < 7 || scn < 8 || tcn < 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
