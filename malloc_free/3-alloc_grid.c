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
	int i = 0;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		return (NULL);
		free(grid);
	}
		for (i = 0; i <= width; i++)
		{
			grid[i] = malloc(sizeof(int *) * height);
			if (grid[i] == NULL)
			{
				return (NULL);
				free(grid[i]);
			}
		}
	return (grid);
}
