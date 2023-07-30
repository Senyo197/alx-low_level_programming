#include "function_pointers.h"

/**
  *main - print operation code
  *@argc: number of command line arguments
  *@argv: array of command line arguments
  *Return: 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	int a;
	unsigned char *ptr = (char *)main;

	number_of_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (a = 0; a < number_of_bytes; a++)
	{
		if (a == number_of_bytes - 1)
		{
			printf("%02hhx\n", ptr[a]);
			break;
		}
		printf("%02hhx ", ptr[a]);
	}
	return (0);
}
