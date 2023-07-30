#include "3-calc.h"

/**
  *main - calculate arguments per various calculation methods
  *@argc: number of command line arguments
  *@argv: array of command line arguments
  *Return: 0, success
  */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *op;
	int (*cal_metd)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];

	cal_metd = get_op_func(op);

	if (cal_metd == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (cal_metd)(num1, num2);
	printf("%d\n", result);

	return (0);
}
