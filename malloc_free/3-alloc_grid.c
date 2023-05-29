#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
  * alloc_grid - funtion
  *
  * Description: This function returns a pointer
  * to a 2 dimensional array of integers
  *
  * @width: Widht of the grid
  *
  * @height: Height of the grid
  *
  * Return: pointer to a 2 dimensional array of integers or Null if fails
  */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
