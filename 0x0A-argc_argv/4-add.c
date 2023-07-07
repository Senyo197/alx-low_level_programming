#include "main.h"

/**
  *main - add positive numbers
  *@argc: number of command lines arguments
  *@argv: array of command lines arguments
  *Return: 0 success, 1 on error
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int a;
	int b;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (a = 1; a < argc; a++)
	{

		int num = atoi(argv[a]);

		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!(isdigit(argv[a][b])))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
