#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: minumum value
 * @max: maximum value
 * Return: pointer to array, NULL if failed
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	/* add on to include all digits */
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
