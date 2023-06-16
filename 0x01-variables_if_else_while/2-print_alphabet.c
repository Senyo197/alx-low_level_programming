#include <stdio.h>
/**
*main - print lowercase alphabets
*Return: 0, unless conditioned
*/
int main(void)
{
char lwc = 'a';
while (lwc <= 'z')
{
putchar(lwc);
lwc++;
}
putchar('\n');
return (0);
}
