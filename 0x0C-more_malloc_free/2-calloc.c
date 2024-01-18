#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills the memory area pointed to by s with the constant byte b
 * @s: array to fill
 * @b: character(s) to be written
 * @n: no of times
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
	s[n] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory space for array
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to space, NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* size_t cuz thats the result type of sizeof() */
	/* cast to ensure multiplication in same data type */
	size_t totalArrayLength = (size_t)nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(totalArrayLength);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	_memset(ptr, 0, totalArrayLength);

	return (ptr);
}
