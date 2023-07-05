#include "main.h"

/**
  *_pow_recursion - finds power of a number
  *@x: number to be exponented
  *@y: exponetial number
  *Return: -1 if number is < 0, 1 if 0, else factorial of numbers
  */
int _pow_recursion(int x, int y)
{
        int rst;

        if (y < 0)
        {
                return (-1);
        }

        if (y == 0)
        {
                return (1);
        }

        rst = x * _pow_recursion(x, (y - 1));

        return (rst);
}
