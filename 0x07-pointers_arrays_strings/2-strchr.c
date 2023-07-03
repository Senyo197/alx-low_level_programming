#include "main.h"

/**
*_strchr - locates charaters in a string
*@s: a pointer to the string
*@c: character to be located
*Return: NULL,
*/

char *_strchr(char *s, char c)
{

for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}

return (NULL);
}
