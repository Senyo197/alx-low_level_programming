#include "main.h"
/**
  *ch_coins - help change coins to lesser value
  *@cent: cent
  *@coins: array of coins
  *@coins_deno: minimun coins denominator
  *Return: changed coins
  */

int ch_coins(int cent, int coins[], int coins_deno)
{
int a;
int less_coins = INT_MAX;

	if (cent == 0)
	{
		return (0);
	}

	for (a = 0; a < coins_deno; a++)
	{
		if (cent >= coins[a])
		{
			int recurse_coins = ch_coins(
					cent - coins[a],
					coins,
					coins_deno
					) + 1;
			if (recurse_coins < less_coins)
			{
				less_coins = recurse_coins;
			}
		}
	}

	return (less_coins);
}

/**
  *main - prints the minimum number of coins to change an amount of money
  *@argc: number of command line arguments
  *@argv: array of command line arguments
  *Return: 0 for success, 1 for error
  */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int coins_deno = sizeof(coins) / sizeof(int);
	int less_coins;
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent == 0)
	{
		printf("0\n");
		return (0);
	}

	less_coins = ch_coins(cent, coins, coins_deno);

	printf("%d\n", less_coins);
	return (0);
}
