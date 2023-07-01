#include "main.h"

/**
*leet - substitute alphabets for leet characters
*@subt: a pointer argument
*Return: substitute values
*/

char *leet(char *subt)
{

char alph[] = "aAeEoOtTlT";
char lt_char[] = "4433007711";

int a = 0;
int b;

while (subt[a] != '\0')
{
	for (b = 0; b <= 9; b++)
{
	if (subt[a] == alph[b])
{
	subt[a] = lt_char[b];
	break;
}
}
	a++;
}
return (subt);
}
