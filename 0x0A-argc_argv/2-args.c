#include "main.h"

/**
  *main - prints all arguments
  *@argc: number of command lines
  *@argv: array of strings
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
