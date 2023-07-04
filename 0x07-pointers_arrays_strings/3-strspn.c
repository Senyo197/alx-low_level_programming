#include "main.h"

/**
 *_strspn - calculates number of bytes in the initial segment a string
 *@s: a pointer to the string
 *@accept: string to be checked
 *Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	a = 0;

	for (; *s != '\0'; s++)
	{
		b = 0;

		for (; *accept != '\0'; accept++)
		{
			if (*accept == *s)
			{
				b = 1;
				break;
			}
		}
	

		if (b == 0)
		{
			return (a);
		}
		
		a++;
	}
	
	return (a);
}


