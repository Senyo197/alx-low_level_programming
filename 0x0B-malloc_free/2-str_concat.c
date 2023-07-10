#include "main.h"

/**
  *str_concat - concatenate strings
  *@s1: first string
  *@s2: second string
  *Return: concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	size_t lnth = strlen(s1);
	size_t lnth2 = strlen(s2);

	char *rst = (char *)malloc(((lnth + lnth2) + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (rst != NULL)
	{
		memcpy(rst, s1, lnth * sizeof(char));
		memcpy(rst + lnth, s2, lnth2 * sizeof(char));
		rst[lnth + lnth2] = '\0';
	}

	return (rst);
}
