#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to heap space using malloc
 * @b: size of bytes demanded
 * Return: pointer to heap space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
