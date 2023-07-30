#include "3-calc.h"

#include <string.h>
#include <stddef.h>

/**
  *get_op_func - selects the right calculation method
  *@s: the operator to be passed as an argument
  *Return: A pointer to a function matching the given operator as argument
  */
int (*get_op_func(char *s))(int, int)
{

	int a;

	op_t cal_mtd[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	for (a = 0; cal_mtd[a].op != NULL; a++)
	{
		if (strcmp(cal_mtd[a].op, s) == 0)
			return (cal_mtd[a].f);
	}

	return (NULL);
}
