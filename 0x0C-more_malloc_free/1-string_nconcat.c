#include "main.h"

/**
  *string_nconcat - joins two string
  *@s1: first string
  *@s2: second string
  *@n: number of characters to be joined in second string
  *Return: concatenated string or nothing if strings are empty
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rst;
	size_t s1_lnth = strlen(s1);
	size_t s2_lnth = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= s2_lnth)
	{
		n = s2_lnth;
	}

	rst = (char *)malloc((s1_lnth + n + 1) * sizeof(char));
	if (rst == NULL)
	{
		return (NULL);
	}

	strcpy(rst, s1);
	strncat(rst, s2, n);

	return (rst);


}
