#include "main.h"

/**
 *_memset - fills memory with constant byte
 *@b: is the character to be stored
 *@s: a pointer to s
 *@n: number of bytes to be allocated for b
 *Return: pointer variable s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
