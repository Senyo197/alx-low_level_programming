#include "main.h"

/**
*_strchr - locates charaters in a string
*@s: a pointer to the string
*@c: character to be located
*Return: NULL,
*/

char *_strchr(char *s, char c)
{
size_t a;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == c)
{
return (s + a);
}
}

return (NULL);
}
