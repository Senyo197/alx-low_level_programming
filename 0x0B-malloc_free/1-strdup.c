#include "main.h"

/**
  *_strdup - function to duplicate string
  *@str: string to be duplicated
  *Return: duplicated string
  */
char *_strdup(char *str)
{
	size_t lnth = strlen(str) + 1;

	char *dupr = (char *)malloc(lnth);

	if (str == NULL)
	{
		return (NULL);
	}

	if (dupr != NULL)
	{
		memcpy(dupr, str, lnth);
	}

	return (dupr);
}
