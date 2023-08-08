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

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
		ptr[i] = c;

	return (ptr);
	free(ptr);
}
