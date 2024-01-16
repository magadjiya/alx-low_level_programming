#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: the array
 * @height: length of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]); /*you have to free 1 by 1 esp for 2D*/
		free(grid);
	}
}
