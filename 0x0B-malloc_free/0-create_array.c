#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array of chars and initializes with c
 * @size: the number of elements in the array
 * @c: the specific char
 * Return: a ptr to heap space
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr != NULL)
	{
		for (i = 0; i <= size; i++)
			ptr[i] = c;
	}
	else
		return (NULL);

	return (ptr);
}
