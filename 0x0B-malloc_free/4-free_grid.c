#include "main.h"

/**
  *free_grid - to free grid
  *@grid: the grid function
  *@height: column of the 2D array
  */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
