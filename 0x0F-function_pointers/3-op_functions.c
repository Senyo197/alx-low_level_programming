#include "3-calc.h"
#include <stdio.h>

/**
  *op_add - add two integer
  *@a: first integer
  *@b: second integer
  *Return: added result
  */
int op_add(int a, int b)
{
	int rst = a + b;

	return (rst);
}

/**
  *op_sub - gets the difference between two integer
  *@a: first integer
  *@b: second integer
  *Return: the difference
  */
int op_sub(int a, int b)
{
	int rst = a - b;

	return (rst);
}

/**
  *op_mul - multiplies two integers
  *@a: first integer
  *@b: second integer
  *Return: product
  */
int op_mul(int a, int b)
{
	int rst = (a * b);

	return (rst);
}

/**
  *op_div - divides two integer
  *@a: first intger
  *@b: second integer
  *Return: divided result
  */
int op_div(int a, int b)
{
	int rst = a / b;

	return (rst);
}

/**
  *op_mod - gets the remainder of two integers
  *@a: first integer
  *@b: second integer
  *Return: remainder
  */
int op_mod(int a, int b)
{
	int rst = a % b;

	return (rst);
}
