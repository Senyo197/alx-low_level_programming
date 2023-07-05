#include "main.h"

/**
  *_strlen_recursion - prints string length
  *@s: string to be checked
  *Return: result
  */

int _strlen_recursion(char *s)
{
	int lnth = 1;
	int rst;

	if (*s == '\0')
	{
		return (0);
	}

	rst = lnth + _strlen_recursion(s + 1);

	return (rst);
}
