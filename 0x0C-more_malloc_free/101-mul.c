#include "main.h"

/**
  *check_numbers - checks if character is a number
  *@numb: character to be checked
  *Return: 1 if there's a number, 0 for not a number
  */
int check_numbers(char *numb)
{
	int a;

	for (a = 0; numb[a] != '\0'; a++)
	{
		if (!isdigit(numb[a]))
		{
			return (0);
		}
	}

	return (1);
}

/**
*mul - multiply two numbers
*@num1: first number
*@num2: second number
*/
void mul(char *num1, char *num2)
{
	size_t rst = strtoull(num1, NULL, 10) *
		strtoull(num2, NULL, 10);
	printf("%lu\n", (unsigned long)rst);
}

/**
  *main - prints multiplication of two numbers
  *@argc: number of command line arguments
  *@argv: array of command line arguments
  *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (98);
	}

	if (!check_numbers(argv[1]) || !check_numbers(argv[2]))
	{
		return (98);
	}

	mul(argv[1], argv[2]);

	return (0);
}
