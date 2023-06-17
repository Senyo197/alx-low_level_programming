#include <stdio.h>

/**
*main - prints all single numbers with comma
*Return: 0, unless conditioned
*/
int main(void)
{
int sdn = 0;

while (sdn <= 9)
{
putchar(sdn + '0');
if (sdn < 9)
{
putchar(',');
putchar(' ');
}
sdn++;
}
putchar('\n');

return (0);
}
