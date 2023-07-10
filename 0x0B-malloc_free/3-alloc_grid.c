#include "main.h"
/**
 *alloc_grid - create 2-dim initialized 0
 *@height: input
 *@width: input
 *Return: 2-dim array
 */

int **alloc_grid(int width, int height)
{
	char **grid;
	unsigned int x, y;

	if (width < 1 && height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width); 
		if (grid[x] == NULL)
		{
			for (; x > 1; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
