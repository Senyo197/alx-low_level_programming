#include "main.h"

/**
  *find_sqrt - function to help find square root of a number
  *@n: number to calculate the square root of
  *@st: the starting point for the search
  *@end: the ending point for the search
  *Return: square root of n or -1 if no natural square root found
  */

int find_sqrt(long n, long st, long end)
{
	int mdd = (st + end) / 2;
	int sq = mdd * mdd;

	if (st > end)
	{
		return (-1);
	}

	if (sq == n)
	{
		return (mdd);
	}
	else if (sq > n)
	{
		return (find_sqrt(n, st, mdd - 1));
	}
	else
	{
		return (find_sqrt(n, mdd + 1, end));
	}
}


/**
*_sqrt_recursion - calculates square root of a number
*@n: number
*Return: -1 if < 0 and return n if n > 0 or n = 0
*/
int _sqrt_recursion(int n)
{
	int rst;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	rst = find_sqrt((long)n, 1, (long)n);
	return (rst);
}
