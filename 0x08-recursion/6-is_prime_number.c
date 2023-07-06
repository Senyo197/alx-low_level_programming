#include "main.h"

/**
  *find_pm - help to find the prime number
  *@n: number to be checked
  *@divide: the current divisor to check
  *Return: 1, 0 if otherwise
  */

int find_pm(int n, int divide)
{
	if (n == divide)
	{
		return (1);
	}

	if (n % divide == 0)
	{
		return (0);
	}

	return (find_pm(n, divide + 1));
}

/**
*is_prime_number - calculate prime number of a number
*@n: number to checked
*Return: 1, 0 if otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (find_pm(n, 2));
}
