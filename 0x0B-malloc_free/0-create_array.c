#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initializes with c
 * @size: size of array
 * @c: the specific character
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	for (i = 0; i < (int) size; i++)
		ptr[i] = c;

	return (ptr);
	free(ptr);
}
