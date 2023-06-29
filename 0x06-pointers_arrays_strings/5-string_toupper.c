#include "main.h"

/**
*string_toupper - change string to uppercase
*@alph: alphabets
*Return: alpha
*/

char *string_toupper(char *alph)
{
int a;

for (a = 0; alph[a] != '\0'; a++)
{
	if (alph[a] >= 'a' && alph[a] <= 'z')
{
	alph[a] = alph[a] - 'a' + 'A';
}
}
return (alph);
}
