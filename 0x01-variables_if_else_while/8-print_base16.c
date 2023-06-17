#include <stdio.h>

/**
*main - prints all numbers of base 16
*Return: 0, unless conditioned
*/
int main(void)
{
int b16 = 0;

while (b16 <= 16)
{
if (b16 < 10)
{
putchar(b16 + '0');
}
else
{
putchar('a' + (b16 - 10));
}
b16++;
}
putchar('\n');

return (0);
}
