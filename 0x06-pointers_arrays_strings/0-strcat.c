#include "main.h"

/**
*_strcat - joins two strings
*@dest: pointer variable of the first string
*@src: pointer variable of the second string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
