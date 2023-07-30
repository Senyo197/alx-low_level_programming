#include "main.h"

#define E_MESSAGE "Error"

/**
  *check_numbers - checks if character is a number
  *@numb: character to be checked
  *Return: 1 if there's a number, 0 for not a number
  */
int check_numbers(char *numb)
{
	int a;

	for (a = 0; numb[a]; a++)
	{
		if (numb[a] < '0' || numb[a]  > '9')
		{
			return (0);
		}
	}

	return (1);
}

/**
  *len_of_str - calculates the length of the string
  *@s: string to be calculated
  *Return: string length
  */
int len_of_str(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}

/**
*mul - multiply two numbers
*@arg1: first number
*@arg2: second number
*Return: multiplied mul
*/
char *mul(char *arg1, char *arg2)
{
	int a, b, c, lnth, lnth2, mov, n, n2, pdt;
	char *rst, *pdt_str;

	lnth = len_of_str(arg1);
	lnth2 = len_of_str(arg2);

	if (!check_numbers(arg1) || !check_numbers(arg2))
		return (NULL);
	rst = calloc((lnth + lnth2 + 1), sizeof(char));
	if (!rst)
		return (NULL);
	for (a = lnth - 1; a >= 0; a--)
	{
		mov = 0;
		n = arg1[a] - '0';
		for (b = lnth2 - 1; b >= 0; b--)
		{
			n2 = arg2[b] - '0';
			pdt = n * n2 + mov + rst[a + b + 1];
			rst[a + b + 1] = pdt % 10;
			mov = pdt / 10;
		}
		rst[a + b + 1] = mov;
	}
	pdt_str = malloc((lnth + lnth2 + 1) * sizeof(char));
	if (!pdt_str)
	{
		free(rst);
		return (NULL);
	}
	for (a = 0, c = 0; a < lnth + lnth2; a++)
	{
		if (rst[a] == 0 && c == 0)
			continue;
		pdt_str[c++] = rst[a] + '0';
	}
	pdt_str[c] = '\0';
	free(rst);
	return (pdt_str);

}

/**
  *error - handle errors for main
  */
void error(void)
{
	char *ptr = E_MESSAGE;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
	exit(98);
}

/**
  *main - prints multiplication of two numbers
  *@argc: number of command line arguments
  *@argv: array of command line arguments
  *Return: 0
 */
int main(int argc, char *argv[])
{
	char *arg1, *arg2, *rst, *ptr;

	if (argc != 3)
	{
		return (98);
	}

	arg1 = argv[1];
	arg2 = argv[2];

	rst = mul(arg1, arg2);
	if (rst == NULL)
		return (98);

	ptr = rst;
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
	free(rst);

	return (0);
}
