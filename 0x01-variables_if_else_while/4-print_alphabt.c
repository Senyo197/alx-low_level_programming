#include <stdio.h>
/**
*main - to return lowercase alphabets except e and q
*Return: 0, unless conditioned
*/
int main(void)
{
char lwc = 'a';
while (lwc <= 'z')
{
if (lwc != 'q' && lwc != 'e')
{
putchar(lwc);
}
lwc++;
}
putchar('\n');

return (0);
}
