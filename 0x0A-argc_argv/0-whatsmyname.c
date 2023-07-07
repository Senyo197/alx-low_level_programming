#include "main.h"

/**
  *main - function to print its name
  *@argc: number of command-line passed
  *@argv: is a pointer to an array of strings
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
