#include <stdio.h>

/**
*main - prints lowercase alphabets reversely
*Return: 0, unless conditioned
*/
int main(void)
{

char lwc = 'z';

while (lwc >= 'a')
{
putchar(lwc);
lwc--;
}
putchar('\n');

return (0);
}
