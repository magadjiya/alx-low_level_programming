#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns allocated memory for a 2D array
 * @width: of the array
 * @height: of the array
 * Return: ptr to the allocated 2D space
 */
int **alloc_grid(int width, int height)
{
	int **ptr; /* 2D hence ptr to a ptr */
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* get space for the total height */
	ptr = malloc(sizeof(int) * height);

	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			/* on each row get space for the whole width */
			ptr[i] = malloc(sizeof(int) * width);
			if (ptr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					ptr[i][j] = 0;
			}
			else
			{
				return (NULL);
			}
		}
	}
	else
		return (NULL);

	return (ptr);
}
