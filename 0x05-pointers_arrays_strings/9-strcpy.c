#include "main.h"

/**
*_strcpy - copy string from src to dest
*@src: source of the sting
*@dest: destination of the string
*Return: destination string
*/
char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0; src[a] != '\0'; a++)
{
	dest[a] = src[a];
}

dest[a] = '\0';

return (dest);
}
