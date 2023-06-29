#include "main.h"

/**
*_strncat - join two string with n number of characters
*@dest: destination string
*@src: source string
*Return: destination string
*/

char *_strncat(char *dest, char *src, int n)
{
int a;

size_t d_lnth = strlen(dest);

for (a = 0; a < n && src[a] != '\0'; a++)
{
	dest[a + d_lnth] = src[a];
}
dest[a + d_lnth] = '\0';

return (dest);
}
