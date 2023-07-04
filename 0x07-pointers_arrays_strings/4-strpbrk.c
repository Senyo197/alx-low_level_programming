#include "main.h"

/**
 *_strpbrk - locates first ocuurance of characters in a string
 *@s: Pointer to the null-terminated string to be searched
 *@accept: Pointer to the null-terminated string containing
 *the set of characters to search for
 *Return: null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s != '\0'; s++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}

	return (NULL);
}
