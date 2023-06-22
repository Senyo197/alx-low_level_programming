#include <stdio.h>
/**
*main - print all single digit numbers
*Return: 0, unless conditioned
*/
int main(void)
{
int sdn = 0;
for (sdn = 0; sdn <= 9; sdn++)
{
	printf("%d", sdn);
}
printf("\n");

return (0);
}
