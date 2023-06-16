#include <stdio.h>
/**
*main - print lowercase and uppercase alphabets
*Return: 0, unless conditioned
*/
int main(void)
{
char lwc = 'a';
char upc = 'A';
while (lwc <= 'z')
{
putchar(lwc);
lwc++;
}
while (upc <= 'Z')
{
putchar(upc);
upc++;
}
putchar('\n');

return (0);
}
