#include "main.h"
#include <stdlib.h>

/**
* free_grid - free a 2D array
*
* @grid: array
* @height: height of array
*
* Return: pointer
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
