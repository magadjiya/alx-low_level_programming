#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: number of bytes to copy
 * Return: destination string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
