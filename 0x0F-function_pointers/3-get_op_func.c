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

	int a = 0;

	op_t cal_mtd[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	while (cal_mtd[a].op != NULL && *(cal_mtd[a].op) != *s)
		a++;

	return (cal_mtd[a].f);
}
