#include "main.h"

/**
  *alloc_grid - frees a two dimensional grid
  *@width: width of the grid
  *@height: height of the grid
  *Return: gird
  */

int **alloc_grid(int width, int height)
{
	int **grd = (int **)malloc((height) * sizeof(int *));
	int a, b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	if (grd != NULL)
	{
		for (a = 0; a < height; a++)
		{
			grd[a] = (int *)malloc(width * sizeof(int));

			if (grd[a] == NULL)
			{
				for (b = 0; b < width; b++)
				{
					free(grd[b]);
				}

				free(grd);
				return (NULL);
			}
		}
	}

	return (grd);
}
