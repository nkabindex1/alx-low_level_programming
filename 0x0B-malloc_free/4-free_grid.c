#include "main.h"
/**
 *free_grid - free grid from memory
 *@grid: 2-dim array
 *@height: input
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
