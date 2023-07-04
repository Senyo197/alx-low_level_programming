#include "main.h"

/**
 *_strstr - locates string in substring
 *@haystack: string to be located
 *@needle: substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	for (; *haystack != '\0'; haystack++)
	{
		a = haystack;
		b = needle;
		
		for (; *a == *b && *b != '\0'; a++)
		{
			b++;
		}		

		if (*b == '\0')
		{
			return (haystack);
		}
	}	

	return (NULL);
}

