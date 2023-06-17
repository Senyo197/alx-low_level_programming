#include <stdio.h>
/**
*main - print single digit numbers
*Return: 0, unless conditioned
*/
int main(void)
{
int sdn = 0;
for (sdn = 0; sdn <= 9; sdn++)
{
putchar(sdn + '0');
}
putchar('\n');

return (0);
}
