#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * free_grid - Funtion
 *
 * Description: This function frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: 2 dimensional grid to be freed.
 *
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
