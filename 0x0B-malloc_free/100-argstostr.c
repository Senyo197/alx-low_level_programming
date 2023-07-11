#include "main.h"

/**
  *argstostr - concatenates all aarguments
  *@ac: first argument
  *@av: second argument
  *Return: concatenated argument or nothing if 0
  */

char *argstostr(int ac, char **av)
{
	int a, b = 0, lnth = 0, i = 0;
	char *con_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		lnth += strlen(av[a]) + 1;
	}

	con_str = malloc(sizeof(char) * lnth);

	if (con_str == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			con_str[i] = av[a][b];
			i++;
		}

		con_str[i] = '\n';
		i++;
	}
	con_str[b] = '\0';

	return ((char *)con_str);
}
