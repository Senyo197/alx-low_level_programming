#include "main.h"

/**
  *print_chessboard - prints chess board
  *@a: pointer array for the chessboard
  */
void print_chessboard(char (*a)[8])
{
	int y, z;

	for (y = 0; y <= 7; y++)
	{
		for (z = 0; z <= 7; z++)
		{
			_putchar(a[y][z]);
		}

		_putchar('\n');
	}
}
