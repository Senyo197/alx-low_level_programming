#include "main.h"

/**
  *main - calculates the multiplication of two number
  *@argc: number of command lines
  *@argv: array of strings
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int rst;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	rst = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", rst);

	return (0);
}
