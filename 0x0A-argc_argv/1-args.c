#include "main.h"

/**
  *main - prints number of arguments
  *@argc: number of command-lines
  *@argv: pointer to an array
  *Return: 0
  */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
