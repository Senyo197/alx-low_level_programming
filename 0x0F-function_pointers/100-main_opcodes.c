#include "function_pointers.h"

/**
 *prnt_opcode - print operation code
 *@number_of_bytes: - number of bytes to be printed
 */
void prnt_opcode(int number_of_bytes)
{
	unsigned char *oprt = (unsigned char *)main;
	int a;

	for (a = 0; a < number_of_bytes; a++)
	{
		if (a == number_of_bytes - 1)
		{
			printf("%02hhx\n", oprt[a]);
			break;
		}
	}
	printf("%02hhx ", oprt[a]);
}

/**
  *main - print operation code
  *@argc: number of command line arguments
  *@argv: array of command line arguments
  *Return: 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;

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

	prnt_opcode(number_of_bytes);
	return (0);
}
